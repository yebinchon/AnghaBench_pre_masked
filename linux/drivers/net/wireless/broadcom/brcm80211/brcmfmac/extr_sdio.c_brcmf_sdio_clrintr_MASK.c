
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcmf_sdio_dev {int irq_en; int irq_en_lock; TYPE_3__* settings; scalar_t__ oob_irq_requested; } ;
struct brcmf_sdio {int ipend; struct brcmf_sdio_dev* sdiodev; } ;
struct TYPE_4__ {int oob_irq_nr; } ;
struct TYPE_5__ {TYPE_1__ sdio; } ;
struct TYPE_6__ {TYPE_2__ bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct brcmf_sdio *VAR_0)
{
 struct brcmf_sdio_dev *VAR_1;
 unsigned long VAR_2;

 VAR_1 = VAR_0->sdiodev;
 if (VAR_1->oob_irq_requested) {
  FUNC_2(&VAR_1->irq_en_lock, VAR_2);
  if (!VAR_1->irq_en && !FUNC_0(&VAR_0->ipend)) {
   FUNC_1(VAR_1->settings->bus.sdio.oob_irq_nr);
   VAR_1->irq_en = 1;
  }
  FUNC_3(&VAR_1->irq_en_lock, VAR_2);
 }
}
