
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_6__ {int rx_dropped_resize; } ;
struct emac_instance {int rx_skb_size; int link_lock; int mal_rx_chan; int mal; scalar_t__ rx_slot; TYPE_4__ commac; TYPE_5__* ndev; struct sk_buff** rx_skb; TYPE_3__* ofdev; TYPE_2__* rx_desc; TYPE_1__ estats; struct sk_buff* rx_sg_skb; } ;
struct TYPE_10__ {int mtu; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int ctrl; scalar_t__ data_ptr; scalar_t__ data_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int,int ) ;
 int FUNC_4 (struct emac_instance*) ;
 scalar_t__ FUNC_5 (struct emac_instance*,int ) ;
 int FUNC_6 (struct emac_instance*) ;
 int FUNC_7 (struct emac_instance*) ;
 int FUNC_8 (struct emac_instance*) ;
 int FUNC_9 (struct emac_instance*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 struct sk_buff* FUNC_18 (TYPE_5__*,int) ;
 int FUNC_19 (int ,int *) ;

__attribute__((used)) static int FUNC_20(struct emac_instance *VAR_10, int VAR_11)
{
 int VAR_12 = FUNC_12(VAR_11);
 int VAR_13 = FUNC_11(VAR_11);
 int VAR_14, VAR_15 = 0;
 int VAR_16 = 0;

 FUNC_16(&VAR_10->link_lock);
 FUNC_7(VAR_10);
 FUNC_8(VAR_10);
 FUNC_13(VAR_10->mal, VAR_10->mal_rx_chan);

 if (VAR_10->rx_sg_skb) {
  ++VAR_10->estats.rx_dropped_resize;
  FUNC_2(VAR_10->rx_sg_skb);
  VAR_10->rx_sg_skb = ((void*)0);
 }





 for (VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14) {
  if (VAR_10->rx_desc[VAR_14].ctrl & VAR_6)
   ++VAR_10->estats.rx_dropped_resize;

  VAR_10->rx_desc[VAR_14].data_len = 0;
  VAR_10->rx_desc[VAR_14].ctrl = VAR_5 |
      (VAR_14 == (VAR_9 - 1) ? VAR_7 : 0);
 }


 if (VAR_13 <= VAR_10->rx_skb_size)
  goto skip;


 for (VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14) {
  struct sk_buff *VAR_17;

  VAR_17 = FUNC_18(VAR_10->ndev, VAR_13);
  if (!VAR_17) {
   VAR_15 = -VAR_2;
   goto oom;
  }

  FUNC_0(!VAR_10->rx_skb[VAR_14]);
  FUNC_2(VAR_10->rx_skb[VAR_14]);

  VAR_10->rx_desc[VAR_14].data_ptr =
      FUNC_3(&VAR_10->ofdev->dev, VAR_17->data - VAR_8,
       VAR_12, VAR_0)
       + VAR_8;
  VAR_10->rx_skb[VAR_14] = VAR_17;
 }
 skip:

 if (FUNC_5(VAR_10, VAR_1)) {
  VAR_16 = (VAR_11 > VAR_3) ||
    (VAR_10->ndev->mtu > VAR_3);
 } else {
  VAR_16 = (VAR_11 > VAR_3) ^
    (VAR_10->ndev->mtu > VAR_3);
 }

 if (VAR_16) {

  FUNC_19(VAR_4, &VAR_10->commac.flags);

  VAR_10->ndev->mtu = VAR_11;
  FUNC_4(VAR_10);
 }

 FUNC_15(VAR_10->mal, VAR_10->mal_rx_chan, FUNC_10(VAR_11));
 oom:

 FUNC_1(VAR_4, &VAR_10->commac.flags);
 VAR_10->rx_slot = 0;
 FUNC_14(VAR_10->mal, VAR_10->mal_rx_chan);
 FUNC_9(VAR_10);
 FUNC_6(VAR_10);
 FUNC_17(&VAR_10->link_lock);

 return VAR_15;
}
