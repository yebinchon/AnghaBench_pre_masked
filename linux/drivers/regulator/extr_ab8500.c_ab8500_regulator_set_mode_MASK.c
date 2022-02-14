
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct regulator_dev {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct ab8500_regulator_info {TYPE_2__* shared_mode; scalar_t__ update_val; scalar_t__ mode_mask; TYPE_1__ desc; int dev; scalar_t__ update_val_idle; scalar_t__ mode_val_idle; scalar_t__ update_val_normal; scalar_t__ mode_val_normal; scalar_t__ update_mask; scalar_t__ update_reg; scalar_t__ update_bank; scalar_t__ mode_reg; scalar_t__ mode_bank; } ;
struct TYPE_4__ {int lp_mode_req; struct ab8500_regulator_info* shared_regulator; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct regulator_dev*) ;
 struct ab8500_regulator_info* FUNC_7 (struct regulator_dev*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct regulator_dev *VAR_2,
         unsigned int VAR_3)
{
 int VAR_4 = 0;
 u8 VAR_5, VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 0;
 struct ab8500_regulator_info *VAR_10 = FUNC_7(VAR_2);

 if (VAR_10 == ((void*)0)) {
  FUNC_2(FUNC_6(VAR_2), "regulator info null pointer\n");
  return -VAR_0;
 }

 if (VAR_10->mode_mask) {
  VAR_5 = VAR_10->mode_bank;
  VAR_6 = VAR_10->mode_reg;
  VAR_7 = VAR_10->mode_mask;
 } else {
  VAR_5 = VAR_10->update_bank;
  VAR_6 = VAR_10->update_reg;
  VAR_7 = VAR_10->update_mask;
 }

 if (VAR_10->shared_mode)
  FUNC_4(&VAR_1);

 switch (VAR_3) {
 case 128:
  if (VAR_10->shared_mode)
   VAR_9 = 0;

  if (VAR_10->mode_mask)
   VAR_8 = VAR_10->mode_val_normal;
  else
   VAR_8 = VAR_10->update_val_normal;
  break;
 case 129:
  if (VAR_10->shared_mode) {
   struct ab8500_regulator_info *VAR_11;

   VAR_11 = VAR_10->shared_mode->shared_regulator;
   if (!VAR_11->shared_mode->lp_mode_req) {

    VAR_10->shared_mode->lp_mode_req = 1;
    goto out_unlock;
   }

   VAR_9 = 1;
  }

  if (VAR_10->mode_mask)
   VAR_8 = VAR_10->mode_val_idle;
  else
   VAR_8 = VAR_10->update_val_idle;
  break;
 default:
  VAR_4 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_10->mode_mask || FUNC_0(VAR_2)) {
  VAR_4 = FUNC_1(VAR_10->dev,
   VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_4 < 0) {
   FUNC_2(FUNC_6(VAR_2),
    "couldn't set regulator mode\n");
   goto out_unlock;
  }

  FUNC_3(FUNC_6(VAR_2),
   "%s-set_mode (bank, reg, mask, value): "
   "0x%x, 0x%x, 0x%x, 0x%x\n",
   VAR_10->desc.name, VAR_5, VAR_6,
   VAR_7, VAR_8);
 }

 if (!VAR_10->mode_mask)
  VAR_10->update_val = VAR_8;

 if (VAR_10->shared_mode)
  VAR_10->shared_mode->lp_mode_req = VAR_9;

out_unlock:
 if (VAR_10->shared_mode)
  FUNC_5(&VAR_1);

 return VAR_4;
}
