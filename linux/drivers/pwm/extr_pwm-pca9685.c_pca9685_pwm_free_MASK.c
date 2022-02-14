
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dev; } ;


 int FUNC_0 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0->dev);
}
