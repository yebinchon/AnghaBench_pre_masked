
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int dutycycle_unit; int min_uV_dutycycle; int max_uV_dutycycle; } ;
struct TYPE_4__ {int continuous_voltage_range; int * ops; } ;
struct pwm_regulator_data {TYPE_3__ continuous; TYPE_1__ desc; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (int ,char*,int*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2,
      struct pwm_regulator_data *VAR_3)
{
 u32 VAR_4[2] = { 0, 100 };
 u32 VAR_5 = 100;

 VAR_3->desc.ops = &VAR_1;
 VAR_3->desc.continuous_voltage_range = 1;

 FUNC_1(VAR_2->dev.of_node,
       "pwm-dutycycle-range",
       VAR_4, 2);
 FUNC_0(VAR_2->dev.of_node, "pwm-dutycycle-unit",
        &VAR_5);

 if (VAR_4[0] > VAR_5 ||
     VAR_4[1] > VAR_5)
  return -VAR_0;

 VAR_3->continuous.dutycycle_unit = VAR_5;
 VAR_3->continuous.min_uV_dutycycle = VAR_4[0];
 VAR_3->continuous.max_uV_dutycycle = VAR_4[1];

 return 0;
}
