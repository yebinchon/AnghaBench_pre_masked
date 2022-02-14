
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct regmap {int dummy; } ;
struct pm_irq_data {int * irq_handler; void* num_irqs; } ;
struct pm_irq_chip {int irqdomain; int pm_irq_lock; struct pm_irq_data const* pm_irq_data; void* num_blocks; void* num_masters; struct regmap* regmap; } ;
struct TYPE_6__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (void*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct pm_irq_chip* FUNC_4 (TYPE_1__*,int ,int ) ;
 struct regmap* FUNC_5 (TYPE_1__*,int *,int ,int *) ;
 int FUNC_6 (int ,void*,int *,struct pm_irq_chip*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int *,struct pm_irq_chip*) ;
 int FUNC_9 (int,int) ;
 struct pm_irq_data* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,int *,int *,TYPE_1__*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct pm_irq_chip*) ;
 int VAR_8 ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (char*,unsigned int) ;
 int FUNC_16 (struct regmap*,int ,unsigned int*) ;
 int FUNC_17 (int *) ;
 int VAR_9 ;
 int FUNC_18 (struct pm_irq_chip*,int ,void*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_10)
{
 const struct pm_irq_data *VAR_11;
 struct regmap *VAR_12;
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 u32 VAR_16;
 struct pm_irq_chip *VAR_17;

 VAR_11 = FUNC_10(&VAR_10->dev);
 if (!VAR_11) {
  FUNC_3(&VAR_10->dev, "No matching driver data found\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_12(VAR_10, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_5(&VAR_10->dev, ((void*)0), VAR_10->dev.parent,
      &VAR_9);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);


 VAR_14 = FUNC_16(VAR_12, VAR_5, &VAR_15);
 if (VAR_14) {
  FUNC_14("Failed to read hw rev reg %d:rc=%d\n", VAR_5, VAR_14);
  return VAR_14;
 }
 FUNC_15("PMIC revision 1: %02X\n", VAR_15);
 VAR_16 = VAR_15;


 VAR_14 = FUNC_16(VAR_12, VAR_6, &VAR_15);
 if (VAR_14) {
  FUNC_14("Failed to read hw rev 2 reg %d:rc=%d\n",
   VAR_6, VAR_14);
  return VAR_14;
 }
 FUNC_15("PMIC revision 2: %02X\n", VAR_15);
 VAR_16 |= VAR_15 << VAR_0;

 VAR_17 = FUNC_4(&VAR_10->dev,
       FUNC_18(VAR_17, VAR_7, VAR_11->num_irqs),
       VAR_4);
 if (!VAR_17)
  return -VAR_3;

 FUNC_13(VAR_10, VAR_17);
 VAR_17->regmap = VAR_12;
 VAR_17->num_blocks = FUNC_0(VAR_11->num_irqs, 8);
 VAR_17->num_masters = FUNC_0(VAR_17->num_blocks, 8);
 VAR_17->pm_irq_data = VAR_11;
 FUNC_17(&VAR_17->pm_irq_lock);

 VAR_17->irqdomain = FUNC_6(VAR_10->dev.of_node,
      VAR_11->num_irqs,
      &VAR_8,
      VAR_17);
 if (!VAR_17->irqdomain)
  return -VAR_2;

 FUNC_8(VAR_13, VAR_11->irq_handler, VAR_17);
 FUNC_9(VAR_13, 1);

 VAR_14 = FUNC_11(VAR_10->dev.of_node, ((void*)0), ((void*)0), &VAR_10->dev);
 if (VAR_14) {
  FUNC_8(VAR_13, ((void*)0), ((void*)0));
  FUNC_7(VAR_17->irqdomain);
 }

 return VAR_14;
}
