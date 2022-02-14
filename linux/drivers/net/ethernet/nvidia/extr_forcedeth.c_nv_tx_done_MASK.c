
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
struct ring_desc {int flaglen; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {struct ring_desc* orig; } ;
struct TYPE_9__ {struct ring_desc* orig; } ;
struct TYPE_8__ {int orig; } ;
struct TYPE_7__ {struct ring_desc* orig; } ;
struct fe_priv {scalar_t__ desc_ver; int tx_stop; TYPE_4__ get_tx; int dev; TYPE_5__* tx_skb; TYPE_5__* get_tx_ctx; int last_tx_ctx; TYPE_3__ tx_ring; TYPE_2__ last_tx; int swstats_tx_syncp; TYPE_1__ put_tx; } ;
struct TYPE_12__ {unsigned int len; } ;
struct TYPE_11__ {TYPE_6__* skb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,unsigned int) ;
 struct fe_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fe_priv*,TYPE_5__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_12, int VAR_13)
{
 struct fe_priv *VAR_14 = FUNC_3(VAR_12);
 u32 VAR_15;
 int VAR_16 = 0;
 struct ring_desc *VAR_17 = VAR_14->get_tx.orig;
 unsigned int VAR_18 = 0;

 while ((VAR_14->get_tx.orig != VAR_14->put_tx.orig) &&
        !((VAR_15 = FUNC_1(VAR_14->get_tx.orig->flaglen)) & VAR_9) &&
        (VAR_16 < VAR_13)) {

  FUNC_8(VAR_14, VAR_14->get_tx_ctx);

  if (VAR_14->desc_ver == VAR_0) {
   if (VAR_15 & VAR_6) {
    if (FUNC_11(VAR_15 & VAR_5)) {
     if ((VAR_15 & VAR_8)
         && !(VAR_15 & VAR_7))
      FUNC_5(VAR_12);
    } else {
     unsigned int VAR_19;

     FUNC_9(&VAR_14->swstats_tx_syncp);
     FUNC_7(VAR_11);
     VAR_19 = VAR_14->get_tx_ctx->skb->len;
     FUNC_6(VAR_10, VAR_19);
     FUNC_10(&VAR_14->swstats_tx_syncp);
    }
    VAR_18 += VAR_14->get_tx_ctx->skb->len;
    FUNC_0(VAR_14->get_tx_ctx->skb);
    VAR_14->get_tx_ctx->skb = ((void*)0);
    VAR_16++;
   }
  } else {
   if (VAR_15 & VAR_2) {
    if (FUNC_11(VAR_15 & VAR_1)) {
     if ((VAR_15 & VAR_4)
         && !(VAR_15 & VAR_3))
      FUNC_5(VAR_12);
    } else {
     unsigned int VAR_20;

     FUNC_9(&VAR_14->swstats_tx_syncp);
     FUNC_7(VAR_11);
     VAR_20 = VAR_14->get_tx_ctx->skb->len;
     FUNC_6(VAR_10, VAR_20);
     FUNC_10(&VAR_14->swstats_tx_syncp);
    }
    VAR_18 += VAR_14->get_tx_ctx->skb->len;
    FUNC_0(VAR_14->get_tx_ctx->skb);
    VAR_14->get_tx_ctx->skb = ((void*)0);
    VAR_16++;
   }
  }
  if (FUNC_11(VAR_14->get_tx.orig++ == VAR_14->last_tx.orig))
   VAR_14->get_tx.orig = VAR_14->tx_ring.orig;
  if (FUNC_11(VAR_14->get_tx_ctx++ == VAR_14->last_tx_ctx))
   VAR_14->get_tx_ctx = VAR_14->tx_skb;
 }

 FUNC_2(VAR_14->dev, VAR_16, VAR_18);

 if (FUNC_11((VAR_14->tx_stop == 1) && (VAR_14->get_tx.orig != VAR_17))) {
  VAR_14->tx_stop = 0;
  FUNC_4(VAR_12);
 }
 return VAR_16;
}
