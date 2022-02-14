
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_pmic_dev {scalar_t__ device_type; int dev; int regmap_pmic; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ disable_wrstbi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sec_pmic_dev *VAR_3)
{
 int VAR_4;

 if (VAR_3->device_type != VAR_0)
  return;

 if (VAR_3->pdata->disable_wrstbi) {





  VAR_4 = FUNC_1(VAR_3->regmap_pmic,
      VAR_1,
      VAR_2, 0x0);
  if (VAR_4)
   FUNC_0(VAR_3->dev,
     "Cannot initialize WRSTBI config: %d\n",
     VAR_4);
 }
}
