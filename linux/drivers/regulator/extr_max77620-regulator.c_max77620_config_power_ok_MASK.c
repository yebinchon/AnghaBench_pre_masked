
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max77620_regulator_pdata {int power_ok; } ;
struct max77620_regulator_info {int cfg_addr; int type; } ;
struct max77620_regulator {TYPE_1__* dev; int rmap; struct max77620_regulator_info** rinfo; struct max77620_regulator_pdata* reg_pdata; } ;
struct max77620_chip {int chip_id; } ;
struct TYPE_2__ {int parent; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int) ;
 struct max77620_chip* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct max77620_regulator *VAR_3, int VAR_4)
{
 struct max77620_regulator_pdata *VAR_5 = &VAR_3->reg_pdata[VAR_4];
 struct max77620_regulator_info *VAR_6 = VAR_3->rinfo[VAR_4];
 struct max77620_chip *VAR_7 = FUNC_1(VAR_3->dev->parent);
 u8 VAR_8, VAR_9;
 int VAR_10;

 switch (VAR_7->chip_id) {
 case 128:
  if (VAR_5->power_ok >= 0) {
   if (VAR_6->type == VAR_2)
    VAR_9 = VAR_1;
   else
    VAR_9 = VAR_0;

   VAR_8 = VAR_5->power_ok ? VAR_9 : 0;

   VAR_10 = FUNC_2(VAR_3->rmap, VAR_6->cfg_addr,
       VAR_9, VAR_8);
   if (VAR_10 < 0) {
    FUNC_0(VAR_3->dev, "Reg 0x%02x update failed %d\n",
     VAR_6->cfg_addr, VAR_10);
    return VAR_10;
   }
  }
  break;

 default:
  break;
 }

 return 0;
}
