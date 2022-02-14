
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_platform_data {int irq_base; } ;
struct tps65910 {int chip_irq; int dev; int irq_data; int regmap; } ;
struct regmap_irq_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int,int ,int ,struct regmap_irq_chip*,int *) ;
 int FUNC_2 (struct tps65910*) ;
 struct regmap_irq_chip VAR_2 ;
 struct regmap_irq_chip VAR_3 ;

__attribute__((used)) static int FUNC_3(struct tps65910 *VAR_4, int VAR_5,
      struct tps65910_platform_data *VAR_6)
{
 int VAR_7;
 static struct regmap_irq_chip *VAR_8;

 if (!VAR_5) {
  FUNC_0(VAR_4->dev, "No interrupt support, no core IRQ\n");
  return -VAR_0;
 }

 if (!VAR_6) {
  FUNC_0(VAR_4->dev, "No interrupt support, no pdata\n");
  return -VAR_0;
 }

 switch (FUNC_2(VAR_4)) {
 case 129:
  VAR_8 = &VAR_2;
  break;
 case 128:
  VAR_8 = &VAR_3;
  break;
 }

 VAR_4->chip_irq = VAR_5;
 VAR_7 = FUNC_1(VAR_4->dev, VAR_4->regmap,
           VAR_4->chip_irq,
           VAR_1, VAR_6->irq_base,
           VAR_8, &VAR_4->irq_data);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->dev, "Failed to add irq_chip %d\n", VAR_7);
  VAR_4->chip_irq = 0;
 }
 return VAR_7;
}
