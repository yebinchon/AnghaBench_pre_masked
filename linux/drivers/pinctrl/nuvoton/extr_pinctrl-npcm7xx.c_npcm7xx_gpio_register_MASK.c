
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct npcm7xx_pinctrl {int bank_num; TYPE_6__* gpio_bank; int dev; } ;
struct TYPE_7__ {int ngpio; int base; } ;
struct TYPE_8__ {TYPE_1__ gc; int irq; int irq_chip; int pinctrl_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct npcm7xx_pinctrl *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 0 ; VAR_5 < VAR_3->bank_num ; VAR_5++) {
  VAR_4 = FUNC_2(VAR_3->dev,
          &VAR_3->gpio_bank[VAR_5].gc,
          &VAR_3->gpio_bank[VAR_5]);
  if (VAR_4) {
   FUNC_0(VAR_3->dev, "Failed to add GPIO chip %u\n", VAR_5);
   goto err_register;
  }

  VAR_4 = FUNC_3(&VAR_3->gpio_bank[VAR_5].gc,
          FUNC_1(VAR_3->dev),
          VAR_3->gpio_bank[VAR_5].pinctrl_id,
          VAR_3->gpio_bank[VAR_5].gc.base,
          VAR_3->gpio_bank[VAR_5].gc.ngpio);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3->dev, "Failed to add GPIO bank %u\n", VAR_5);
   FUNC_5(&VAR_3->gpio_bank[VAR_5].gc);
   goto err_register;
  }

  VAR_4 = FUNC_4(&VAR_3->gpio_bank[VAR_5].gc,
        &VAR_3->gpio_bank[VAR_5].irq_chip,
        0, VAR_1,
        VAR_0);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3->dev,
    "Failed to add IRQ chip %u\n", VAR_5);
   FUNC_5(&VAR_3->gpio_bank[VAR_5].gc);
   goto err_register;
  }

  FUNC_6(&VAR_3->gpio_bank[VAR_5].gc,
          &VAR_3->gpio_bank[VAR_5].irq_chip,
          VAR_3->gpio_bank[VAR_5].irq,
          VAR_2);
 }

 return 0;

err_register:
 for (; VAR_5 > 0; VAR_5--)
  FUNC_5(&VAR_3->gpio_bank[VAR_5 - 1].gc);

 return VAR_4;
}
