
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct regulator_dev {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct ab8500_ext_regulator_info {int update_mask; int update_reg; int update_bank; TYPE_2__ desc; int dev; scalar_t__ update_val_hw; TYPE_1__* cfg; } ;
struct TYPE_3__ {scalar_t__ hwreq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct regulator_dev*) ;
 struct ab8500_ext_regulator_info* FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1)
{
 int VAR_2;
 struct ab8500_ext_regulator_info *VAR_3 = FUNC_4(VAR_1);
 u8 VAR_4;

 if (VAR_3 == ((void*)0)) {
  FUNC_2(FUNC_3(VAR_1), "regulator info null pointer\n");
  return -VAR_0;
 }




 if (VAR_3->cfg && VAR_3->cfg->hwreq)
  VAR_4 = VAR_3->update_val_hw;
 else
  VAR_4 = 0;

 VAR_2 = FUNC_0(VAR_3->dev,
  VAR_3->update_bank, VAR_3->update_reg,
  VAR_3->update_mask, VAR_4);
 if (VAR_2 < 0) {
  FUNC_2(FUNC_3(VAR_1),
   "couldn't set disable bits for regulator\n");
  return VAR_2;
 }

 FUNC_1(FUNC_3(VAR_1), "%s-disable (bank, reg, mask, value):"
  " 0x%02x, 0x%02x, 0x%02x, 0x%02x\n",
  VAR_3->desc.name, VAR_3->update_bank, VAR_3->update_reg,
  VAR_3->update_mask, VAR_4);

 return 0;
}
