
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {void* protocol; scalar_t__ len; scalar_t__ ip_summed; int data; } ;
struct sge_port_stats {int tx_cso; int vlan_insert; int tx_tso; int tx_need_hdrroom; } ;
struct sge {struct sk_buff** espibug_skb; int * port_stats; } ;
struct net_device {size_t if_port; scalar_t__ hard_header_len; scalar_t__ mtu; struct adapter* ml_priv; } ;
struct cpl_tx_pkt_lso {int len; void* eth_type_mss; int tcp_hdr_words; int ip_hdr_words; scalar_t__ l4_csum_dis; scalar_t__ ip_csum_dis; int opcode; } ;
struct cpl_tx_pkt {int ip_csum_dis; int l4_csum_dis; size_t iff; int vlan_valid; void* vlan; int opcode; } ;
struct adapter {struct sge* sge; } ;
typedef int netdev_tx_t ;
struct TYPE_8__ {void* ar_op; } ;
struct TYPE_7__ {scalar_t__ protocol; int ihl; } ;
struct TYPE_6__ {scalar_t__ gso_size; } ;
struct TYPE_5__ {int doff; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_10 ;
 struct cpl_tx_pkt* FUNC_1 (struct sk_buff*,int) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct net_device*,char*,...) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 struct cpl_tx_pkt_lso* FUNC_13 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,struct adapter*,int ,struct net_device*) ;
 TYPE_1__* FUNC_19 (struct sk_buff*) ;
 struct sge_port_stats* FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int) ;

netdev_tx_t FUNC_22(struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 struct adapter *VAR_13 = VAR_12->ml_priv;
 struct sge *VAR_14 = VAR_13->sge;
 struct sge_port_stats *VAR_15 = FUNC_20(VAR_14->port_stats[VAR_12->if_port]);
 struct cpl_tx_pkt *VAR_16;
 struct sk_buff *VAR_17 = VAR_11;
 int VAR_18;

 if (VAR_11->protocol == FUNC_6(VAR_8))
  goto send;





 if (FUNC_21(FUNC_11(VAR_11) < VAR_12->hard_header_len - VAR_6)) {
  VAR_11 = FUNC_14(VAR_11, sizeof(struct cpl_tx_pkt_lso));
  ++VAR_15->tx_need_hdrroom;
  FUNC_3(VAR_17);
  if (!VAR_11)
   return VAR_10;
 }

 if (FUNC_15(VAR_11)->gso_size) {
  int VAR_19;
  struct cpl_tx_pkt_lso *VAR_20;

  ++VAR_15->tx_tso;

  VAR_19 = FUNC_12(VAR_11) == VAR_6 ?
   VAR_2 : VAR_3;

  VAR_20 = FUNC_13(VAR_11, sizeof(*VAR_20));
  VAR_20->opcode = VAR_5;
  VAR_20->ip_csum_dis = VAR_20->l4_csum_dis = 0;
  VAR_20->ip_hdr_words = FUNC_7(VAR_11)->ihl;
  VAR_20->tcp_hdr_words = FUNC_19(VAR_11)->doff;
  VAR_20->eth_type_mss = FUNC_6(FUNC_0(VAR_19,
         FUNC_15(VAR_11)->gso_size));
  VAR_20->len = FUNC_5(VAR_11->len - sizeof(*VAR_20));
  VAR_16 = (struct cpl_tx_pkt *)VAR_20;
 } else {






  if (FUNC_21(VAR_11->len < VAR_6 ||
        VAR_11->len > VAR_12->mtu + FUNC_4(VAR_11->data))) {
   FUNC_8(VAR_12, "packet size %d hdr %d mtu%d\n",
       VAR_11->len, FUNC_4(VAR_11->data), VAR_12->mtu);
   FUNC_3(VAR_11);
   return VAR_10;
  }

  if (VAR_11->ip_summed == VAR_1 &&
      FUNC_7(VAR_11)->protocol == VAR_9) {
   if (FUNC_21(FUNC_9(VAR_11))) {
    FUNC_8(VAR_12, "unable to do udp checksum\n");
    FUNC_3(VAR_11);
    return VAR_10;
   }
  }




  if ((FUNC_21(!VAR_13->sge->espibug_skb[VAR_12->if_port]))) {
   if (VAR_11->protocol == FUNC_6(VAR_7) &&
       FUNC_2(VAR_11)->ar_op == FUNC_6(VAR_0)) {
    VAR_13->sge->espibug_skb[VAR_12->if_port] = VAR_11;




    VAR_11 = FUNC_10(VAR_11);
   }
  }

  VAR_16 = FUNC_1(VAR_11, sizeof(*VAR_16));
  VAR_16->opcode = VAR_4;
  VAR_16->ip_csum_dis = 1;
  VAR_16->l4_csum_dis = VAR_11->ip_summed == VAR_1 ? 0 : 1;


  VAR_15->tx_cso += (VAR_11->ip_summed == VAR_1);
 }
 VAR_16->iff = VAR_12->if_port;

 if (FUNC_17(VAR_11)) {
  VAR_16->vlan_valid = 1;
  VAR_16->vlan = FUNC_6(FUNC_16(VAR_11));
  VAR_15->vlan_insert++;
 } else
  VAR_16->vlan_valid = 0;

send:
 VAR_18 = FUNC_18(VAR_11, VAR_13, 0, VAR_12);




 if (FUNC_21(VAR_18 != VAR_10 && VAR_11 != VAR_17)) {
  FUNC_3(VAR_11);
  VAR_18 = VAR_10;
 }
 return VAR_18;
}
