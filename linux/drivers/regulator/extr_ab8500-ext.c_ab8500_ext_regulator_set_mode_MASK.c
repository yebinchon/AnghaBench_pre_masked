
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct ab8500_ext_regulator_info {int update_val; int update_mask; int update_reg; int update_bank; TYPE_2__ desc; int dev; TYPE_1__* cfg; int update_val_lp; int update_val_hp; } ;
struct TYPE_3__ {scalar_t__ hwreq; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct regulator_dev*) ;
 struct ab8500_ext_regulator_info* FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3 = 0;
 struct ab8500_ext_regulator_info *VAR_4 = FUNC_5(VAR_1);
 u8 VAR_5;

 if (VAR_4 == ((void*)0)) {
  FUNC_3(FUNC_4(VAR_1), "regulator info null pointer\n");
  return -VAR_0;
 }

 switch (VAR_2) {
 case 128:
  VAR_5 = VAR_4->update_val_hp;
  break;
 case 129:
  VAR_5 = VAR_4->update_val_lp;
  break;

 default:
  return -VAR_0;
 }





 if (FUNC_0(VAR_1) &&
     !(VAR_4->cfg && VAR_4->cfg->hwreq)) {
  VAR_3 = FUNC_1(VAR_4->dev,
     VAR_4->update_bank, VAR_4->update_reg,
     VAR_4->update_mask, VAR_5);
  if (VAR_3 < 0) {
   FUNC_3(FUNC_4(VAR_1),
    "Could not set regulator mode.\n");
   return VAR_3;
  }

  FUNC_2(FUNC_4(VAR_1),
   "%s-set_mode (bank, reg, mask, value): "
   "0x%x, 0x%x, 0x%x, 0x%x\n",
   VAR_4->desc.name, VAR_4->update_bank, VAR_4->update_reg,
   VAR_4->update_mask, VAR_5);
 }

 VAR_4->update_val = VAR_5;

 return 0;
}
