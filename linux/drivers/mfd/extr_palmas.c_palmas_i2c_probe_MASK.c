
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct palmas_platform_data {int irq_flags; unsigned int pad1; unsigned int pad2; unsigned int power_ctrl; scalar_t__ pm_off; scalar_t__ mux_from_pdata; } ;
struct palmas_driver_data {int irq_chip; int * features; } ;
struct palmas {struct i2c_client** i2c_clients; int irq_data; int irq; struct i2c_client** regmap; int led_muxed; int pwm_muxed; int gpio_muxed; TYPE_1__* dev; int features; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; scalar_t__ addr; int adapter; int irq; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct i2c_client*) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 unsigned int VAR_30 ;
 int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (TYPE_1__*,char*,int,...) ;
 struct palmas_platform_data* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 void* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 struct i2c_client* FUNC_10 (struct i2c_client*,int *) ;
 struct i2c_client* FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (struct i2c_client*,struct palmas*) ;
 int FUNC_13 (struct i2c_client*) ;
 struct of_device_id* FUNC_14 (int ,TYPE_1__*) ;
 struct device_node* FUNC_15 (struct device_node*) ;
 int VAR_39 ;
 struct palmas* VAR_40 ;
 int FUNC_16 (struct i2c_client*,struct palmas_platform_data*) ;
 scalar_t__ VAR_41 ;
 int * VAR_42 ;
 int FUNC_17 (struct palmas*,int ,int ,unsigned int,unsigned int) ;
 scalar_t__ VAR_43 ;
 int FUNC_18 (struct i2c_client*,int ,int,int ,int ,int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct i2c_client*,unsigned int,unsigned int*) ;
 int FUNC_21 (struct i2c_client*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_44,
       const struct i2c_device_id *VAR_45)
{
 struct palmas *VAR_46;
 struct palmas_platform_data *VAR_47;
 struct palmas_driver_data *VAR_48;
 struct device_node *VAR_49 = VAR_44->dev.of_node;
 int VAR_50 = 0, VAR_51;
 unsigned int VAR_52, VAR_53;
 int VAR_54;
 const struct of_device_id *VAR_55;

 VAR_47 = FUNC_5(&VAR_44->dev);

 if (VAR_49 && !VAR_47) {
  VAR_47 = FUNC_8(&VAR_44->dev, sizeof(*VAR_47), VAR_3);

  if (!VAR_47)
   return -VAR_2;

  FUNC_16(VAR_44, VAR_47);
 }

 if (!VAR_47)
  return -VAR_0;

 VAR_46 = FUNC_8(&VAR_44->dev, sizeof(struct palmas), VAR_3);
 if (VAR_46 == ((void*)0))
  return -VAR_2;

 FUNC_12(VAR_44, VAR_46);
 VAR_46->dev = &VAR_44->dev;
 VAR_46->irq = VAR_44->irq;

 VAR_55 = FUNC_14(VAR_39, &VAR_44->dev);

 if (!VAR_55)
  return -VAR_1;

 VAR_48 = (struct palmas_driver_data *)VAR_55->data;
 VAR_46->features = *VAR_48->features;

 for (VAR_51 = 0; VAR_51 < VAR_19; VAR_51++) {
  if (VAR_51 == 0)
   VAR_46->i2c_clients[VAR_51] = VAR_44;
  else {
   VAR_46->i2c_clients[VAR_51] =
     FUNC_11(VAR_44->adapter,
       VAR_44->addr + VAR_51);
   if (FUNC_0(VAR_46->i2c_clients[VAR_51])) {
    FUNC_4(VAR_46->dev,
     "can't attach client %d\n", VAR_51);
    VAR_50 = FUNC_3(VAR_46->i2c_clients[VAR_51]);
    goto err_i2c;
   }
   VAR_46->i2c_clients[VAR_51]->dev.of_node = FUNC_15(VAR_49);
  }
  VAR_46->regmap[VAR_51] = FUNC_10(VAR_46->i2c_clients[VAR_51],
    &VAR_42[VAR_51]);
  if (FUNC_0(VAR_46->regmap[VAR_51])) {
   VAR_50 = FUNC_3(VAR_46->regmap[VAR_51]);
   FUNC_4(VAR_46->dev,
    "Failed to allocate regmap %d, err: %d\n",
    VAR_51, VAR_50);
   goto err_i2c;
  }
 }

 if (!VAR_46->irq) {
  FUNC_7(VAR_46->dev, "IRQ missing: skipping irq request\n");
  goto no_irq;
 }


 if (VAR_47->irq_flags & VAR_5)
  VAR_52 = VAR_22;
 else
  VAR_52 = 0;
 VAR_50 = FUNC_17(VAR_46, VAR_36,
   VAR_21, VAR_22,
   VAR_52);
 if (VAR_50 < 0) {
  FUNC_4(VAR_46->dev, "POLARITY_CTRL update failed: %d\n", VAR_50);
  goto err_i2c;
 }


 VAR_54 = FUNC_2(VAR_14);
 VAR_53 = FUNC_1(VAR_14, VAR_15);
 VAR_52 = VAR_16;

 FUNC_21(VAR_46->regmap[VAR_54], VAR_53, VAR_52);

 VAR_50 = FUNC_18(VAR_46->regmap[VAR_54], VAR_46->irq,
      VAR_4 | VAR_47->irq_flags, 0,
      VAR_48->irq_chip, &VAR_46->irq_data);
 if (VAR_50 < 0)
  goto err_i2c;

no_irq:
 VAR_54 = FUNC_2(VAR_36);
 VAR_53 = FUNC_1(VAR_36,
   VAR_24);

 if (VAR_47->mux_from_pdata) {
  VAR_52 = VAR_47->pad1;
  VAR_50 = FUNC_21(VAR_46->regmap[VAR_54], VAR_53, VAR_52);
  if (VAR_50)
   goto err_irq;
 } else {
  VAR_50 = FUNC_20(VAR_46->regmap[VAR_54], VAR_53, &VAR_52);
  if (VAR_50)
   goto err_irq;
 }

 if (!(VAR_52 & VAR_25))
  VAR_46->gpio_muxed |= VAR_6;
 if (!(VAR_52 & VAR_26))
  VAR_46->gpio_muxed |= VAR_7;
 else if ((VAR_52 & VAR_26) ==
   (2 << VAR_27))
  VAR_46->led_muxed |= VAR_17;
 else if ((VAR_52 & VAR_26) ==
   (3 << VAR_27))
  VAR_46->pwm_muxed |= VAR_37;
 if (!(VAR_52 & VAR_28))
  VAR_46->gpio_muxed |= VAR_8;
 else if ((VAR_52 & VAR_28) ==
   (2 << VAR_29))
  VAR_46->led_muxed |= VAR_18;
 else if ((VAR_52 & VAR_28) ==
   (3 << VAR_29))
  VAR_46->pwm_muxed |= VAR_38;
 if (!(VAR_52 & VAR_30))
  VAR_46->gpio_muxed |= VAR_9;

 VAR_53 = FUNC_1(VAR_36,
   VAR_31);

 if (VAR_47->mux_from_pdata) {
  VAR_52 = VAR_47->pad2;
  VAR_50 = FUNC_21(VAR_46->regmap[VAR_54], VAR_53, VAR_52);
  if (VAR_50)
   goto err_irq;
 } else {
  VAR_50 = FUNC_20(VAR_46->regmap[VAR_54], VAR_53, &VAR_52);
  if (VAR_50)
   goto err_irq;
 }

 if (!(VAR_52 & VAR_32))
  VAR_46->gpio_muxed |= VAR_10;
 if (!(VAR_52 & VAR_33))
  VAR_46->gpio_muxed |= VAR_11;
 if (!(VAR_52 & VAR_34))
  VAR_46->gpio_muxed |= VAR_12;
 if (!(VAR_52 & VAR_35))
  VAR_46->gpio_muxed |= VAR_13;

 FUNC_6(VAR_46->dev, "Muxing GPIO %x, PWM %x, LED %x\n",
   VAR_46->gpio_muxed, VAR_46->pwm_muxed,
   VAR_46->led_muxed);

 VAR_52 = VAR_47->power_ctrl;

 VAR_54 = FUNC_2(VAR_20);
 VAR_53 = FUNC_1(VAR_20, VAR_23);

 VAR_50 = FUNC_21(VAR_46->regmap[VAR_54], VAR_53, VAR_52);
 if (VAR_50)
  goto err_irq;





 if (VAR_49) {
  VAR_50 = FUNC_9(&VAR_44->dev);
  if (VAR_50 < 0) {
   goto err_irq;
  } else if (VAR_47->pm_off && !VAR_43) {
   VAR_40 = VAR_46;
   VAR_43 = VAR_41;
  }
 }

 return VAR_50;

err_irq:
 FUNC_19(VAR_46->irq, VAR_46->irq_data);
err_i2c:
 for (VAR_51 = 1; VAR_51 < VAR_19; VAR_51++) {
  if (VAR_46->i2c_clients[VAR_51])
   FUNC_13(VAR_46->i2c_clients[VAR_51]);
 }
 return VAR_50;
}
