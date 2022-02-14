
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct tcphdr {int doff; int psh; int seq; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; int protocol; } ;
struct nx_host_sds_ring {int dummy; } ;
struct nx_host_rds_ring {int num_desc; struct netxen_rx_buffer* rx_buf_arr; } ;
struct netxen_rx_buffer {int dummy; } ;
struct netxen_recv_context {struct nx_host_rds_ring* rds_rings; } ;
struct TYPE_3__ {int rxbytes; int lro_pkts; } ;
struct netxen_adapter {int max_rds_rings; int flags; TYPE_1__ stats; struct netxen_recv_context recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct iphdr {int ihl; int tot_len; int check; } ;
struct TYPE_4__ {int gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct sk_buff* FUNC_13 (struct netxen_adapter*,struct nx_host_rds_ring*,int,int ) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 TYPE_2__* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static struct netxen_rx_buffer *
FUNC_18(struct netxen_adapter *VAR_6,
  struct nx_host_sds_ring *VAR_7,
  int VAR_8, u64 VAR_9, u64 VAR_10)
{
 struct net_device *VAR_11 = VAR_6->netdev;
 struct netxen_recv_context *VAR_12 = &VAR_6->recv_ctx;
 struct netxen_rx_buffer *VAR_13;
 struct sk_buff *VAR_14;
 struct nx_host_rds_ring *VAR_15;
 struct iphdr *VAR_16;
 struct tcphdr *VAR_17;
 bool VAR_18, VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;
 u16 VAR_23, VAR_24, VAR_25;
 u32 VAR_26;
 u8 VAR_27 = 0;

 if (FUNC_17(VAR_8 >= VAR_6->max_rds_rings))
  return ((void*)0);

 VAR_15 = &VAR_12->rds_rings[VAR_8];

 VAR_22 = FUNC_10(VAR_9);
 if (FUNC_17(VAR_22 >= VAR_15->num_desc))
  return ((void*)0);

 VAR_13 = &VAR_15->rx_buf_arr[VAR_22];

 VAR_19 = FUNC_12(VAR_9);
 VAR_23 = FUNC_7(VAR_9);
 VAR_20 = FUNC_5(VAR_9);
 VAR_21 = FUNC_6(VAR_9);
 VAR_18 = FUNC_9(VAR_9);
 VAR_26 = FUNC_11(VAR_10);

 VAR_14 = FUNC_13(VAR_6, VAR_15, VAR_22, VAR_2);
 if (!VAR_14)
  return VAR_13;

 if (VAR_19)
  VAR_25 = VAR_21 + VAR_4;
 else
  VAR_25 = VAR_21 + VAR_3;

 FUNC_15(VAR_14, VAR_23 + VAR_25);

 FUNC_14(VAR_14, VAR_20);
 VAR_14->protocol = FUNC_1(VAR_14, VAR_11);

 if (VAR_14->protocol == FUNC_3(VAR_0))
  VAR_27 = VAR_5;
 VAR_16 = (struct iphdr *)(VAR_14->data + VAR_27);
 VAR_17 = (struct tcphdr *)((VAR_14->data + VAR_27) + (VAR_16->ihl << 2));

 VAR_24 = (VAR_16->ihl << 2) + (VAR_17->doff << 2) + VAR_23;
 FUNC_0(&VAR_16->check, VAR_16->tot_len, FUNC_3(VAR_24));
 VAR_16->tot_len = FUNC_3(VAR_24);
 VAR_17->psh = VAR_18;
 VAR_17->seq = FUNC_2(VAR_26);

 VAR_24 = VAR_14->len;

 if (VAR_6->flags & VAR_1)
  FUNC_16(VAR_14)->gso_size = FUNC_8(VAR_10);

 FUNC_4(VAR_14);

 VAR_6->stats.lro_pkts++;
 VAR_6->stats.rxbytes += VAR_24;

 return VAR_13;
}
