
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s3c_adc_client {int dummy; } ;
struct s3c_adc_bat_pdata {scalar_t__ gpio_charge_finished; int (* exit ) () ;scalar_t__ backup_volt_mult; } ;
struct TYPE_4__ {struct s3c_adc_bat_pdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {int psy; } ;
struct TYPE_5__ {int psy; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__ VAR_2 ;
 struct s3c_adc_client* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct s3c_adc_client*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct s3c_adc_client *VAR_4 = FUNC_4(VAR_3);
 struct s3c_adc_bat_pdata *VAR_5 = VAR_3->dev.platform_data;

 FUNC_5(VAR_2.psy);
 if (VAR_5->backup_volt_mult)
  FUNC_5(VAR_0.psy);

 FUNC_6(VAR_4);

 if (VAR_5->gpio_charge_finished >= 0) {
  FUNC_1(FUNC_3(VAR_5->gpio_charge_finished), ((void*)0));
  FUNC_2(VAR_5->gpio_charge_finished);
 }

 FUNC_0(&VAR_1);

 if (VAR_5->exit)
  VAR_5->exit();

 return 0;
}
