
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pinctrl {int dummy; } ;
struct omap_hsmmc_host {scalar_t__ wake_irq; TYPE_2__* dev; int base; TYPE_1__* pdata; int mmc; } ;
struct TYPE_8__ {int of_node; } ;
struct TYPE_7__ {int controller_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pinctrl*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct pinctrl*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 struct pinctrl* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct pinctrl*) ;
 int FUNC_11 (int ) ;
 struct pinctrl* FUNC_12 (struct pinctrl*,int ) ;

__attribute__((used)) static int FUNC_13(struct omap_hsmmc_host *VAR_7)
{
 int VAR_8;







 if (!VAR_7->dev->of_node || !VAR_7->wake_irq)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_7->dev, VAR_7->wake_irq);
 if (VAR_8) {
  FUNC_4(FUNC_11(VAR_7->mmc), "Unable to request wake IRQ\n");
  goto err;
 }





 if (VAR_7->pdata->controller_flags & VAR_4) {
  struct pinctrl *VAR_9 = FUNC_9(VAR_7->dev);
  if (FUNC_0(VAR_9)) {
   VAR_8 = FUNC_3(VAR_9);
   goto err_free_irq;
  }
  if (FUNC_0(FUNC_12(VAR_9, VAR_5))) {
   FUNC_5(VAR_7->dev, "missing default pinctrl state\n");
   FUNC_10(VAR_9);
   VAR_8 = -VAR_0;
   goto err_free_irq;
  }

  if (FUNC_0(FUNC_12(VAR_9, VAR_6))) {
   FUNC_5(VAR_7->dev, "missing idle pinctrl state\n");
   FUNC_10(VAR_9);
   VAR_8 = -VAR_0;
   goto err_free_irq;
  }
  FUNC_10(VAR_9);
 }

 FUNC_2(VAR_7->base, VAR_2,
    FUNC_1(VAR_7->base, VAR_2) | VAR_3);
 return 0;

err_free_irq:
 FUNC_6(VAR_7->dev);
err:
 FUNC_8(VAR_7->dev, "no SDIO IRQ support, falling back to polling\n");
 VAR_7->wake_irq = 0;
 return VAR_8;
}
