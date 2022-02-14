
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct tcphdr {int doff; int psh; int seq; } ;
struct sk_buff {void* protocol; int len; scalar_t__ data; } ;
struct qlcnic_rx_buffer {int dummy; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_rds_ring {int num_desc; struct qlcnic_rx_buffer* rx_buf_arr; } ;
struct TYPE_3__ {int lrobytes; int lro_pkts; int rxdropped; } ;
struct qlcnic_adapter {int max_rds_rings; int flags; TYPE_1__ stats; scalar_t__ rx_mac_learn; struct qlcnic_recv_context* recv_ctx; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {void* payload_len; } ;
struct iphdr {int ihl; void* tot_len; int check; } ;
struct TYPE_4__ {int gso_type; int gso_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*,int) ;
 int FUNC_1 (int *,void*,void*) ;
 int FUNC_2 (struct sk_buff*) ;
 void* FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qlcnic_adapter*,struct sk_buff*,int,int) ;
 int FUNC_10 (struct qlcnic_adapter*,struct sk_buff*,int*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 struct sk_buff* FUNC_19 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int,int ) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static struct qlcnic_rx_buffer *
FUNC_24(struct qlcnic_adapter *VAR_8,
     int VAR_9, u64 VAR_10, u64 VAR_11)
{
 struct net_device *VAR_12 = VAR_8->netdev;
 struct qlcnic_recv_context *VAR_13 = VAR_8->recv_ctx;
 struct qlcnic_rx_buffer *VAR_14;
 struct sk_buff *VAR_15;
 struct qlcnic_host_rds_ring *VAR_16;
 struct iphdr *VAR_17;
 struct ipv6hdr *VAR_18;
 struct tcphdr *VAR_19;
 bool VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 u16 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30 = 0xffff;
 u32 VAR_31;

 if (FUNC_23(VAR_9 >= VAR_8->max_rds_rings))
  return ((void*)0);

 VAR_16 = &VAR_13->rds_rings[VAR_9];

 VAR_22 = FUNC_16(VAR_10);
 if (FUNC_23(VAR_22 >= VAR_16->num_desc))
  return ((void*)0);

 VAR_14 = &VAR_16->rx_buf_arr[VAR_22];

 VAR_21 = FUNC_18(VAR_10);
 VAR_26 = FUNC_13(VAR_10);
 VAR_23 = FUNC_11(VAR_10);
 VAR_24 = FUNC_12(VAR_10);
 VAR_20 = FUNC_15(VAR_10);
 VAR_31 = FUNC_17(VAR_11);

 VAR_15 = FUNC_19(VAR_8, VAR_16, VAR_22, VAR_7);
 if (!VAR_15)
  return VAR_14;

 if (VAR_8->rx_mac_learn) {
  VAR_29 = 0;
  VAR_25 = FUNC_8(VAR_10);
  FUNC_9(VAR_8, VAR_15, VAR_25, VAR_29);
 }

 if (VAR_21)
  VAR_28 = VAR_24 + VAR_4;
 else
  VAR_28 = VAR_24 + VAR_3;

 FUNC_21(VAR_15, VAR_26 + VAR_28);
 FUNC_20(VAR_15, VAR_23);

 if (FUNC_23(FUNC_10(VAR_8, VAR_15, &VAR_30))) {
  VAR_8->stats.rxdropped++;
  FUNC_2(VAR_15);
  return VAR_14;
 }

 VAR_15->protocol = FUNC_3(VAR_15, VAR_12);

 if (FUNC_7(VAR_15->protocol) == VAR_1) {
  VAR_18 = (struct ipv6hdr *)VAR_15->data;
  VAR_19 = (struct tcphdr *)(VAR_15->data + sizeof(struct ipv6hdr));
  VAR_27 = (VAR_19->doff << 2) + VAR_26;
  VAR_18->payload_len = FUNC_5(VAR_27);
 } else {
  VAR_17 = (struct iphdr *)VAR_15->data;
  VAR_19 = (struct tcphdr *)(VAR_15->data + (VAR_17->ihl << 2));
  VAR_27 = (VAR_17->ihl << 2) + (VAR_19->doff << 2) + VAR_26;
  FUNC_1(&VAR_17->check, VAR_17->tot_len, FUNC_5(VAR_27));
  VAR_17->tot_len = FUNC_5(VAR_27);
 }

 VAR_19->psh = VAR_20;
 VAR_19->seq = FUNC_4(VAR_31);
 VAR_27 = VAR_15->len;

 if (VAR_8->flags & VAR_2) {
  FUNC_22(VAR_15)->gso_size = FUNC_14(VAR_11);
  if (VAR_15->protocol == FUNC_5(VAR_1))
   FUNC_22(VAR_15)->gso_type = VAR_6;
  else
   FUNC_22(VAR_15)->gso_type = VAR_5;
 }

 if (VAR_30 != 0xffff)
  FUNC_0(VAR_15, FUNC_5(VAR_0), VAR_30);
 FUNC_6(VAR_15);

 VAR_8->stats.lro_pkts++;
 VAR_8->stats.lrobytes += VAR_27;

 return VAR_14;
}
