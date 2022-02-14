
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct resource {int start; } ;
struct platform_device_id {int driver_data; } ;
struct TYPE_7__ {int kobj; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct ab8500 {int version; int chip_id; int mask_size; int* irq_reg_offset; int* mask; int* oldmask; TYPE_1__* dev; int domain; int irq; void* it_latchhier_num; int transfer_ongoing; int irq_lock; int lock; int write_masked; int write; int read; } ;
typedef enum ab8500_version { ____Placeholder_ab8500_version } ab8500_version ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char const* const*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 char const* const* VAR_30 ;
 char const* const* VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (struct ab8500*,struct device_node*) ;
 int* VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (int ,int ) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int * VAR_38 ;
 int VAR_39 ;
 char const* const* VAR_40 ;
 char const* const* VAR_41 ;
 char const* const* VAR_42 ;
 char const* const* VAR_43 ;
 int* VAR_44 ;
 int VAR_45 ;
 char const* const* VAR_46 ;
 int* VAR_47 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,int,...) ;
 void* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ,int,char*,struct ab8500*) ;
 int FUNC_9 (struct ab8500*,int ,scalar_t__,int*) ;
 scalar_t__ FUNC_10 (struct ab8500*) ;
 scalar_t__ FUNC_11 (struct ab8500*) ;
 scalar_t__ FUNC_12 (struct ab8500*) ;
 scalar_t__ FUNC_13 (struct ab8500*) ;
 scalar_t__ FUNC_14 (struct ab8500*) ;
 int FUNC_15 (TYPE_1__*,int ,char const* const*,int,int *,int ,int ) ;
 int FUNC_16 (int *) ;
 int VAR_48 ;
 struct platform_device_id* FUNC_17 (struct platform_device*) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct ab8500*) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (struct ab8500*,int ,scalar_t__,int) ;
 int FUNC_22 (int *,int *) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_49)
{
 static const char * const VAR_50[] = {
  "Swoff bit programming",
  "Thermal protection activation",
  "Vbat lower then BattOk falling threshold",
  "Watchdog expired",
  "Non presence of 32kHz clock",
  "Battery level lower than power on reset threshold",
  "Power on key 1 pressed longer than 10 seconds",
  "DB8500 thermal shutdown"};
 static const char * const VAR_51[] = {
  "Battery rising (Vbat)",
  "Power On Key 1 dbF",
  "Power On Key 2 dbF",
  "RTC Alarm",
  "Main Charger Detect",
  "Vbus Detect (USB)",
  "USB ID Detect",
  "UART Factory Mode Detect"};
 const struct platform_device_id *VAR_52 = FUNC_17(VAR_49);
 enum ab8500_version VAR_53 = VAR_17;
 struct device_node *VAR_54 = VAR_49->dev.of_node;
 struct ab8500 *VAR_55;
 struct resource *VAR_56;
 int VAR_57;
 int VAR_58;
 u8 VAR_59;

 VAR_55 = FUNC_7(&VAR_49->dev, sizeof(*VAR_55), VAR_23);
 if (!VAR_55)
  return -VAR_22;

 VAR_55->dev = &VAR_49->dev;

 VAR_56 = FUNC_18(VAR_49, VAR_24, 0);
 if (!VAR_56) {
  FUNC_5(&VAR_49->dev, "no IRQ resource\n");
  return -VAR_21;
 }

 VAR_55->irq = VAR_56->start;

 VAR_55->read = VAR_35;
 VAR_55->write = VAR_36;
 VAR_55->write_masked = VAR_37;

 FUNC_16(&VAR_55->lock);
 FUNC_16(&VAR_55->irq_lock);
 FUNC_4(&VAR_55->transfer_ongoing, 0);

 FUNC_19(VAR_49, VAR_55);

 if (VAR_52)
  VAR_53 = VAR_52->driver_data;

 if (VAR_53 != VAR_17)
  VAR_55->version = VAR_53;
 else {
  VAR_57 = FUNC_9(VAR_55, VAR_8,
   VAR_3, &VAR_59);
  if (VAR_57 < 0) {
   FUNC_5(&VAR_49->dev, "could not probe HW\n");
   return VAR_57;
  }

  VAR_55->version = VAR_59;
 }

 VAR_57 = FUNC_9(VAR_55, VAR_8,
  VAR_11, &VAR_59);
 if (VAR_57 < 0)
  return VAR_57;

 VAR_55->chip_id = VAR_59;

 FUNC_6(VAR_55->dev, "detected chip, %s rev. %1x.%1x\n",
   VAR_38[VAR_55->version],
   VAR_55->chip_id >> 4,
   VAR_55->chip_id & 0x0F);


 if (FUNC_12(VAR_55)) {
  VAR_55->mask_size = VAR_19;
  VAR_55->irq_reg_offset = VAR_44;
  VAR_55->it_latchhier_num = VAR_18;
 }
 else if (FUNC_14(VAR_55) || FUNC_11(VAR_55)) {
  VAR_55->mask_size = VAR_20;
  VAR_55->irq_reg_offset = VAR_47;
  VAR_55->it_latchhier_num = VAR_6;
 } else {
  VAR_55->mask_size = VAR_9;
  VAR_55->irq_reg_offset = VAR_33;
  VAR_55->it_latchhier_num = VAR_6;
 }
 VAR_55->mask = FUNC_7(&VAR_49->dev, VAR_55->mask_size,
        VAR_23);
 if (!VAR_55->mask)
  return -VAR_22;
 VAR_55->oldmask = FUNC_7(&VAR_49->dev, VAR_55->mask_size,
           VAR_23);
 if (!VAR_55->oldmask)
  return -VAR_22;
 VAR_57 = FUNC_9(VAR_55, VAR_12,
  VAR_13, &VAR_59);
 if (VAR_57 < 0)
  return VAR_57;
 FUNC_6(VAR_55->dev, "switch off cause(s) (%#x): ", VAR_59);

 if (VAR_59) {
  for (VAR_58 = 0; VAR_58 < FUNC_0(VAR_50); VAR_58++) {
   if (VAR_59 & 1)
    FUNC_20(" \"%s\"", VAR_50[VAR_58]);
   VAR_59 = VAR_59 >> 1;

  }
  FUNC_20("\n");
 } else {
  FUNC_20(" None\n");
 }
 VAR_57 = FUNC_9(VAR_55, VAR_14,
  VAR_15, &VAR_59);
 if (VAR_57 < 0)
  return VAR_57;
 FUNC_6(VAR_55->dev, "turn on reason(s) (%#x): ", VAR_59);

 if (VAR_59) {
  for (VAR_58 = 0; VAR_58 < FUNC_0(VAR_51); VAR_58++) {
   if (VAR_59 & 1)
    FUNC_20("\"%s\" ", VAR_51[VAR_58]);
   VAR_59 = VAR_59 >> 1;
  }
  FUNC_20("\n");
 } else {
  FUNC_20("None\n");
 }

 if (FUNC_14(VAR_55)) {
  VAR_57 = FUNC_9(VAR_55, VAR_0,
   VAR_1, &VAR_59);
  if (VAR_57 < 0)
   return VAR_57;
  if ((VAR_59 & VAR_27) && (VAR_59 & VAR_28))
   FUNC_2(~VAR_10,
           VAR_16);
 }


 for (VAR_58 = 0; VAR_58 < VAR_55->mask_size; VAR_58++) {




  if (VAR_55->irq_reg_offset[VAR_58] == 11 &&
    FUNC_10(VAR_55))
   continue;

  if (VAR_55->irq_reg_offset[VAR_58] < 0)
   continue;

  FUNC_9(VAR_55, VAR_4,
   VAR_5 + VAR_55->irq_reg_offset[VAR_58],
   &VAR_59);
  FUNC_21(VAR_55, VAR_4,
   VAR_7 + VAR_55->irq_reg_offset[VAR_58], 0xff);
 }

 VAR_57 = FUNC_3(VAR_55->dev, &VAR_34);
 if (VAR_57)
  return VAR_57;

 for (VAR_58 = 0; VAR_58 < VAR_55->mask_size; VAR_58++)
  VAR_55->mask[VAR_58] = VAR_55->oldmask[VAR_58] = 0xff;

 VAR_57 = FUNC_1(VAR_55, VAR_54);
 if (VAR_57)
  return VAR_57;

 VAR_57 = FUNC_8(&VAR_49->dev, VAR_55->irq, ((void*)0),
   VAR_32,
   VAR_26 | VAR_25,
   "ab8500", VAR_55);
 if (VAR_57)
  return VAR_57;

 if (FUNC_14(VAR_55))
  VAR_57 = FUNC_15(VAR_55->dev, 0, VAR_46,
    FUNC_0(VAR_46), ((void*)0),
    0, VAR_55->domain);
 else if (FUNC_12(VAR_55)) {
  VAR_57 = FUNC_15(VAR_55->dev, 0, VAR_43,
         FUNC_0(VAR_43), ((void*)0),
         0, VAR_55->domain);
  if (VAR_57)
   return VAR_57;

  if (FUNC_13(VAR_55))
   VAR_57 = FUNC_15(VAR_55->dev, 0, VAR_41,
         FUNC_0(VAR_41), ((void*)0),
         0, VAR_55->domain);
  else
   VAR_57 = FUNC_15(VAR_55->dev, 0, VAR_42,
         FUNC_0(VAR_42), ((void*)0),
         0, VAR_55->domain);
 } else if (FUNC_11(VAR_55))
  VAR_57 = FUNC_15(VAR_55->dev, 0, VAR_40,
         FUNC_0(VAR_40), ((void*)0),
         0, VAR_55->domain);
 else
  VAR_57 = FUNC_15(VAR_55->dev, 0, VAR_31,
    FUNC_0(VAR_31), ((void*)0),
    0, VAR_55->domain);
 if (VAR_57)
  return VAR_57;

 if (!VAR_48) {

  VAR_57 = FUNC_15(VAR_55->dev, 0, VAR_30,
          FUNC_0(VAR_30), ((void*)0),
          0, VAR_55->domain);
  if (VAR_57)
   FUNC_5(VAR_55->dev, "error adding bm devices\n");
 }

 if (((FUNC_11(VAR_55) || FUNC_14(VAR_55)) &&
   VAR_55->chip_id >= VAR_2) || FUNC_12(VAR_55))
  VAR_57 = FUNC_22(&VAR_55->dev->kobj,
     &VAR_45);
 else
  VAR_57 = FUNC_22(&VAR_55->dev->kobj,
     &VAR_29);

 if ((FUNC_11(VAR_55) || FUNC_14(VAR_55)) &&
   VAR_55->chip_id >= VAR_2)
  VAR_57 = FUNC_22(&VAR_55->dev->kobj,
      &VAR_39);

 if (VAR_57)
  FUNC_5(VAR_55->dev, "error creating sysfs entries\n");

 return VAR_57;
}
