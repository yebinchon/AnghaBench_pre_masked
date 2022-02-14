
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device_id {scalar_t__ data; } ;
struct device {scalar_t__ of_node; TYPE_1__* driver; } ;
struct axp20x_dev {long variant; int * regmap_irq_chip; int * regmap_cfg; void* cells; void* nr_cells; struct device* dev; int irq_flags; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct TYPE_2__ {int acpi_match_table; int of_match_table; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_device_id* FUNC_1 (int ,struct device*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct of_device_id* FUNC_4 (int ,struct device*) ;
 int FUNC_5 (scalar_t__,char*) ;

int FUNC_6(struct axp20x_dev *VAR_26)
{
 struct device *VAR_27 = VAR_26->dev;
 const struct acpi_device_id *VAR_28;
 const struct of_device_id *VAR_29;

 if (VAR_27->of_node) {
  VAR_29 = FUNC_4(VAR_27->driver->of_match_table, VAR_27);
  if (!VAR_29) {
   FUNC_2(VAR_27, "Unable to match OF ID\n");
   return -VAR_1;
  }
  VAR_26->variant = (long)VAR_29->data;
 } else {
  VAR_28 = FUNC_1(VAR_27->driver->acpi_match_table, VAR_27);
  if (!VAR_28 || !VAR_28->driver_data) {
   FUNC_2(VAR_27, "Unable to match ACPI ID and data\n");
   return -VAR_1;
  }
  VAR_26->variant = (long)VAR_28->driver_data;
 }

 switch (VAR_26->variant) {
 case 137:
  VAR_26->nr_cells = FUNC_0(VAR_3);
  VAR_26->cells = VAR_3;
  VAR_26->regmap_cfg = &VAR_4;
  VAR_26->regmap_irq_chip = &VAR_5;
  break;
 case 136:
 case 135:
  VAR_26->nr_cells = FUNC_0(VAR_6);
  VAR_26->cells = VAR_6;
  VAR_26->regmap_cfg = &VAR_8;
  VAR_26->regmap_irq_chip = &VAR_9;
  break;
 case 134:
  VAR_26->nr_cells = FUNC_0(VAR_10);
  VAR_26->cells = VAR_10;
  VAR_26->regmap_cfg = &VAR_12;
  VAR_26->regmap_irq_chip = &VAR_13;
  break;
 case 133:
  VAR_26->nr_cells = FUNC_0(VAR_11);
  VAR_26->cells = VAR_11;
  VAR_26->regmap_cfg = &VAR_12;
  VAR_26->regmap_irq_chip = &VAR_13;
  break;
 case 132:
  VAR_26->cells = VAR_14;
  VAR_26->nr_cells = FUNC_0(VAR_14);
  VAR_26->regmap_cfg = &VAR_15;
  VAR_26->regmap_irq_chip = &VAR_16;
  VAR_26->irq_flags = VAR_2;
  break;
 case 131:
  VAR_26->nr_cells = FUNC_0(VAR_17);
  VAR_26->cells = VAR_17;
  VAR_26->regmap_cfg = &VAR_15;
  VAR_26->regmap_irq_chip = &VAR_18;
  break;
 case 130:
  if (FUNC_5(VAR_26->dev->of_node,
       "x-powers,self-working-mode")) {
   VAR_26->nr_cells = FUNC_0(VAR_22);
   VAR_26->cells = VAR_22;
  } else {
   VAR_26->nr_cells = FUNC_0(VAR_19);
   VAR_26->cells = VAR_19;
  }
  VAR_26->regmap_cfg = &VAR_20;
  VAR_26->regmap_irq_chip = &VAR_21;
  break;
 case 129:
  VAR_26->nr_cells = FUNC_0(VAR_23);
  VAR_26->cells = VAR_23;
  VAR_26->regmap_cfg = &VAR_12;
  VAR_26->regmap_irq_chip = &VAR_24;
  break;
 case 128:
  VAR_26->nr_cells = FUNC_0(VAR_25);
  VAR_26->cells = VAR_25;
  VAR_26->regmap_cfg = &VAR_15;







  VAR_26->regmap_irq_chip = &VAR_18;
  break;
 default:
  FUNC_2(VAR_27, "unsupported AXP20X ID %lu\n", VAR_26->variant);
  return -VAR_0;
 }
 FUNC_3(VAR_27, "AXP20x variant %s found\n",
   VAR_7[VAR_26->variant]);

 return 0;
}
