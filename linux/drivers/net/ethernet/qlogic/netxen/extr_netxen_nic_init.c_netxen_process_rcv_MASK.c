
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int protocol; } ;
struct nx_host_sds_ring {int napi; } ;
struct nx_host_rds_ring {int num_desc; int skb_size; struct netxen_rx_buffer* rx_buf_arr; } ;
struct netxen_rx_buffer {int dummy; } ;
struct netxen_recv_context {struct nx_host_rds_ring* rds_rings; } ;
struct TYPE_2__ {int rxbytes; int rx_pkts; } ;
struct netxen_adapter {int max_rds_rings; TYPE_1__ stats; struct netxen_recv_context recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (struct netxen_adapter*,struct nx_host_rds_ring*,int,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct netxen_rx_buffer *
FUNC_10(struct netxen_adapter *VAR_0,
  struct nx_host_sds_ring *VAR_1,
  int VAR_2, u64 VAR_3)
{
 struct net_device *VAR_4 = VAR_0->netdev;
 struct netxen_recv_context *VAR_5 = &VAR_0->recv_ctx;
 struct netxen_rx_buffer *VAR_6;
 struct sk_buff *VAR_7;
 struct nx_host_rds_ring *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (FUNC_9(VAR_2 >= VAR_0->max_rds_rings))
  return ((void*)0);

 VAR_8 = &VAR_5->rds_rings[VAR_2];

 VAR_9 = FUNC_3(VAR_3);
 if (FUNC_9(VAR_9 >= VAR_8->num_desc))
  return ((void*)0);

 VAR_6 = &VAR_8->rx_buf_arr[VAR_9];

 VAR_10 = FUNC_5(VAR_3);
 VAR_11 = FUNC_4(VAR_3);
 VAR_12 = FUNC_2(VAR_3);

 VAR_7 = FUNC_6(VAR_0, VAR_8, VAR_9, VAR_11);
 if (!VAR_7)
  return VAR_6;

 if (VAR_10 > VAR_8->skb_size)
  FUNC_8(VAR_7, VAR_8->skb_size);
 else
  FUNC_8(VAR_7, VAR_10);


 if (VAR_12)
  FUNC_7(VAR_7, VAR_12);

 VAR_7->protocol = FUNC_0(VAR_7, VAR_4);

 FUNC_1(&VAR_1->napi, VAR_7);

 VAR_0->stats.rx_pkts++;
 VAR_0->stats.rxbytes += VAR_10;

 return VAR_6;
}
