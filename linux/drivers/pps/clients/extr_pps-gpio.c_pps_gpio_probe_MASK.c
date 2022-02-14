
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pps_gpio_platform_data {int echo_active_ms; scalar_t__ capture_clear; int assert_falling_edge; scalar_t__ echo_pin; int gpio_pin; } ;
struct TYPE_10__ {int mode; int name; int echo; int owner; } ;
struct pps_gpio_device_data {int irq; TYPE_1__* pps; TYPE_3__ info; scalar_t__ capture_clear; int echo_timer; int echo_active_ms; int echo_timeout; scalar_t__ echo_pin; int gpio_pin; int assert_falling_edge; } ;
struct TYPE_11__ {struct pps_gpio_platform_data* platform_data; } ;
struct platform_device {char* name; int id; TYPE_4__ dev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct pps_gpio_device_data* FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_4__*,int,int ,int ,int ,struct pps_gpio_device_data*) ;
 int FUNC_6 (struct pps_gpio_device_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct platform_device*,struct pps_gpio_device_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (struct platform_device*) ;
 TYPE_1__* FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,scalar_t__,char*,char*,int) ;
 int FUNC_14 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_16)
{
 struct pps_gpio_device_data *VAR_17;
 int VAR_18;
 int VAR_19;
 const struct pps_gpio_platform_data *VAR_20 = VAR_16->dev.platform_data;


 VAR_17 = FUNC_4(&VAR_16->dev, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;
 FUNC_9(VAR_16, VAR_17);


 if (VAR_20) {
  VAR_17->gpio_pin = VAR_20->gpio_pin;
  VAR_17->echo_pin = VAR_20->echo_pin;

  VAR_17->assert_falling_edge = VAR_20->assert_falling_edge;
  VAR_17->capture_clear = VAR_20->capture_clear;
  VAR_17->echo_active_ms = VAR_20->echo_active_ms;
 } else {
  VAR_18 = FUNC_10(VAR_16);
  if (VAR_18)
   return -VAR_0;
 }


 VAR_18 = FUNC_7(VAR_17->gpio_pin);
 if (VAR_18 < 0) {
  FUNC_2(&VAR_16->dev, "failed to map GPIO to IRQ: %d\n", VAR_18);
  return -VAR_0;
 }
 VAR_17->irq = VAR_18;


 VAR_17->info.mode = VAR_4 | VAR_9 |
  VAR_6 | VAR_3 | VAR_11;
 if (VAR_17->capture_clear)
  VAR_17->info.mode |= VAR_5 | VAR_10 |
   VAR_7;
 VAR_17->info.owner = VAR_12;
 FUNC_13(VAR_17->info.name, VAR_8 - 1, "%s.%d",
   VAR_16->name, VAR_16->id);
 if (VAR_17->echo_pin) {
  VAR_17->info.echo = VAR_13;
  VAR_17->echo_timeout = FUNC_8(VAR_17->echo_active_ms);
  FUNC_14(&VAR_17->echo_timer, VAR_14, 0);
 }


 VAR_19 = VAR_4 | VAR_9;
 if (VAR_17->capture_clear)
  VAR_19 |= VAR_5 | VAR_10;
 VAR_17->pps = FUNC_11(&VAR_17->info, VAR_19);
 if (FUNC_0(VAR_17->pps)) {
  FUNC_2(&VAR_16->dev, "failed to register IRQ %d as PPS source\n",
   VAR_17->irq);
  return FUNC_1(VAR_17->pps);
 }


 VAR_18 = FUNC_5(&VAR_16->dev, VAR_17->irq, VAR_15,
   FUNC_6(VAR_17), VAR_17->info.name, VAR_17);
 if (VAR_18) {
  FUNC_12(VAR_17->pps);
  FUNC_2(&VAR_16->dev, "failed to acquire IRQ %d\n", VAR_17->irq);
  return -VAR_0;
 }

 FUNC_3(VAR_17->pps->dev, "Registered IRQ %d as PPS source\n",
   VAR_17->irq);

 return 0;
}
