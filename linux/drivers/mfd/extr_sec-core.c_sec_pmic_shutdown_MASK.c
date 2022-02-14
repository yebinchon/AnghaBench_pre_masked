
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_pmic_dev {int device_type; int regmap_pmic; int dev; TYPE_1__* pdata; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int manual_poweroff; } ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct sec_pmic_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_2)
{
 struct sec_pmic_dev *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4, VAR_5;

 if (!VAR_3->pdata->manual_poweroff)
  return;

 switch (VAR_3->device_type) {
 case 128:
  VAR_4 = VAR_1;
  VAR_5 = VAR_0;
  break;
 default:




  FUNC_0(VAR_3->dev,
   "Unsupported device %lu for manual power off\n",
   VAR_3->device_type);
  return;
 }

 FUNC_2(VAR_3->regmap_pmic, VAR_4, VAR_5, 0);
}
