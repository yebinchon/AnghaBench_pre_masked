
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct brcmfmac_sdio_pd {int oob_irq_nr; } ;
struct brcmf_sdio_dev {int oob_irq_requested; int sd_irq_requested; int irq_wake; int irq_en; TYPE_3__* func1; TYPE_3__* func2; TYPE_2__* settings; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {struct brcmfmac_sdio_pd sdio; } ;
struct TYPE_7__ {TYPE_1__ bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct brcmf_sdio_dev*,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

void FUNC_7(struct brcmf_sdio_dev *VAR_3)
{

 FUNC_0(VAR_0, "Entering oob=%d sd=%d\n",
    VAR_3->oob_irq_requested,
    VAR_3->sd_irq_requested);

 if (VAR_3->oob_irq_requested) {
  struct brcmfmac_sdio_pd *VAR_4;

  VAR_4 = &VAR_3->settings->bus.sdio;
  FUNC_4(VAR_3->func1);
  FUNC_1(VAR_3, VAR_1, 0, ((void*)0));
  FUNC_1(VAR_3, VAR_2, 0, ((void*)0));
  FUNC_5(VAR_3->func1);

  VAR_3->oob_irq_requested = 0;
  if (VAR_3->irq_wake) {
   FUNC_2(VAR_4->oob_irq_nr);
   VAR_3->irq_wake = 0;
  }
  FUNC_3(VAR_4->oob_irq_nr, &VAR_3->func1->dev);
  VAR_3->irq_en = 0;
  VAR_3->oob_irq_requested = 0;
 }

 if (VAR_3->sd_irq_requested) {
  FUNC_4(VAR_3->func1);
  FUNC_6(VAR_3->func2);
  FUNC_6(VAR_3->func1);
  FUNC_5(VAR_3->func1);
  VAR_3->sd_irq_requested = 0;
 }
}
