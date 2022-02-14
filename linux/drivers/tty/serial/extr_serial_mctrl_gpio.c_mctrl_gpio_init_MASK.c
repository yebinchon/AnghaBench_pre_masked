
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct mctrl_gpios {int* irq; int * gpio; struct uart_port* port; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;
struct TYPE_2__ {int name; } ;


 struct mctrl_gpios* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mctrl_gpios*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,unsigned int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int ,int ,struct mctrl_gpios*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 struct mctrl_gpios* FUNC_8 (int ,unsigned int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

struct mctrl_gpios *FUNC_9(struct uart_port *VAR_5, unsigned int VAR_6)
{
 struct mctrl_gpios *VAR_7;
 enum mctrl_gpio_idx VAR_8;

 VAR_7 = FUNC_8(VAR_5->dev, VAR_6);
 if (FUNC_1(VAR_7))
  return VAR_7;

 VAR_7->port = VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  int VAR_9;

  if (!VAR_7->gpio[VAR_8] || FUNC_7(VAR_8))
   continue;

  VAR_9 = FUNC_5(VAR_7->gpio[VAR_8]);
  if (VAR_9 <= 0) {
   FUNC_2(VAR_5->dev,
    "failed to find corresponding irq for %s (idx=%d, err=%d)\n",
    VAR_4[VAR_8].name, VAR_6, VAR_9);
   return FUNC_0(VAR_9);
  }
  VAR_7->irq[VAR_8] = VAR_9;


  FUNC_6(VAR_7->irq[VAR_8], VAR_0);

  VAR_9 = FUNC_4(VAR_5->dev, VAR_7->irq[VAR_8],
           VAR_3,
           VAR_1, FUNC_3(VAR_5->dev),
           VAR_7);
  if (VAR_9) {

   FUNC_2(VAR_5->dev,
    "failed to request irq for %s (idx=%d, err=%d)\n",
    VAR_4[VAR_8].name, VAR_6, VAR_9);
   return FUNC_0(VAR_9);
  }
 }

 return VAR_7;
}
