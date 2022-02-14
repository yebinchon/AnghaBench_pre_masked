
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct qlcnic_rx_buffer {int dummy; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_host_rds_ring {int num_desc; int skb_size; struct qlcnic_rx_buffer* rx_buf_arr; } ;
struct TYPE_2__ {int rxbytes; int rx_pkts; int rxdropped; } ;
struct qlcnic_adapter {int max_rds_rings; TYPE_1__ stats; scalar_t__ rx_mac_learn; struct qlcnic_recv_context* recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qlcnic_adapter*,struct sk_buff*,int,int) ;
 int FUNC_7 (struct qlcnic_adapter*,struct sk_buff*,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct sk_buff* FUNC_12 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static struct qlcnic_rx_buffer *
FUNC_16(struct qlcnic_adapter *VAR_1,
     struct qlcnic_host_sds_ring *VAR_2, int VAR_3,
     u64 VAR_4)
{
 struct net_device *VAR_5 = VAR_1->netdev;
 struct qlcnic_recv_context *VAR_6 = VAR_1->recv_ctx;
 struct qlcnic_rx_buffer *VAR_7;
 struct sk_buff *VAR_8;
 struct qlcnic_host_rds_ring *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u16 VAR_15 = 0xffff, VAR_16;

 if (FUNC_15(VAR_3 >= VAR_1->max_rds_rings))
  return ((void*)0);

 VAR_9 = &VAR_6->rds_rings[VAR_3];

 VAR_10 = FUNC_9(VAR_4);
 if (FUNC_15(VAR_10 >= VAR_9->num_desc))
  return ((void*)0);

 VAR_7 = &VAR_9->rx_buf_arr[VAR_10];
 VAR_11 = FUNC_11(VAR_4);
 VAR_12 = FUNC_10(VAR_4);
 VAR_13 = FUNC_8(VAR_4);

 VAR_8 = FUNC_12(VAR_1, VAR_9, VAR_10, VAR_12);
 if (!VAR_8)
  return VAR_7;

 if (VAR_1->rx_mac_learn) {
  VAR_16 = 0;
  VAR_14 = FUNC_5(VAR_4);
  FUNC_6(VAR_1, VAR_8, VAR_14, VAR_16);
 }

 if (VAR_11 > VAR_9->skb_size)
  FUNC_14(VAR_8, VAR_9->skb_size);
 else
  FUNC_14(VAR_8, VAR_11);

 if (VAR_13)
  FUNC_13(VAR_8, VAR_13);

 if (FUNC_15(FUNC_7(VAR_1, VAR_8, &VAR_15))) {
  VAR_1->stats.rxdropped++;
  FUNC_1(VAR_8);
  return VAR_7;
 }

 VAR_8->protocol = FUNC_2(VAR_8, VAR_5);

 if (VAR_15 != 0xffff)
  FUNC_0(VAR_8, FUNC_3(VAR_0), VAR_15);

 FUNC_4(&VAR_2->napi, VAR_8);

 VAR_1->stats.rx_pkts++;
 VAR_1->stats.rxbytes += VAR_11;

 return VAR_7;
}
