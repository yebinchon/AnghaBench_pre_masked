
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
struct sk_buff {unsigned int len; int protocol; } ;
struct net_device {int features; } ;
struct TYPE_11__ {unsigned int rx_bytes; int rx_multicast; int rx_pkts; int rx_err_cnt; int err_pkt_len; int l2_err; } ;
struct hns3_enet_ring {int next_to_clean; int desc_num; TYPE_6__* tqp_vector; int syncp; TYPE_4__ stats; struct hns3_desc* desc; TYPE_3__* tqp; } ;
struct TYPE_14__ {int rss_hash; int pkt_len; int ol_info; int l234_info; int bd_base_info; } ;
struct hns3_desc {TYPE_7__ rx; } ;
typedef enum hns3_pkt_l2t_type { ____Placeholder_hns3_pkt_l2t_type } hns3_pkt_l2t_type ;
struct TYPE_12__ {unsigned int total_bytes; } ;
struct TYPE_13__ {TYPE_5__ rx_group; } ;
struct TYPE_10__ {TYPE_2__* handle; } ;
struct TYPE_8__ {struct net_device* netdev; } ;
struct TYPE_9__ {TYPE_1__ kinfo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (struct hns3_enet_ring*,struct hns3_desc*,int,int *) ;
 int FUNC_5 (struct hns3_enet_ring*,struct sk_buff*,int,int,int) ;
 int FUNC_6 (struct hns3_enet_ring*,struct sk_buff*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct hns3_enet_ring *VAR_8, struct sk_buff *VAR_9)
{
 struct net_device *VAR_10 = VAR_8->tqp->handle->kinfo.netdev;
 enum hns3_pkt_l2t_type VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 struct hns3_desc *VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18;





 VAR_17 = VAR_8->next_to_clean ? (VAR_8->next_to_clean - 1) :
     (VAR_8->desc_num - 1);
 VAR_15 = &VAR_8->desc[VAR_17];
 VAR_12 = FUNC_8(VAR_15->rx.bd_base_info);
 VAR_13 = FUNC_8(VAR_15->rx.l234_info);
 VAR_14 = FUNC_8(VAR_15->rx.ol_info);





 if (VAR_10->features & VAR_7) {
  u16 VAR_19;

  if (FUNC_4(VAR_8, VAR_15, VAR_13, &VAR_19))
   FUNC_1(VAR_9, FUNC_7(VAR_1),
            VAR_19);
 }

 if (FUNC_11(!VAR_15->rx.pkt_len || (VAR_13 & (FUNC_0(VAR_6) |
      FUNC_0(VAR_5))))) {
  FUNC_9(&VAR_8->syncp);
  if (VAR_13 & FUNC_0(VAR_5))
   VAR_8->stats.l2_err++;
  else
   VAR_8->stats.err_pkt_len++;
  FUNC_10(&VAR_8->syncp);

  return -VAR_0;
 }

 VAR_16 = VAR_9->len;


 VAR_9->protocol = FUNC_2(VAR_9, VAR_10);


 VAR_18 = FUNC_5(VAR_8, VAR_9, VAR_13,
     VAR_12, VAR_14);
 if (FUNC_11(VAR_18)) {
  FUNC_9(&VAR_8->syncp);
  VAR_8->stats.rx_err_cnt++;
  FUNC_10(&VAR_8->syncp);
  return VAR_18;
 }

 VAR_11 = FUNC_3(VAR_13, VAR_3,
     VAR_4);

 FUNC_9(&VAR_8->syncp);
 VAR_8->stats.rx_pkts++;
 VAR_8->stats.rx_bytes += VAR_16;

 if (VAR_11 == VAR_2)
  VAR_8->stats.rx_multicast++;

 FUNC_10(&VAR_8->syncp);

 VAR_8->tqp_vector->rx_group.total_bytes += VAR_16;

 FUNC_6(VAR_8, VAR_9, FUNC_8(VAR_15->rx.rss_hash));
 return 0;
}
