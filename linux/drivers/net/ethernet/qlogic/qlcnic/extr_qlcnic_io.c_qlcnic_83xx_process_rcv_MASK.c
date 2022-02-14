
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u16 ;
struct sk_buff {scalar_t__ ip_summed; int csum_level; int protocol; } ;
struct qlcnic_rx_buffer {int dummy; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_host_rds_ring {int num_desc; int skb_size; struct qlcnic_rx_buffer* rx_buf_arr; } ;
struct TYPE_2__ {int rxbytes; int rx_pkts; int encap_rx_csummed; int rxdropped; } ;
struct qlcnic_adapter {size_t max_rds_rings; TYPE_1__ stats; scalar_t__ rx_mac_learn; struct qlcnic_recv_context* recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qlcnic_adapter*,struct sk_buff*,int,int) ;
 int FUNC_10 (struct qlcnic_adapter*,struct sk_buff*,int*) ;
 scalar_t__ FUNC_11 (int ) ;
 struct sk_buff* FUNC_12 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct qlcnic_rx_buffer *
FUNC_15(struct qlcnic_adapter *VAR_2,
   struct qlcnic_host_sds_ring *VAR_3,
   u8 VAR_4, u64 VAR_5[])
{
 struct net_device *VAR_6 = VAR_2->netdev;
 struct qlcnic_recv_context *VAR_7 = VAR_2->recv_ctx;
 struct qlcnic_rx_buffer *VAR_8;
 struct sk_buff *VAR_9;
 struct qlcnic_host_rds_ring *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u16 VAR_15 = 0xffff;
 int VAR_16;

 if (FUNC_14(VAR_4 >= VAR_2->max_rds_rings))
  return ((void*)0);

 VAR_10 = &VAR_7->rds_rings[VAR_4];

 VAR_11 = FUNC_6(VAR_5[0]);
 if (FUNC_14(VAR_11 >= VAR_10->num_desc))
  return ((void*)0);

 VAR_8 = &VAR_10->rx_buf_arr[VAR_11];
 VAR_12 = FUNC_8(VAR_5[0]);
 VAR_13 = FUNC_5(VAR_5[1]);
 VAR_9 = FUNC_12(VAR_2, VAR_10, VAR_11, VAR_13);
 if (!VAR_9)
  return VAR_8;

 if (VAR_12 > VAR_10->skb_size)
  FUNC_13(VAR_9, VAR_10->skb_size);
 else
  FUNC_13(VAR_9, VAR_12);

 VAR_16 = FUNC_10(VAR_2, VAR_9, &VAR_15);

 if (VAR_2->rx_mac_learn) {
  VAR_14 = FUNC_7(VAR_5[1], 0);
  FUNC_9(VAR_2, VAR_9, VAR_14, VAR_15);
 }

 if (FUNC_14(VAR_16)) {
  VAR_2->stats.rxdropped++;
  FUNC_1(VAR_9);
  return VAR_8;
 }

 VAR_9->protocol = FUNC_2(VAR_9, VAR_6);

 if (FUNC_11(VAR_5[1]) &&
     VAR_9->ip_summed == VAR_0) {
  VAR_9->csum_level = 1;
  VAR_2->stats.encap_rx_csummed++;
 }

 if (VAR_15 != 0xffff)
  FUNC_0(VAR_9, FUNC_3(VAR_1), VAR_15);

 FUNC_4(&VAR_3->napi, VAR_9);

 VAR_2->stats.rx_pkts++;
 VAR_2->stats.rxbytes += VAR_12;

 return VAR_8;
}
