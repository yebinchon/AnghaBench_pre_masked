
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf50633 {int * regulator_pdev; int bl_pdev; int adc_pdev; int mbc_pdev; int rtc_pdev; int input_pdev; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct pcf50633* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct pcf50633*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 struct pcf50633 *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_3(&VAR_2->dev.kobj, &VAR_1);
 FUNC_1(VAR_3);

 FUNC_2(VAR_3->input_pdev);
 FUNC_2(VAR_3->rtc_pdev);
 FUNC_2(VAR_3->mbc_pdev);
 FUNC_2(VAR_3->adc_pdev);
 FUNC_2(VAR_3->bl_pdev);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_2(VAR_3->regulator_pdev[VAR_4]);

 return 0;
}
