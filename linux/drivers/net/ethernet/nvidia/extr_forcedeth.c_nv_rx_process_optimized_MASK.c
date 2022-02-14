
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
typedef int u16 ;
struct sk_buff {int data; int protocol; int ip_summed; } ;
struct net_device {int features; } ;
struct TYPE_13__ {TYPE_5__* ex; } ;
struct TYPE_11__ {TYPE_5__* ex; } ;
struct TYPE_10__ {int ex; } ;
struct TYPE_8__ {TYPE_5__* ex; } ;
struct fe_priv {TYPE_7__* rx_skb; TYPE_7__* get_rx_ctx; int last_rx_ctx; TYPE_6__ rx_ring; TYPE_4__ get_rx; TYPE_3__ last_rx; int swstats_rx_syncp; int napi; TYPE_2__* pci_dev; TYPE_1__ put_rx; } ;
struct TYPE_14__ {struct sk_buff* skb; int dma_len; int dma; } ;
struct TYPE_12__ {int buflow; int flaglen; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 struct fe_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_19, int VAR_20)
{
 struct fe_priv *VAR_21 = FUNC_8(VAR_19);
 u32 VAR_22;
 u32 VAR_23 = 0;
 int VAR_24 = 0;
 struct sk_buff *VAR_25;
 int VAR_26;

 while ((VAR_21->get_rx.ex != VAR_21->put_rx.ex) &&
       !((VAR_22 = FUNC_5(VAR_21->get_rx.ex->flaglen)) & VAR_5) &&
       (VAR_24 < VAR_20)) {






  FUNC_2(&VAR_21->pci_dev->dev, VAR_21->get_rx_ctx->dma,
     VAR_21->get_rx_ctx->dma_len,
     VAR_1);
  VAR_25 = VAR_21->get_rx_ctx->skb;
  VAR_21->get_rx_ctx->skb = ((void*)0);


  if (FUNC_6(VAR_22 & VAR_9)) {
   VAR_26 = VAR_22 & VAR_3;
   if (FUNC_16(VAR_22 & VAR_10)) {
    if ((VAR_22 & VAR_12) == VAR_11) {
     VAR_26 = FUNC_9(VAR_19, VAR_25->data, VAR_26);
     if (VAR_26 < 0) {
      FUNC_1(VAR_25);
      goto next_pkt;
     }
    }

    else if ((VAR_22 & VAR_12) == VAR_13) {
     if (VAR_22 & VAR_14)
      VAR_26--;
    }

    else {
     FUNC_1(VAR_25);
     goto next_pkt;
    }
   }

   if (((VAR_22 & VAR_6) == VAR_7) ||
       ((VAR_22 & VAR_6) == VAR_8))
    VAR_25->ip_summed = VAR_0;


   FUNC_13(VAR_25, VAR_26);
   VAR_25->protocol = FUNC_3(VAR_25, VAR_19);
   FUNC_12(VAR_25->data);

   VAR_23 = FUNC_5(VAR_21->get_rx.ex->buflow);






   if (VAR_19->features & VAR_4 &&
       VAR_23 & VAR_16) {
    u16 VAR_27 = VAR_23 & VAR_15;

    FUNC_0(VAR_25, FUNC_4(VAR_2), VAR_27);
   }
   FUNC_7(&VAR_21->napi, VAR_25);
   FUNC_14(&VAR_21->swstats_rx_syncp);
   FUNC_11(VAR_18);
   FUNC_10(VAR_17, VAR_26);
   FUNC_15(&VAR_21->swstats_rx_syncp);
  } else {
   FUNC_1(VAR_25);
  }
next_pkt:
  if (FUNC_16(VAR_21->get_rx.ex++ == VAR_21->last_rx.ex))
   VAR_21->get_rx.ex = VAR_21->rx_ring.ex;
  if (FUNC_16(VAR_21->get_rx_ctx++ == VAR_21->last_rx_ctx))
   VAR_21->get_rx_ctx = VAR_21->rx_skb;

  VAR_24++;
 }

 return VAR_24;
}
