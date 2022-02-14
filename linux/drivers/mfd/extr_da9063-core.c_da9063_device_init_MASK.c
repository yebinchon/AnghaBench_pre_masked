
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9063 {int irq_base; unsigned int chip_irq; int variant_code; scalar_t__ type; int dev; int regmap_irq; int regmap; scalar_t__ flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct da9063*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct da9063*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int*) ;

int FUNC_8(struct da9063 *VAR_12, unsigned int VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_17 = FUNC_1(VAR_12);
 if (VAR_17 < 0)
  FUNC_3(VAR_12->dev, "Cannot clear fault log\n");

 VAR_12->flags = 0;
 VAR_12->irq_base = -1;
 VAR_12->chip_irq = VAR_13;

 VAR_17 = FUNC_7(VAR_12->regmap, VAR_1, &VAR_14);
 if (VAR_17 < 0) {
  FUNC_3(VAR_12->dev, "Cannot read chip model id.\n");
  return -VAR_3;
 }
 if (VAR_14 != VAR_6) {
  FUNC_3(VAR_12->dev, "Invalid chip model id: 0x%02x\n", VAR_14);
  return -VAR_4;
 }

 VAR_17 = FUNC_7(VAR_12->regmap, VAR_2, &VAR_15);
 if (VAR_17 < 0) {
  FUNC_3(VAR_12->dev, "Cannot read chip variant id.\n");
  return -VAR_3;
 }

 VAR_16 = VAR_15 >> VAR_0;

 FUNC_4(VAR_12->dev,
   "Device detected (chip-ID: 0x%02X, var-ID: 0x%02X)\n",
   VAR_14, VAR_15);

 if (VAR_16 < VAR_8 && VAR_16 != VAR_7) {
  FUNC_3(VAR_12->dev,
   "Cannot support variant code: 0x%02X\n", VAR_16);
  return -VAR_4;
 }

 VAR_12->variant_code = VAR_16;

 VAR_17 = FUNC_2(VAR_12);
 if (VAR_17) {
  FUNC_3(VAR_12->dev, "Cannot initialize interrupts.\n");
  return VAR_17;
 }

 VAR_12->irq_base = FUNC_6(VAR_12->regmap_irq);

 VAR_17 = FUNC_5(VAR_12->dev, VAR_5,
       VAR_10,
       FUNC_0(VAR_10),
       ((void*)0), VAR_12->irq_base, ((void*)0));
 if (VAR_17) {
  FUNC_3(VAR_12->dev, "Failed to add child devices\n");
  return VAR_17;
 }

 if (VAR_12->type == VAR_9) {
  VAR_17 = FUNC_5(VAR_12->dev, VAR_5,
        VAR_11, FUNC_0(VAR_11),
        ((void*)0), VAR_12->irq_base, ((void*)0));
  if (VAR_17) {
   FUNC_3(VAR_12->dev, "Failed to add child devices\n");
   return VAR_17;
  }
 }

 return VAR_17;
}
