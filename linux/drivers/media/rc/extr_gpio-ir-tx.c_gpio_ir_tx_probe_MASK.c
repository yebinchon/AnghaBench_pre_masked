
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int s_tx_carrier; int s_tx_duty_cycle; int tx_ir; int device_name; int driver_name; struct gpio_ir* priv; } ;
struct platform_device {int dev; } ;
struct gpio_ir {int carrier; int duty_cycle; int lock; int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int *,int ) ;
 struct gpio_ir* FUNC_4 (int *,int,int ) ;
 struct rc_dev* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct rc_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_10)
{
 struct gpio_ir *VAR_11;
 struct rc_dev *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_4(&VAR_10->dev, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_5(&VAR_10->dev, VAR_6);
 if (!VAR_12)
  return -VAR_2;

 VAR_11->gpio = FUNC_3(&VAR_10->dev, ((void*)0), VAR_5);
 if (FUNC_0(VAR_11->gpio)) {
  if (FUNC_1(VAR_11->gpio) != -VAR_3)
   FUNC_2(&VAR_10->dev, "Failed to get gpio (%ld)\n",
    FUNC_1(VAR_11->gpio));
  return FUNC_1(VAR_11->gpio);
 }

 VAR_12->priv = VAR_11;
 VAR_12->driver_name = VAR_1;
 VAR_12->device_name = VAR_0;
 VAR_12->tx_ir = VAR_7;
 VAR_12->s_tx_duty_cycle = VAR_9;
 VAR_12->s_tx_carrier = VAR_8;

 VAR_11->carrier = 38000;
 VAR_11->duty_cycle = 50;
 FUNC_7(&VAR_11->lock);

 VAR_13 = FUNC_6(&VAR_10->dev, VAR_12);
 if (VAR_13 < 0)
  FUNC_2(&VAR_10->dev, "failed to register rc device\n");

 return VAR_13;
}
