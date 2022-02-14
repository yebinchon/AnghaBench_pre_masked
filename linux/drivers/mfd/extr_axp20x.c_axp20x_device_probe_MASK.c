
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct axp20x_dev {scalar_t__ variant; int irq_flags; TYPE_1__* dev; int regmap_irqc; int irq; int nr_cells; int cells; int regmap_irq_chip; int regmap; } ;
struct TYPE_4__ {int of_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct axp20x_dev* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,int ,int,int,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

int FUNC_7(struct axp20x_dev *VAR_9)
{
 int VAR_10;
 if (VAR_9->variant == VAR_0) {
  if (FUNC_3(VAR_9->dev->of_node,
       "x-powers,master-mode") ||
      FUNC_3(VAR_9->dev->of_node,
       "x-powers,self-working-mode"))
   FUNC_6(VAR_9->regmap, VAR_1,
         VAR_2);
  else
   FUNC_6(VAR_9->regmap, VAR_1,
         VAR_3);
 }

 VAR_10 = FUNC_4(VAR_9->regmap, VAR_9->irq,
     VAR_4 | VAR_5 | VAR_9->irq_flags,
      -1, VAR_9->regmap_irq_chip, &VAR_9->regmap_irqc);
 if (VAR_10) {
  FUNC_0(VAR_9->dev, "failed to add irq chip: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_9->dev, -1, VAR_9->cells,
         VAR_9->nr_cells, ((void*)0), 0, ((void*)0));

 if (VAR_10) {
  FUNC_0(VAR_9->dev, "failed to add MFD devices: %d\n", VAR_10);
  FUNC_5(VAR_9->irq, VAR_9->regmap_irqc);
  return VAR_10;
 }

 if (!VAR_8) {
  VAR_6 = VAR_9;
  VAR_8 = VAR_7;
 }

 FUNC_1(VAR_9->dev, "AXP20X driver loaded\n");

 return 0;
}
