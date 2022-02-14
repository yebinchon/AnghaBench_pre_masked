
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; int len; int data; } ;
struct aq_ring_s {unsigned int sw_tail; struct aq_ring_buff_s* buff_ring; } ;
struct aq_ring_buff_s {unsigned int flags; unsigned int is_gso; int eop_index; unsigned int is_ipv6; unsigned int is_vlan; unsigned int len; unsigned int is_sop; unsigned int is_mapped; unsigned int is_ip_cso; unsigned int is_tcp_cso; unsigned int is_udp_cso; unsigned int is_eop; scalar_t__ pa; struct sk_buff* skb; int len_pkt; int vlan_tx_tag; int len_l4; int len_l3; int len_l2; int mss; } ;
struct TYPE_5__ {scalar_t__ is_vlan_tx_insert; } ;
struct aq_nic_s {TYPE_1__ aq_nic_cfg; } ;
typedef int skb_frag_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_8__ {int version; scalar_t__ protocol; } ;
struct TYPE_7__ {scalar_t__ nexthdr; } ;
struct TYPE_6__ {unsigned int nr_frags; int * frags; int gso_size; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct aq_nic_s*) ;
 unsigned int FUNC_1 (struct aq_ring_s*,unsigned int) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned int,int ) ;
 unsigned int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_5 (int ,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_4__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_3__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ,int *,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_11 (int *) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 unsigned int FUNC_13 (struct sk_buff*) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_19(struct aq_nic_s *VAR_9,
       struct sk_buff *VAR_10,
       struct aq_ring_s *VAR_11)
{
 unsigned int VAR_12 = 0U;
 unsigned int VAR_13 = FUNC_14(VAR_10)->nr_frags;
 unsigned int VAR_14 = 0U;
 unsigned int VAR_15 = VAR_11->sw_tail;
 struct aq_ring_buff_s *VAR_16 = ((void*)0);
 struct aq_ring_buff_s *VAR_17 = &VAR_11->buff_ring[VAR_15];
 bool VAR_18 = 0;

 VAR_17->flags = 0U;

 if (FUNC_18(FUNC_13(VAR_10))) {
  VAR_17->mss = FUNC_14(VAR_10)->gso_size;
  VAR_17->is_gso = 1U;
  VAR_17->len_pkt = VAR_10->len;
  VAR_17->len_l2 = VAR_3;
  VAR_17->len_l3 = FUNC_8(VAR_10);
  VAR_17->len_l4 = FUNC_17(VAR_10);
  VAR_17->eop_index = 0xffffU;
  VAR_17->is_ipv6 =
   (FUNC_7(VAR_10)->version == 6) ? 1U : 0U;
  VAR_18 = 1;
 }

 if (VAR_9->aq_nic_cfg.is_vlan_tx_insert && FUNC_16(VAR_10)) {
  VAR_17->vlan_tx_tag = FUNC_15(VAR_10);
  VAR_17->len_pkt = VAR_10->len;
  VAR_17->is_vlan = 1U;
  VAR_18 = 1;
 }

 if (VAR_18) {
  VAR_15 = FUNC_1(VAR_11, VAR_15);
  VAR_17 = &VAR_11->buff_ring[VAR_15];
  VAR_17->flags = 0U;
  ++VAR_12;
 }

 VAR_17->len = FUNC_12(VAR_10);
 VAR_17->pa = FUNC_2(FUNC_0(VAR_9),
         VAR_10->data,
         VAR_17->len,
         VAR_2);

 if (FUNC_18(FUNC_3(FUNC_0(VAR_9), VAR_17->pa)))
  goto exit;

 VAR_16 = VAR_17;
 VAR_17->len_pkt = VAR_10->len;
 VAR_17->is_sop = 1U;
 VAR_17->is_mapped = 1U;
 ++VAR_12;

 if (VAR_10->ip_summed == VAR_1) {
  VAR_17->is_ip_cso = (FUNC_6(VAR_4) == VAR_10->protocol) ?
   1U : 0U;

  if (FUNC_7(VAR_10)->version == 4) {
   VAR_17->is_tcp_cso =
    (FUNC_7(VAR_10)->protocol == VAR_5) ?
     1U : 0U;
   VAR_17->is_udp_cso =
    (FUNC_7(VAR_10)->protocol == VAR_6) ?
     1U : 0U;
  } else if (FUNC_7(VAR_10)->version == 6) {
   VAR_17->is_tcp_cso =
    (FUNC_9(VAR_10)->nexthdr == VAR_7) ?
     1U : 0U;
   VAR_17->is_udp_cso =
    (FUNC_9(VAR_10)->nexthdr == VAR_8) ?
     1U : 0U;
  }
 }

 for (; VAR_13--; ++VAR_14) {
  unsigned int VAR_19 = 0U;
  unsigned int VAR_20 = 0U;
  unsigned int VAR_21 = 0U;
  dma_addr_t VAR_22;
  skb_frag_t *VAR_23 = &FUNC_14(VAR_10)->frags[VAR_14];

  VAR_19 = FUNC_11(VAR_23);

  while (VAR_19) {
   if (VAR_19 > VAR_0)
    VAR_21 = VAR_0;
   else
    VAR_21 = VAR_19;

   VAR_22 = FUNC_10(FUNC_0(VAR_9),
         VAR_23,
         VAR_20,
         VAR_21,
         VAR_2);

   if (FUNC_18(FUNC_3(FUNC_0(VAR_9),
             VAR_22)))
    goto mapping_error;

   VAR_15 = FUNC_1(VAR_11, VAR_15);
   VAR_17 = &VAR_11->buff_ring[VAR_15];

   VAR_17->flags = 0U;
   VAR_17->len = VAR_21;
   VAR_17->pa = VAR_22;
   VAR_17->is_mapped = 1U;
   VAR_17->eop_index = 0xffffU;

   VAR_19 -= VAR_21;
   VAR_20 += VAR_21;

   ++VAR_12;
  }
 }

 VAR_16->eop_index = VAR_15;
 VAR_17->is_eop = 1U;
 VAR_17->skb = VAR_10;
 goto exit;

mapping_error:
 for (VAR_15 = VAR_11->sw_tail;
      VAR_12 > 0;
      --VAR_12, VAR_15 = FUNC_1(VAR_11, VAR_15)) {
  VAR_17 = &VAR_11->buff_ring[VAR_15];

  if (!VAR_17->is_gso && !VAR_17->is_vlan && VAR_17->pa) {
   if (FUNC_18(VAR_17->is_sop)) {
    FUNC_5(FUNC_0(VAR_9),
       VAR_17->pa,
       VAR_17->len,
       VAR_2);
   } else {
    FUNC_4(FUNC_0(VAR_9),
            VAR_17->pa,
            VAR_17->len,
            VAR_2);
   }
  }
 }

exit:
 return VAR_12;
}
