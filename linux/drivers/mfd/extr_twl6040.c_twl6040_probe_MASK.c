
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct twl6040 {int rev; int audpwron; TYPE_4__* supplies; int irq_data; int irq; struct mfd_cell* cells; int * regmap; TYPE_7__* dev; void* irq_th; void* irq_ready; int ready; int mutex; int * mclk; int * clk32k; } ;
struct mfd_cell {char* name; void* num_resources; TYPE_1__* resources; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_19__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_7__ dev; int irq; } ;
struct device_node {int dummy; } ;
struct TYPE_18__ {char* supply; } ;
struct TYPE_17__ {int start; int end; } ;


 void* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (TYPE_7__*,char*) ;
 int FUNC_4 (TYPE_7__*,char*,...) ;
 void* FUNC_5 (TYPE_7__*,char*) ;
 int FUNC_6 (TYPE_7__*,int,int ,char*) ;
 struct twl6040* FUNC_7 (TYPE_7__*,int,int ) ;
 int * FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (TYPE_7__*,int ,TYPE_4__*) ;
 int FUNC_10 (TYPE_7__*,void*,int *,int ,int ,char*,struct twl6040*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct i2c_client*,struct twl6040*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_7__*,int,struct mfd_cell*,int,int *,int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct device_node*,char*,int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int ,int ,int *,int *) ;
 int FUNC_20 (int ,int ) ;
 void* FUNC_21 (int ,int ) ;
 int FUNC_22 (int *,TYPE_1__*,void*) ;
 int FUNC_23 (int ,TYPE_4__*) ;
 int FUNC_24 (int ,TYPE_4__*) ;
 TYPE_1__* VAR_14 ;
 scalar_t__ FUNC_25 (struct twl6040*) ;
 scalar_t__ FUNC_26 (struct device_node*) ;
 int VAR_15 ;
 TYPE_1__* VAR_16 ;
 int VAR_17 ;
 int FUNC_27 (struct twl6040*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_1__* VAR_20 ;

__attribute__((used)) static int FUNC_28(struct i2c_client *VAR_21,
    const struct i2c_device_id *VAR_22)
{
 struct device_node *VAR_23 = VAR_21->dev.of_node;
 struct twl6040 *VAR_24;
 struct mfd_cell *VAR_25 = ((void*)0);
 int VAR_26, VAR_27, VAR_28 = 0;

 if (!VAR_23) {
  FUNC_4(&VAR_21->dev, "of node is missing\n");
  return -VAR_0;
 }


 if (!VAR_21->irq) {
  FUNC_4(&VAR_21->dev, "Invalid IRQ configuration\n");
  return -VAR_0;
 }

 VAR_24 = FUNC_7(&VAR_21->dev, sizeof(struct twl6040),
          VAR_3);
 if (!VAR_24)
  return -VAR_1;

 VAR_24->regmap = FUNC_8(VAR_21, &VAR_18);
 if (FUNC_1(VAR_24->regmap))
  return FUNC_2(VAR_24->regmap);

 FUNC_12(VAR_21, VAR_24);

 VAR_24->clk32k = FUNC_5(&VAR_21->dev, "clk32k");
 if (FUNC_1(VAR_24->clk32k)) {
  if (FUNC_2(VAR_24->clk32k) == -VAR_2)
   return -VAR_2;
  FUNC_3(&VAR_21->dev, "clk32k is not handled\n");
  VAR_24->clk32k = ((void*)0);
 }

 VAR_24->mclk = FUNC_5(&VAR_21->dev, "mclk");
 if (FUNC_1(VAR_24->mclk)) {
  if (FUNC_2(VAR_24->mclk) == -VAR_2)
   return -VAR_2;
  FUNC_3(&VAR_21->dev, "mclk is not handled\n");
  VAR_24->mclk = ((void*)0);
 }

 VAR_24->supplies[0].supply = "vio";
 VAR_24->supplies[1].supply = "v2v1";
 VAR_27 = FUNC_9(&VAR_21->dev, VAR_10,
          VAR_24->supplies);
 if (VAR_27 != 0) {
  FUNC_4(&VAR_21->dev, "Failed to get supplies: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_27 = FUNC_24(VAR_10, VAR_24->supplies);
 if (VAR_27 != 0) {
  FUNC_4(&VAR_21->dev, "Failed to enable supplies: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_24->dev = &VAR_21->dev;
 VAR_24->irq = VAR_21->irq;

 FUNC_15(&VAR_24->mutex);
 FUNC_13(&VAR_24->ready);

 FUNC_22(VAR_24->regmap, VAR_16,
         FUNC_0(VAR_16));

 VAR_24->rev = FUNC_27(VAR_24, VAR_11);
 if (VAR_24->rev < 0) {
  FUNC_4(&VAR_21->dev, "Failed to read revision register: %d\n",
   VAR_24->rev);
  VAR_27 = VAR_24->rev;
  goto gpio_err;
 }


 if (FUNC_25(VAR_24) > VAR_13)
  VAR_24->audpwron = FUNC_16(VAR_23,
            "ti,audpwron-gpio", 0);
 else
  VAR_24->audpwron = -VAR_0;

 if (FUNC_11(VAR_24->audpwron)) {
  VAR_27 = FUNC_6(&VAR_21->dev, VAR_24->audpwron,
         VAR_4, "audpwron");
  if (VAR_27)
   goto gpio_err;


  FUNC_27(VAR_24, VAR_12);
 }

 VAR_27 = FUNC_19(VAR_24->regmap, VAR_24->irq, VAR_5,
      0, &VAR_15, &VAR_24->irq_data);
 if (VAR_27 < 0)
  goto gpio_err;

 VAR_24->irq_ready = FUNC_21(VAR_24->irq_data,
       VAR_7);
 VAR_24->irq_th = FUNC_21(VAR_24->irq_data,
           VAR_8);

 VAR_27 = FUNC_10(VAR_24->dev, VAR_24->irq_ready, ((void*)0),
     VAR_17, VAR_5,
     "twl6040_irq_ready", VAR_24);
 if (VAR_27) {
  FUNC_4(VAR_24->dev, "READY IRQ request failed: %d\n", VAR_27);
  goto readyirq_err;
 }

 VAR_27 = FUNC_10(VAR_24->dev, VAR_24->irq_th, ((void*)0),
     VAR_19, VAR_5,
     "twl6040_irq_th", VAR_24);
 if (VAR_27) {
  FUNC_4(VAR_24->dev, "Thermal IRQ request failed: %d\n", VAR_27);
  goto readyirq_err;
 }





 VAR_26 = FUNC_21(VAR_24->irq_data, VAR_6);
 VAR_25 = &VAR_24->cells[VAR_28];
 VAR_25->name = "twl6040-codec";
 VAR_14[0].start = VAR_26;
 VAR_14[0].end = VAR_26;
 VAR_25->resources = VAR_14;
 VAR_25->num_resources = FUNC_0(VAR_14);
 VAR_28++;


 if (FUNC_26(VAR_23)) {
  VAR_26 = FUNC_21(VAR_24->irq_data, VAR_9);

  VAR_25 = &VAR_24->cells[VAR_28];
  VAR_25->name = "twl6040-vibra";
  VAR_20[0].start = VAR_26;
  VAR_20[0].end = VAR_26;
  VAR_25->resources = VAR_20;
  VAR_25->num_resources = FUNC_0(VAR_20);
  VAR_28++;
 }


 VAR_25 = &VAR_24->cells[VAR_28];
 VAR_25->name = "twl6040-gpo";
 VAR_28++;


 VAR_25 = &VAR_24->cells[VAR_28];
 VAR_25->name = "twl6040-pdmclk";
 VAR_28++;


 FUNC_17(VAR_24->regmap, 1);
 FUNC_18(VAR_24->regmap);

 VAR_27 = FUNC_14(&VAR_21->dev, -1, VAR_24->cells, VAR_28,
         ((void*)0), 0, ((void*)0));
 if (VAR_27)
  goto readyirq_err;

 return 0;

readyirq_err:
 FUNC_20(VAR_24->irq, VAR_24->irq_data);
gpio_err:
 FUNC_23(VAR_10, VAR_24->supplies);
 return VAR_27;
}
