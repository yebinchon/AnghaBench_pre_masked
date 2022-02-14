
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pm860x_power_pdata {int max_capacity; int resistor; } ;
struct pm860x_chip {scalar_t__ id; int dev; int companion; int client; } ;
struct pm860x_battery_info {scalar_t__ irq_cc; scalar_t__ irq_batt; int max_capacity; int resistor; TYPE_2__* battery; int lock; int status; TYPE_3__* dev; int i2c; struct pm860x_chip* chip; } ;
struct TYPE_10__ {struct pm860x_power_pdata* platform_data; int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 struct pm860x_chip* FUNC_3 (int ) ;
 struct pm860x_battery_info* FUNC_4 (TYPE_3__*,int,int ) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int *,int *) ;
 int FUNC_6 (int ,scalar_t__,int *,int ,int ,char*,struct pm860x_battery_info*) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (struct platform_device*,int) ;
 int FUNC_9 (struct platform_device*,struct pm860x_battery_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct pm860x_battery_info*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct pm860x_chip *VAR_10 = FUNC_3(VAR_9->dev.parent);
 struct pm860x_battery_info *VAR_11;
 struct pm860x_power_pdata *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_4(&VAR_9->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->irq_cc = FUNC_8(VAR_9, 0);
 if (VAR_11->irq_cc <= 0) {
  FUNC_2(&VAR_9->dev, "No IRQ resource!\n");
  return -VAR_1;
 }

 VAR_11->irq_batt = FUNC_8(VAR_9, 1);
 if (VAR_11->irq_batt <= 0) {
  FUNC_2(&VAR_9->dev, "No IRQ resource!\n");
  return -VAR_1;
 }

 VAR_11->chip = VAR_10;
 VAR_11->i2c =
     (VAR_10->id == VAR_0) ? VAR_10->client : VAR_10->companion;
 VAR_11->dev = &VAR_9->dev;
 VAR_11->status = VAR_5;
 VAR_12 = VAR_9->dev.platform_data;

 FUNC_7(&VAR_11->lock);
 FUNC_9(VAR_9, VAR_11);

 FUNC_10(VAR_11);

 if (VAR_12 && VAR_12->max_capacity)
  VAR_11->max_capacity = VAR_12->max_capacity;
 else
  VAR_11->max_capacity = 1500;
 if (VAR_12 && VAR_12->resistor)
  VAR_11->resistor = VAR_12->resistor;
 else
  VAR_11->resistor = 300;

 VAR_11->battery = FUNC_5(&VAR_9->dev,
         &VAR_7,
         ((void*)0));
 if (FUNC_0(VAR_11->battery))
  return FUNC_1(VAR_11->battery);
 VAR_11->battery->dev.parent = &VAR_9->dev;

 VAR_13 = FUNC_6(VAR_10->dev, VAR_11->irq_cc, ((void*)0),
     VAR_8, VAR_4,
     "coulomb", VAR_11);
 if (VAR_13 < 0) {
  FUNC_2(VAR_10->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_11->irq_cc, VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_6(VAR_10->dev, VAR_11->irq_batt, ((void*)0),
     VAR_6,
     VAR_4, "battery", VAR_11);
 if (VAR_13 < 0) {
  FUNC_2(VAR_10->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_11->irq_batt, VAR_13);
  return VAR_13;
 }


 return 0;
}
