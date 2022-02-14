
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_4__ {int init_valid_mask; } ;
struct gpio_chip {int base; int can_sleep; int ngpio; TYPE_1__ irq; int * parent; int label; } ;
struct byt_gpio {TYPE_3__* pdev; TYPE_2__* soc_data; struct gpio_chip chip; int saved_context; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int npins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gpio_chip VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct byt_gpio*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct gpio_chip*,struct byt_gpio*) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (struct gpio_chip*,int ,int ,int ,int ) ;
 int FUNC_6 (struct gpio_chip*,int *,int ,int ,int ) ;
 int FUNC_7 (struct gpio_chip*,int *,unsigned int,int ) ;
 int VAR_8 ;
 struct resource* FUNC_8 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct byt_gpio *VAR_9)
{
 struct gpio_chip *VAR_10;
 struct resource *VAR_11;
 int VAR_12;


 VAR_9->chip = VAR_4;
 VAR_10 = &VAR_9->chip;
 VAR_10->label = FUNC_2(&VAR_9->pdev->dev);
 VAR_10->base = -1;
 VAR_10->can_sleep = 0;
 VAR_10->parent = &VAR_9->pdev->dev;
 VAR_10->ngpio = VAR_9->soc_data->npins;
 VAR_10->irq.init_valid_mask = VAR_6;







 VAR_12 = FUNC_3(&VAR_9->pdev->dev, VAR_10, VAR_9);
 if (VAR_12) {
  FUNC_1(&VAR_9->pdev->dev, "failed adding byt-gpio chip\n");
  return VAR_12;
 }

 VAR_12 = FUNC_5(&VAR_9->chip, FUNC_2(&VAR_9->pdev->dev),
         0, 0, VAR_9->soc_data->npins);
 if (VAR_12) {
  FUNC_1(&VAR_9->pdev->dev, "failed to add GPIO pin range\n");
  return VAR_12;
 }


 VAR_11 = FUNC_8(VAR_9->pdev, VAR_2, 0);
 if (VAR_11 && VAR_11->start) {
  FUNC_0(VAR_9);
  VAR_12 = FUNC_6(VAR_10, &VAR_7, 0,
        VAR_8, VAR_3);
  if (VAR_12) {
   FUNC_1(&VAR_9->pdev->dev, "failed to add irqchip\n");
   return VAR_12;
  }

  FUNC_7(VAR_10, &VAR_7,
          (unsigned)VAR_11->start,
          VAR_5);
 }

 return VAR_12;
}
