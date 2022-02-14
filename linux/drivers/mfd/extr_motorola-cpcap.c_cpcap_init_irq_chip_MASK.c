
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_irq_chip {int num_irqs; struct cpcap_ddata* irq_drv_data; struct regmap_irq* irqs; } ;
struct regmap_irq {int dummy; } ;
struct cpcap_ddata {TYPE_1__* spi; int * irqdata; int regmap; struct regmap_irq* irqs; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpcap_ddata*,struct regmap_irq*,int,int) ;
 struct regmap_irq_chip* VAR_1 ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,int ,int ,int,int,struct regmap_irq_chip*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cpcap_ddata *VAR_2, int VAR_3,
          int VAR_4, int VAR_5)
{
 struct regmap_irq_chip *VAR_6 = &VAR_1[VAR_3];
 int VAR_7, VAR_8;

 for (VAR_7 = VAR_4; VAR_7 < VAR_4 + VAR_5; VAR_7++) {
  struct regmap_irq *VAR_9 = &VAR_2->irqs[VAR_7];

  FUNC_0(VAR_2, VAR_9, VAR_4, VAR_7);
 }
 VAR_6->irqs = &VAR_2->irqs[VAR_4];
 VAR_6->num_irqs = VAR_5;
 VAR_6->irq_drv_data = VAR_2;

 VAR_8 = FUNC_2(&VAR_2->spi->dev, VAR_2->regmap,
           VAR_2->spi->irq,
           FUNC_3(VAR_2->spi->irq) |
           VAR_0, -1,
           VAR_6, &VAR_2->irqdata[VAR_3]);
 if (VAR_8) {
  FUNC_1(&VAR_2->spi->dev, "could not add irq chip %i: %i\n",
   VAR_3, VAR_8);
  return VAR_8;
 }

 return 0;
}
