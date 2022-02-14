
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; int ip_summed; int data; } ;
struct net_device {int dummy; } ;
struct TYPE_13__ {TYPE_5__* orig; } ;
struct TYPE_11__ {TYPE_5__* orig; } ;
struct TYPE_10__ {int orig; } ;
struct TYPE_8__ {TYPE_5__* orig; } ;
struct fe_priv {scalar_t__ desc_ver; TYPE_7__* rx_skb; TYPE_7__* get_rx_ctx; int last_rx_ctx; TYPE_6__ rx_ring; TYPE_4__ get_rx; TYPE_3__ last_rx; int swstats_rx_syncp; int napi; TYPE_2__* pci_dev; TYPE_1__ put_rx; } ;
struct TYPE_14__ {struct sk_buff* skb; int dma_len; int dma; } ;
struct TYPE_12__ {int flaglen; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 struct fe_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,struct fe_priv*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_23, int VAR_24)
{
 struct fe_priv *VAR_25 = FUNC_6(VAR_23);
 u32 VAR_26;
 int VAR_27 = 0;
 struct sk_buff *VAR_28;
 int VAR_29;

 while ((VAR_25->get_rx.orig != VAR_25->put_rx.orig) &&
       !((VAR_26 = FUNC_3(VAR_25->get_rx.orig->flaglen)) & VAR_14) &&
  (VAR_27 < VAR_24)) {






  FUNC_1(&VAR_25->pci_dev->dev, VAR_25->get_rx_ctx->dma,
     VAR_25->get_rx_ctx->dma_len,
     VAR_2);
  VAR_28 = VAR_25->get_rx_ctx->skb;
  VAR_25->get_rx_ctx->skb = ((void*)0);


  if (VAR_25->desc_ver == VAR_1) {
   if (FUNC_4(VAR_26 & VAR_15)) {
    VAR_29 = VAR_26 & VAR_3;
    if (FUNC_14(VAR_26 & VAR_16)) {
     if ((VAR_26 & VAR_18) == VAR_17) {
      VAR_29 = FUNC_7(VAR_23, VAR_28->data, VAR_29);
      if (VAR_29 < 0) {
       FUNC_0(VAR_28);
       goto next_pkt;
      }
     }

     else if ((VAR_26 & VAR_18) == VAR_19) {
      if (VAR_26 & VAR_20)
       VAR_29--;
     }

     else {
      FUNC_10(VAR_26, VAR_25);
      FUNC_0(VAR_28);
      goto next_pkt;
     }
    }
   } else {
    FUNC_0(VAR_28);
    goto next_pkt;
   }
  } else {
   if (FUNC_4(VAR_26 & VAR_8)) {
    VAR_29 = VAR_26 & VAR_4;
    if (FUNC_14(VAR_26 & VAR_9)) {
     if ((VAR_26 & VAR_11) == VAR_10) {
      VAR_29 = FUNC_7(VAR_23, VAR_28->data, VAR_29);
      if (VAR_29 < 0) {
       FUNC_0(VAR_28);
       goto next_pkt;
      }
     }

     else if ((VAR_26 & VAR_11) == VAR_12) {
      if (VAR_26 & VAR_13)
       VAR_29--;
     }

     else {
      FUNC_0(VAR_28);
      goto next_pkt;
     }
    }
    if (((VAR_26 & VAR_5) == VAR_6) ||
        ((VAR_26 & VAR_5) == VAR_7))
     VAR_28->ip_summed = VAR_0;
   } else {
    FUNC_0(VAR_28);
    goto next_pkt;
   }
  }

  FUNC_11(VAR_28, VAR_29);
  VAR_28->protocol = FUNC_2(VAR_28, VAR_23);
  FUNC_5(&VAR_25->napi, VAR_28);
  FUNC_12(&VAR_25->swstats_rx_syncp);
  FUNC_9(VAR_22);
  FUNC_8(VAR_21, VAR_29);
  FUNC_13(&VAR_25->swstats_rx_syncp);
next_pkt:
  if (FUNC_14(VAR_25->get_rx.orig++ == VAR_25->last_rx.orig))
   VAR_25->get_rx.orig = VAR_25->rx_ring.orig;
  if (FUNC_14(VAR_25->get_rx_ctx++ == VAR_25->last_rx_ctx))
   VAR_25->get_rx_ctx = VAR_25->rx_skb;

  VAR_27++;
 }

 return VAR_27;
}
