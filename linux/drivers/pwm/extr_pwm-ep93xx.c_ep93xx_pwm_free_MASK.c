
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_1(VAR_0->dev);

 FUNC_0(VAR_2);
}
