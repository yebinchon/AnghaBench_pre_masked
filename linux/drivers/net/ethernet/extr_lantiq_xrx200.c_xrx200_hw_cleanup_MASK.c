
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * skb; int dma; } ;
struct TYPE_3__ {int dma; } ;
struct xrx200_priv {TYPE_2__ chan_rx; TYPE_1__ chan_tx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct xrx200_priv *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->chan_tx.dma);
 FUNC_1(&VAR_1->chan_rx.dma);


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->chan_rx.skb[VAR_2]);
}
