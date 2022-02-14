
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct ir_rx51* priv; } ;
struct ir_rx51 {int dev; int pwm; int device_is_open; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_1)
{
 struct ir_rx51 *VAR_2 = VAR_1->priv;

 if (FUNC_4(1, &VAR_2->device_is_open))
  return -VAR_0;

 VAR_2->pwm = FUNC_3(VAR_2->dev, ((void*)0));
 if (FUNC_0(VAR_2->pwm)) {
  int VAR_3 = FUNC_1(VAR_2->pwm);

  FUNC_2(VAR_2->dev, "pwm_get failed: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
