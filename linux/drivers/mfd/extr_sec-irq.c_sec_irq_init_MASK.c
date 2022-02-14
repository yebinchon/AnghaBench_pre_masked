
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_pmic_dev {int device_type; int dev; int irq_data; scalar_t__ irq_base; int irq; int regmap_pmic; } ;
struct regmap_irq_chip {int dummy; } ;
typedef enum s2mps14_irq { ____Placeholder_s2mps14_irq } s2mps14_irq ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;


 int VAR_4 ;




 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int,scalar_t__,struct regmap_irq_chip const*,int *) ;
 struct regmap_irq_chip VAR_5 ;
 struct regmap_irq_chip VAR_6 ;
 struct regmap_irq_chip VAR_7 ;
 struct regmap_irq_chip VAR_8 ;
 struct regmap_irq_chip VAR_9 ;
 struct regmap_irq_chip VAR_10 ;
 struct regmap_irq_chip VAR_11 ;

int FUNC_4(struct sec_pmic_dev *VAR_12)
{
 int VAR_13 = 0;
 int VAR_14 = VAR_12->device_type;
 const struct regmap_irq_chip *VAR_15;

 if (!VAR_12->irq) {
  FUNC_2(VAR_12->dev,
    "No interrupt specified, no interrupts\n");
  VAR_12->irq_base = 0;
  return 0;
 }

 switch (VAR_14) {
 case 129:
  VAR_15 = &VAR_10;
  break;
 case 128:
  VAR_15 = &VAR_11;
  break;
 case 135:
  VAR_15 = &VAR_7;
  break;
 case 134:
  VAR_15 = &VAR_5;
  break;
 case 133:
  VAR_15 = &VAR_6;
  break;
 case 132:
  VAR_15 = &VAR_7;
  break;
 case 131:
  VAR_15 = &VAR_8;
  break;
 case 130:
  VAR_15 = &VAR_9;
  break;
 default:
  FUNC_1(VAR_12->dev, "Unknown device type %lu\n",
   VAR_12->device_type);
  return -VAR_0;
 }

 VAR_13 = FUNC_3(VAR_12->dev, VAR_12->regmap_pmic,
           VAR_12->irq,
           VAR_2 | VAR_1,
           VAR_12->irq_base, VAR_15,
           &VAR_12->irq_data);
 if (VAR_13 != 0) {
  FUNC_1(VAR_12->dev, "Failed to register IRQ chip: %d\n", VAR_13);
  return VAR_13;
 }





 FUNC_0(((enum s2mps14_irq)VAR_3) != VAR_4);

 return 0;
}
