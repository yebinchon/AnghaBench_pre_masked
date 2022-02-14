
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int dma; scalar_t__ virt; int size; } ;
struct TYPE_11__ {TYPE_4__* pdev; } ;
struct alx_priv {int num_txq; TYPE_6__ descmem; TYPE_5__ hw; TYPE_3__** qnapi; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {TYPE_2__* rxq; TYPE_1__* txq; } ;
struct TYPE_8__ {int bufs; } ;
struct TYPE_7__ {int bufs; } ;


 int FUNC_0 (struct alx_priv*) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct alx_priv *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_txq; VAR_1++)
  if (VAR_0->qnapi[VAR_1] && VAR_0->qnapi[VAR_1]->txq)
   FUNC_2(VAR_0->qnapi[VAR_1]->txq->bufs);

 if (VAR_0->qnapi[0] && VAR_0->qnapi[0]->rxq)
  FUNC_2(VAR_0->qnapi[0]->rxq->bufs);

 if (VAR_0->descmem.virt)
  FUNC_1(&VAR_0->hw.pdev->dev,
      VAR_0->descmem.size,
      VAR_0->descmem.virt,
      VAR_0->descmem.dma);
}
