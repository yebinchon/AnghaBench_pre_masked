
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int u64 ;
struct sk_buff {int len; scalar_t__ protocol; scalar_t__ pkt_type; scalar_t__ data; int csum; } ;
struct octeon_ethernet {int port; } ;
struct TYPE_24__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {TYPE_2__ stats; int name; } ;
struct TYPE_28__ {int len; int tag_type; int tag; } ;
struct TYPE_23__ {int is_rarp; int is_arp; int is_bcast; int is_mcast; int not_IP; scalar_t__ err_code; scalar_t__ rcv_error; scalar_t__ software; scalar_t__ vlan_id; scalar_t__ vlan_cfi; scalar_t__ vlan_valid; } ;
struct TYPE_31__ {int bufs; int ip_offset; int tcp_or_udp; int is_frag; int is_bcast; int is_mcast; scalar_t__ err_code; scalar_t__ rcv_error; scalar_t__ not_IP; scalar_t__ IP_exc; scalar_t__ L4_error; scalar_t__ software; scalar_t__ is_v6; scalar_t__ dec_ipsec; scalar_t__ dec_ipcomp; scalar_t__ vlan_id; scalar_t__ vlan_cfi; scalar_t__ vlan_valid; } ;
struct TYPE_20__ {TYPE_1__ snoip; TYPE_9__ s; scalar_t__ u64; } ;
struct TYPE_29__ {int back; int size; int pool; int addr; } ;
struct TYPE_30__ {TYPE_7__ s; scalar_t__ u64; } ;
struct TYPE_25__ {int hw_chksum; } ;
struct TYPE_26__ {TYPE_3__ cn38xx; } ;
struct TYPE_27__ {TYPE_4__ pip; } ;
struct TYPE_21__ {void* packet_data; TYPE_6__ word1; TYPE_10__ word2; TYPE_8__ packet_ptr; TYPE_5__ word0; } ;
typedef TYPE_11__ cvmx_wqe_t ;
struct TYPE_22__ {scalar_t__ protocol; int frag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_11__*,int ,int) ;
 int FUNC_3 (TYPE_11__*,int ,int ,int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_11__*,int ) ;
 int FUNC_8 (TYPE_11__*,int) ;
 int FUNC_9 (TYPE_11__*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;
 TYPE_12__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (void*,scalar_t__,int) ;
 struct octeon_ethernet* FUNC_15 (struct net_device*) ;
 int VAR_13 ;
 int FUNC_16 (char*,int ) ;
 scalar_t__ FUNC_17 (int) ;

int FUNC_18(struct sk_buff *VAR_14, struct net_device *VAR_15)
{
 struct octeon_ethernet *VAR_16 = FUNC_15(VAR_15);
 void *VAR_17;
 void *VAR_18;


 cvmx_wqe_t *VAR_19 = FUNC_1(VAR_2);

 if (FUNC_17(!VAR_19)) {
  FUNC_16("%s: Failed to allocate a work queue entry\n",
       VAR_15->name);
  VAR_15->stats.tx_dropped++;
  FUNC_11(VAR_14);
  return 0;
 }


 VAR_17 = FUNC_1(VAR_0);
 if (FUNC_17(!VAR_17)) {
  FUNC_16("%s: Failed to allocate a packet buffer\n",
       VAR_15->name);
  FUNC_2(VAR_19, VAR_2, 1);
  VAR_15->stats.tx_dropped++;
  FUNC_11(VAR_14);
  return 0;
 }
 VAR_18 = VAR_17 + sizeof(u64);
 VAR_18 += ((VAR_3 + 7) & 0xfff8) + 6;







 FUNC_14(VAR_18, VAR_14->data, VAR_14->len);





 if (!FUNC_0(VAR_10))
  VAR_19->word0.pip.cn38xx.hw_chksum = VAR_14->csum;
 VAR_19->word1.len = VAR_14->len;
 FUNC_8(VAR_19, VAR_16->port);
 FUNC_9(VAR_19, VAR_16->port & 0x7);
 FUNC_7(VAR_19, VAR_13);
 VAR_19->word1.tag_type = VAR_4;
 VAR_19->word1.tag = VAR_13;

 VAR_19->word2.u64 = 0;
 VAR_19->word2.s.bufs = 1;
 VAR_19->packet_ptr.u64 = 0;
 VAR_19->packet_ptr.s.addr = FUNC_4(VAR_18);
 VAR_19->packet_ptr.s.pool = VAR_0;
 VAR_19->packet_ptr.s.size = VAR_1;
 VAR_19->packet_ptr.s.back = (VAR_18 - VAR_17) >> 7;

 if (VAR_14->protocol == FUNC_12(VAR_6)) {
  VAR_19->word2.s.ip_offset = 14;






  VAR_19->word2.s.tcp_or_udp =
      (FUNC_13(VAR_14)->protocol == VAR_8) ||
      (FUNC_13(VAR_14)->protocol == VAR_9);
  VAR_19->word2.s.is_frag = !((FUNC_13(VAR_14)->frag_off == 0) ||
       (FUNC_13(VAR_14)->frag_off ==
           1 << 14));




  VAR_19->word2.s.is_bcast = (VAR_14->pkt_type == VAR_11);
  VAR_19->word2.s.is_mcast = (VAR_14->pkt_type == VAR_12);
  FUNC_14(VAR_19->packet_data, VAR_14->data + 10,
         sizeof(VAR_19->packet_data));
 } else {






  VAR_19->word2.snoip.is_rarp = VAR_14->protocol == FUNC_12(VAR_7);
  VAR_19->word2.snoip.is_arp = VAR_14->protocol == FUNC_12(VAR_5);
  VAR_19->word2.snoip.is_bcast =
      (VAR_14->pkt_type == VAR_11);
  VAR_19->word2.snoip.is_mcast =
      (VAR_14->pkt_type == VAR_12);
  VAR_19->word2.snoip.not_IP = 1;






  FUNC_14(VAR_19->packet_data, VAR_14->data, sizeof(VAR_19->packet_data));
 }


 FUNC_3(VAR_19, VAR_19->word1.tag, VAR_19->word1.tag_type,
        FUNC_6(VAR_19), FUNC_5(VAR_19));
 VAR_15->stats.tx_packets++;
 VAR_15->stats.tx_bytes += VAR_14->len;
 FUNC_10(VAR_14);
 return 0;
}
