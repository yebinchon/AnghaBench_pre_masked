
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


typedef int u32 ;
struct ring_desc_ex {int flaglen; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {struct ring_desc_ex* ex; } ;
struct TYPE_9__ {struct ring_desc_ex* ex; } ;
struct TYPE_8__ {int ex; } ;
struct TYPE_7__ {struct ring_desc_ex* ex; } ;
struct fe_priv {int driver_data; int tx_stop; TYPE_4__ get_tx; int dev; TYPE_5__* tx_skb; TYPE_5__* get_tx_ctx; int last_tx_ctx; TYPE_3__ tx_ring; TYPE_2__ last_tx; scalar_t__ tx_limit; int swstats_tx_syncp; TYPE_1__ put_tx; } ;
struct TYPE_12__ {unsigned int len; } ;
struct TYPE_11__ {TYPE_6__* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,unsigned long) ;
 struct fe_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct fe_priv*,TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_8, int VAR_9)
{
 struct fe_priv *VAR_10 = FUNC_3(VAR_8);
 u32 VAR_11;
 int VAR_12 = 0;
 struct ring_desc_ex *VAR_13 = VAR_10->get_tx.ex;
 unsigned long VAR_14 = 0;

 while ((VAR_10->get_tx.ex != VAR_10->put_tx.ex) &&
        !((VAR_11 = FUNC_1(VAR_10->get_tx.ex->flaglen)) & VAR_5) &&
        (VAR_12 < VAR_9)) {

  FUNC_10(VAR_10, VAR_10->get_tx_ctx);

  if (VAR_11 & VAR_2) {
   if (FUNC_13(VAR_11 & VAR_1)) {
    if ((VAR_11 & VAR_4)
        && !(VAR_11 & VAR_3)) {
     if (VAR_10->driver_data & VAR_0)
      FUNC_5(VAR_8);
     else
      FUNC_6(VAR_8);
    }
   } else {
    unsigned int VAR_15;

    FUNC_11(&VAR_10->swstats_tx_syncp);
    FUNC_9(VAR_7);
    VAR_15 = VAR_10->get_tx_ctx->skb->len;
    FUNC_8(VAR_6, VAR_15);
    FUNC_12(&VAR_10->swstats_tx_syncp);
   }

   VAR_14 += VAR_10->get_tx_ctx->skb->len;
   FUNC_0(VAR_10->get_tx_ctx->skb);
   VAR_10->get_tx_ctx->skb = ((void*)0);
   VAR_12++;

   if (VAR_10->tx_limit)
    FUNC_7(VAR_8);
  }

  if (FUNC_13(VAR_10->get_tx.ex++ == VAR_10->last_tx.ex))
   VAR_10->get_tx.ex = VAR_10->tx_ring.ex;
  if (FUNC_13(VAR_10->get_tx_ctx++ == VAR_10->last_tx_ctx))
   VAR_10->get_tx_ctx = VAR_10->tx_skb;
 }

 FUNC_2(VAR_10->dev, VAR_12, VAR_14);

 if (FUNC_13((VAR_10->tx_stop == 1) && (VAR_10->get_tx.ex != VAR_13))) {
  VAR_10->tx_stop = 0;
  FUNC_4(VAR_8);
 }
 return VAR_12;
}
