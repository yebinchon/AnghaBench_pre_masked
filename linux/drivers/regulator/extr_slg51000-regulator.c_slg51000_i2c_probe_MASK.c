
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slg51000 {int chip_irq; struct device* dev; struct gpio_desc* regmap; struct gpio_desc* cs_gpiod; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 struct gpio_desc* FUNC_4 (struct device*,char*,int) ;
 struct slg51000* FUNC_5 (struct device*,int,int ) ;
 struct gpio_desc* FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct device*,int,int *,int ,int,char*,struct slg51000*) ;
 int FUNC_8 (struct i2c_client*,struct slg51000*) ;
 int FUNC_9 (struct slg51000*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct slg51000*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_8,
         const struct i2c_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct slg51000 *VAR_11;
 struct gpio_desc *VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_5(VAR_10, sizeof(struct slg51000), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_10, "dlg,cs",
        VAR_3 |
      VAR_2);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 if (VAR_12) {
  FUNC_3(VAR_10, "Found chip selector property\n");
  VAR_11->cs_gpiod = VAR_12;
 }

 FUNC_8(VAR_8, VAR_11);
 VAR_11->chip_irq = VAR_8->irq;
 VAR_11->dev = VAR_10;
 VAR_11->regmap = FUNC_6(VAR_8, &VAR_7);
 if (FUNC_0(VAR_11->regmap)) {
  VAR_13 = FUNC_1(VAR_11->regmap);
  FUNC_2(VAR_10, "Failed to allocate register map: %d\n",
   VAR_13);
  return VAR_13;
 }

 VAR_14 = FUNC_10(VAR_11);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11->dev, "Failed to init regulator(%d)\n", VAR_14);
  return VAR_14;
 }

 FUNC_9(VAR_11);

 if (VAR_11->chip_irq) {
  VAR_14 = FUNC_7(VAR_10, VAR_11->chip_irq, ((void*)0),
      VAR_6,
      (VAR_5 |
      VAR_4),
      "slg51000-irq", VAR_11);
  if (VAR_14 != 0) {
   FUNC_2(VAR_10, "Failed to request IRQ: %d\n",
    VAR_11->chip_irq);
   return VAR_14;
  }
 } else {
  FUNC_3(VAR_10, "No IRQ configured\n");
 }

 return VAR_14;
}
