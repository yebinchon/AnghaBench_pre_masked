
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int s_tx_carrier; int s_tx_duty_cycle; int tx_ir; int device_name; int driver_name; struct pwm_ir* priv; } ;
struct pwm_ir {int carrier; int duty_cycle; int pwm; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 struct pwm_ir* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct rc_dev* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct rc_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_8)
{
 struct pwm_ir *VAR_9;
 struct rc_dev *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(&VAR_8->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->pwm = FUNC_4(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_9->pwm))
  return FUNC_1(VAR_9->pwm);

 VAR_9->carrier = 38000;
 VAR_9->duty_cycle = 50;

 VAR_10 = FUNC_5(&VAR_8->dev, VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->priv = VAR_9;
 VAR_10->driver_name = VAR_1;
 VAR_10->device_name = VAR_0;
 VAR_10->tx_ir = VAR_7;
 VAR_10->s_tx_duty_cycle = VAR_6;
 VAR_10->s_tx_carrier = VAR_5;

 VAR_11 = FUNC_6(&VAR_8->dev, VAR_10);
 if (VAR_11 < 0)
  FUNC_2(&VAR_8->dev, "failed to register rc device\n");

 return VAR_11;
}
