
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct ab8500_regulator_info {int mode_mask; int mode_val_normal; int mode_val_idle; int update_val; int update_val_normal; int update_val_idle; int mode_reg; int mode_bank; int dev; TYPE_1__* shared_mode; } ;
struct TYPE_2__ {scalar_t__ lp_mode_req; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct regulator_dev*) ;
 struct ab8500_regulator_info* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_4(struct regulator_dev *VAR_3)
{
 struct ab8500_regulator_info *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 u8 VAR_8;

 if (VAR_4 == ((void*)0)) {
  FUNC_1(FUNC_2(VAR_3), "regulator info null pointer\n");
  return -VAR_0;
 }


 if (VAR_4->shared_mode) {
  if (VAR_4->shared_mode->lp_mode_req)
   return VAR_1;
  else
   return VAR_2;
 }

 if (VAR_4->mode_mask) {

  VAR_5 = FUNC_0(VAR_4->dev,
  VAR_4->mode_bank, VAR_4->mode_reg, &VAR_6);
  VAR_6 = VAR_6 & VAR_4->mode_mask;

  VAR_7 = VAR_4->mode_val_normal;
  VAR_8 = VAR_4->mode_val_idle;
 } else {

  VAR_6 = VAR_4->update_val;
  VAR_7 = VAR_4->update_val_normal;
  VAR_8 = VAR_4->update_val_idle;
 }

 if (VAR_6 == VAR_7)
  VAR_5 = VAR_2;
 else if (VAR_6 == VAR_8)
  VAR_5 = VAR_1;
 else
  VAR_5 = -VAR_0;

 return VAR_5;
}
