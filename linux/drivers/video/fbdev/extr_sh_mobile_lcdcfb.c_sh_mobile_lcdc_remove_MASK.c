
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {scalar_t__ irq; scalar_t__ base; scalar_t__ dot_clk; struct sh_mobile_lcdc_overlay* ch; struct sh_mobile_lcdc_overlay* overlays; } ;
struct sh_mobile_lcdc_overlay {int open_lock; scalar_t__ bl; int dma_handle; scalar_t__ fb_mem; int fb_size; TYPE_5__* cfg; TYPE_1__* tx_dev; } ;
struct sh_mobile_lcdc_chan {int open_lock; scalar_t__ bl; int dma_handle; scalar_t__ fb_mem; int fb_size; TYPE_5__* cfg; TYPE_1__* tx_dev; } ;
struct platform_device {int dev; } ;
struct TYPE_10__ {TYPE_4__* tx_dev; } ;
struct TYPE_8__ {TYPE_2__* driver; } ;
struct TYPE_9__ {TYPE_3__ dev; } ;
struct TYPE_7__ {int owner; } ;
struct TYPE_6__ {int * lcdc; } ;


 unsigned int FUNC_0 (struct sh_mobile_lcdc_overlay*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,struct sh_mobile_lcdc_priv*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 struct sh_mobile_lcdc_priv* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct sh_mobile_lcdc_overlay*) ;
 int FUNC_12 (struct sh_mobile_lcdc_overlay*) ;
 int FUNC_13 (struct sh_mobile_lcdc_overlay*) ;
 int FUNC_14 (struct sh_mobile_lcdc_overlay*) ;
 int FUNC_15 (struct sh_mobile_lcdc_priv*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_0)
{
 struct sh_mobile_lcdc_priv *VAR_1 = FUNC_8(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->overlays); VAR_2++)
  FUNC_14(&VAR_1->overlays[VAR_2]);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->ch); VAR_2++)
  FUNC_12(&VAR_1->ch[VAR_2]);

 FUNC_15(VAR_1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->overlays); VAR_2++) {
  struct sh_mobile_lcdc_overlay *VAR_3 = &VAR_1->overlays[VAR_2];

  FUNC_13(VAR_3);

  if (VAR_3->fb_mem)
   FUNC_2(&VAR_0->dev, VAR_3->fb_size,
       VAR_3->fb_mem, VAR_3->dma_handle);
 }

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->ch); VAR_2++) {
  struct sh_mobile_lcdc_chan *VAR_4 = &VAR_1->ch[VAR_2];

  if (VAR_4->tx_dev) {
   VAR_4->tx_dev->lcdc = ((void*)0);
   FUNC_6(VAR_4->cfg->tx_dev->dev.driver->owner);
  }

  FUNC_11(VAR_4);

  if (VAR_4->fb_mem)
   FUNC_2(&VAR_0->dev, VAR_4->fb_size,
       VAR_4->fb_mem, VAR_4->dma_handle);
 }

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->ch); VAR_2++) {
  struct sh_mobile_lcdc_chan *VAR_5 = &VAR_1->ch[VAR_2];

  if (VAR_5->bl)
   FUNC_10(VAR_5->bl);
  FUNC_7(&VAR_5->open_lock);
 }

 if (VAR_1->dot_clk) {
  FUNC_9(&VAR_0->dev);
  FUNC_1(VAR_1->dot_clk);
 }

 if (VAR_1->base)
  FUNC_4(VAR_1->base);

 if (VAR_1->irq)
  FUNC_3(VAR_1->irq, VAR_1);
 FUNC_5(VAR_1);
 return 0;
}
