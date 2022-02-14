
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rc_dev {int driver_name; int s_tx_carrier; int s_tx_duty_cycle; int tx_ir; int close; int open; TYPE_1__* priv; } ;
struct pwm_device {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int function; } ;
struct TYPE_3__ {struct rc_dev* rcdev; int * dev; TYPE_2__ timer; int freq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct pwm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct pwm_device*) ;
 int VAR_6 ;
 int FUNC_3 (int *,char*,int) ;
 struct rc_dev* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct rc_dev*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct pwm_device* FUNC_7 (int *,int *) ;
 int FUNC_8 (struct pwm_device*) ;
 int FUNC_9 (struct pwm_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_14)
{
 struct pwm_device *VAR_15;
 struct rc_dev *VAR_16;

 VAR_15 = FUNC_7(&VAR_14->dev, ((void*)0));
 if (FUNC_1(VAR_15)) {
  int VAR_17 = FUNC_2(VAR_15);

  if (VAR_17 != -VAR_2)
   FUNC_3(&VAR_14->dev, "pwm_get failed: %d\n", VAR_17);
  return VAR_17;
 }


 VAR_7 = FUNC_0(FUNC_8(VAR_15), VAR_5);
 FUNC_9(VAR_15);

 FUNC_6(&VAR_7, VAR_0, VAR_3);
 VAR_7 = VAR_12;

 VAR_7 = &VAR_14->dev;

 VAR_16 = FUNC_4(&VAR_14->dev, VAR_6);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->priv = &VAR_7;
 VAR_16->open = VAR_8;
 VAR_16->close = VAR_9;
 VAR_16->tx_ir = VAR_13;
 VAR_16->s_tx_duty_cycle = VAR_10;
 VAR_16->s_tx_carrier = VAR_11;
 VAR_16->driver_name = VAR_4;

 VAR_7 = VAR_16;

 return FUNC_5(&VAR_14->dev, VAR_7);
}
