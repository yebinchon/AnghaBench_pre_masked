
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma; int napi; } ;
struct TYPE_3__ {int dma; int napi; } ;
struct xrx200_priv {TYPE_2__ chan_tx; TYPE_1__ chan_rx; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct xrx200_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct xrx200_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0);

 FUNC_1(&VAR_1->chan_rx.napi);
 FUNC_0(&VAR_1->chan_rx.dma);

 FUNC_1(&VAR_1->chan_tx.napi);
 FUNC_0(&VAR_1->chan_tx.dma);

 return 0;
}
