
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_chip {int dev; int base; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 struct device* FUNC_3 (int *,int ,int ,struct pwm_chip*,char*,int ) ;
 int VAR_0 ;

void FUNC_4(struct pwm_chip *VAR_1)
{
 struct device *VAR_2;





 VAR_2 = FUNC_3(&VAR_0, VAR_1->dev, FUNC_1(0, 0), VAR_1,
          "pwmchip%d", VAR_1->base);
 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_1->dev,
    "device_create failed for pwm_chip sysfs export\n");
 }
}
