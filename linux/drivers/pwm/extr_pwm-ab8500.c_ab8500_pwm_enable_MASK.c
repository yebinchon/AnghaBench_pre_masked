
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int label; } ;
struct pwm_chip {int base; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->dev,
    VAR_0, VAR_1,
    1 << (VAR_2->base - 1), 1 << (VAR_2->base - 1));
 if (VAR_4 < 0)
  FUNC_1(VAR_2->dev, "%s: Failed to enable PWM, Error %d\n",
       VAR_3->label, VAR_4);
 return VAR_4;
}
