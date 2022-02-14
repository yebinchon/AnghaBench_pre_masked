
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct power_supply_config {scalar_t__* supplied_to; int num_supplicants; struct pm860x_charger_info* drv_data; } ;
struct pm860x_chip {scalar_t__ id; int dev; int client; int companion; } ;
struct pm860x_charger_info {scalar_t__* irq; int irq_nums; int usb; int lock; TYPE_1__* dev; int i2c_8606; int i2c; struct pm860x_chip* chip; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {int num_resources; TYPE_1__ dev; } ;
struct TYPE_6__ {int name; int handler; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct pm860x_chip* FUNC_4 (int ) ;
 struct pm860x_charger_info* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (scalar_t__,struct pm860x_charger_info*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct platform_device*,int) ;
 int FUNC_9 (struct platform_device*,struct pm860x_charger_info*) ;
 int VAR_7 ;
 int FUNC_10 (struct pm860x_charger_info*) ;
 TYPE_2__* VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_11 (TYPE_1__*,int *,struct power_supply_config*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,int *,int ,int ,int ,struct pm860x_charger_info*) ;
 int FUNC_14 (struct pm860x_charger_info*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct pm860x_chip *VAR_11 = FUNC_4(VAR_10->dev.parent);
 struct power_supply_config VAR_12 = {};
 struct pm860x_charger_info *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_13 = FUNC_5(&VAR_10->dev, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_15 = VAR_10->num_resources;
 for (VAR_16 = 0, VAR_17 = 0; VAR_16 < VAR_15; VAR_16++) {
  VAR_13->irq[VAR_17] = FUNC_8(VAR_10, VAR_16);
  if (VAR_13->irq[VAR_17] < 0)
   continue;
  VAR_17++;
 }
 VAR_13->irq_nums = VAR_17;

 VAR_13->chip = VAR_11;
 VAR_13->i2c =
     (VAR_11->id == VAR_0) ? VAR_11->client : VAR_11->companion;
 VAR_13->i2c_8606 =
     (VAR_11->id == VAR_0) ? VAR_11->companion : VAR_11->client;
 if (!VAR_13->i2c_8606) {
  FUNC_3(&VAR_10->dev, "Missed I2C address of 88PM8606!\n");
  VAR_14 = -VAR_1;
  goto out;
 }
 VAR_13->dev = &VAR_10->dev;


 FUNC_14(VAR_13, VAR_5, VAR_6);

 FUNC_7(&VAR_13->lock);
 FUNC_9(VAR_10, VAR_13);

 VAR_12.drv_data = VAR_13;
 VAR_12.supplied_to = VAR_9;
 VAR_12.num_supplicants = FUNC_0(VAR_9);
 VAR_13->usb = FUNC_11(&VAR_10->dev, &VAR_7,
       &VAR_12);
 if (FUNC_1(VAR_13->usb)) {
  VAR_14 = FUNC_2(VAR_13->usb);
  goto out;
 }

 FUNC_10(VAR_13);

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_13->irq); VAR_16++) {
  VAR_14 = FUNC_13(VAR_13->irq[VAR_16], ((void*)0),
   VAR_8[VAR_16].handler,
   VAR_4, VAR_8[VAR_16].name, VAR_13);
  if (VAR_14 < 0) {
   FUNC_3(VAR_11->dev, "Failed to request IRQ: #%d: %d\n",
    VAR_13->irq[VAR_16], VAR_14);
   goto out_irq;
  }
 }
 return 0;

out_irq:
 FUNC_12(VAR_13->usb);
 while (--VAR_16 >= 0)
  FUNC_6(VAR_13->irq[VAR_16], VAR_13);
out:
 return VAR_14;
}
