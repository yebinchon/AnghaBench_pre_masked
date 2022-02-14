
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dev; } ;
struct pca9685 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pca9685*,struct pwm_device*) ;
 int FUNC_1 (int ) ;
 struct pca9685* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct pca9685 *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_3, VAR_2))
  return -VAR_0;
 FUNC_1(VAR_1->dev);

 return 0;
}
