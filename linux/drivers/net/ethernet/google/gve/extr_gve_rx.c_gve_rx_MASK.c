
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int csum; int ip_summed; } ;
struct net_device {int dummy; } ;
struct napi_struct {int dummy; } ;
struct gve_rx_slot_page_info {int page; } ;
struct TYPE_8__ {int * data_ring; TYPE_3__* qpl; struct gve_rx_slot_page_info* page_info; } ;
struct gve_rx_ring {size_t ntfy_id; TYPE_4__ data; struct gve_priv* gve; } ;
struct gve_rx_desc {int flags_seq; int rss_hash; scalar_t__ csum; int len; } ;
struct gve_priv {scalar_t__ rx_copybreak; TYPE_2__* pdev; struct net_device* dev; TYPE_1__* ntfy_blocks; } ;
typedef int netdev_features_t ;
struct TYPE_7__ {int * page_buses; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct napi_struct napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 struct sk_buff* FUNC_9 (struct net_device*,struct napi_struct*,struct gve_rx_slot_page_info*,scalar_t__) ;
 struct sk_buff* FUNC_10 (struct net_device*,struct napi_struct*,struct gve_rx_slot_page_info*,scalar_t__) ;
 int FUNC_11 (struct gve_rx_slot_page_info*,int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct napi_struct*) ;
 int FUNC_14 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static bool FUNC_19(struct gve_rx_ring *VAR_8, struct gve_rx_desc *VAR_9,
     netdev_features_t VAR_10, u32 VAR_11)
{
 struct gve_rx_slot_page_info *VAR_12;
 struct gve_priv *VAR_13 = VAR_8->gve;
 struct napi_struct *VAR_14 = &VAR_13->ntfy_blocks[VAR_8->ntfy_id].napi;
 struct net_device *VAR_15 = VAR_13->dev;
 struct sk_buff *VAR_16;
 int VAR_17;
 u16 VAR_18;


 if (FUNC_18(VAR_9->flags_seq & VAR_3))
  return 1;

 VAR_18 = FUNC_1(VAR_9->len) - VAR_4;
 VAR_12 = &VAR_8->data.page_info[VAR_11];
 FUNC_4(&VAR_13->pdev->dev, VAR_8->data.qpl->page_buses[VAR_11],
    VAR_7, VAR_2);






 if (VAR_7 == 4096) {
  if (VAR_18 <= VAR_13->rx_copybreak) {

   VAR_16 = FUNC_10(VAR_15, VAR_14, VAR_12, VAR_18);
   goto have_skb;
  }
  if (FUNC_18(!FUNC_6(VAR_15))) {
   VAR_16 = FUNC_10(VAR_15, VAR_14, VAR_12, VAR_18);
   goto have_skb;
  }
  VAR_17 = FUNC_15(VAR_12->page);
  if (VAR_17 == 1) {




   VAR_16 = FUNC_9(VAR_15, VAR_14, VAR_12, VAR_18);
   if (!VAR_16)
    return 1;

   FUNC_5(VAR_12->page);

   FUNC_11(VAR_12, &VAR_8->data.data_ring[VAR_11]);
  } else if (VAR_17 >= 2) {



   VAR_16 = FUNC_10(VAR_15, VAR_14, VAR_12, VAR_18);
  } else {
   FUNC_0(VAR_17 < 1, "Pagecount should never be < 1");
   return 0;
  }
 } else {
  VAR_16 = FUNC_10(VAR_15, VAR_14, VAR_12, VAR_18);
 }

have_skb:



 if (!VAR_16)
  return 1;

 if (FUNC_12(VAR_10 & VAR_5)) {

  if (VAR_9->csum)
   VAR_16->ip_summed = VAR_0;
  else
   VAR_16->ip_summed = VAR_1;
  VAR_16->csum = FUNC_3(VAR_9->csum);
 }


 if (FUNC_12(VAR_10 & VAR_6) &&
     FUNC_7(VAR_9->flags_seq))
  FUNC_17(VAR_16, FUNC_2(VAR_9->rss_hash),
        FUNC_8(VAR_9->flags_seq));

 if (FUNC_16(VAR_16))
  FUNC_13(VAR_14);
 else
  FUNC_14(VAR_14, VAR_16);
 return 1;
}
