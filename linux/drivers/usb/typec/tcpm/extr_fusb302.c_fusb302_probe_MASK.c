
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; scalar_t__ irq; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_3__ {int fwnode; } ;
struct fusb302_chip {int wq; TYPE_1__ tcpc_dev; int tcpm_port; scalar_t__ gpio_int_n_irq; int bc_lvl_handler; int irq_work; int irq_lock; struct device* dev; int vbus; int extcon; int lock; struct i2c_client* i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*) ;
 scalar_t__ FUNC_8 (struct device*,char*,char const**) ;
 struct fusb302_chip* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,char*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (char const*) ;
 int VAR_7 ;
 int FUNC_13 (struct fusb302_chip*) ;
 int FUNC_14 (struct fusb302_chip*) ;
 int FUNC_15 (struct device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct i2c_adapter*,int ) ;
 int FUNC_18 (struct i2c_client*,struct fusb302_chip*) ;
 int FUNC_19 (struct fusb302_chip*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (scalar_t__,int ,int,char*,struct fusb302_chip*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct device*,TYPE_1__*) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 struct fusb302_chip *VAR_12;
 struct i2c_adapter *VAR_13 = VAR_10->adapter;
 struct device *VAR_14 = &VAR_10->dev;
 const char *VAR_15;
 int VAR_16 = 0;

 if (!FUNC_17(VAR_13, VAR_4)) {
  FUNC_6(&VAR_10->dev,
   "I2C/SMBus block functionality not supported!\n");
  return -VAR_0;
 }
 VAR_12 = FUNC_9(&VAR_10->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->i2c_client = VAR_10;
 VAR_12->dev = &VAR_10->dev;
 FUNC_21(&VAR_12->lock);
 if (FUNC_8(VAR_14, "linux,extcon-name", &VAR_15) == 0) {
  VAR_12->extcon = FUNC_12(VAR_15);
  if (!VAR_12->extcon)
   return -VAR_2;
 }

 VAR_12->vbus = FUNC_10(VAR_12->dev, "vbus");
 if (FUNC_2(VAR_12->vbus))
  return FUNC_3(VAR_12->vbus);

 VAR_12->wq = FUNC_4(FUNC_7(VAR_12->dev));
 if (!VAR_12->wq)
  return -VAR_1;

 FUNC_23(&VAR_12->irq_lock);
 FUNC_1(&VAR_12->irq_work, VAR_9);
 FUNC_0(&VAR_12->bc_lvl_handler, VAR_7);
 FUNC_20(&VAR_12->tcpc_dev);
 FUNC_14(VAR_12);

 if (VAR_10->irq) {
  VAR_12->gpio_int_n_irq = VAR_10->irq;
 } else {
  VAR_16 = FUNC_19(VAR_12);
  if (VAR_16 < 0)
   goto destroy_workqueue;
 }

 VAR_12->tcpc_dev.fwnode = FUNC_15(VAR_14);
 if (FUNC_2(VAR_12->tcpc_dev.fwnode)) {
  VAR_16 = FUNC_3(VAR_12->tcpc_dev.fwnode);
  goto destroy_workqueue;
 }

 VAR_12->tcpm_port = FUNC_24(&VAR_10->dev, &VAR_12->tcpc_dev);
 if (FUNC_2(VAR_12->tcpm_port)) {
  FUNC_16(VAR_12->tcpc_dev.fwnode);
  VAR_16 = FUNC_3(VAR_12->tcpm_port);
  if (VAR_16 != -VAR_2)
   FUNC_6(VAR_14, "cannot register tcpm port, ret=%d", VAR_16);
  goto destroy_workqueue;
 }

 VAR_16 = FUNC_22(VAR_12->gpio_int_n_irq, VAR_8,
     VAR_5 | VAR_6,
     "fsc_interrupt_int_n", VAR_12);
 if (VAR_16 < 0) {
  FUNC_6(VAR_14, "cannot request IRQ for GPIO Int_N, ret=%d", VAR_16);
  goto tcpm_unregister_port;
 }
 FUNC_11(VAR_12->gpio_int_n_irq);
 FUNC_18(VAR_10, VAR_12);

 return VAR_16;

tcpm_unregister_port:
 FUNC_25(VAR_12->tcpm_port);
 FUNC_16(VAR_12->tcpc_dev.fwnode);
destroy_workqueue:
 FUNC_13(VAR_12);
 FUNC_5(VAR_12->wq);

 return VAR_16;
}
