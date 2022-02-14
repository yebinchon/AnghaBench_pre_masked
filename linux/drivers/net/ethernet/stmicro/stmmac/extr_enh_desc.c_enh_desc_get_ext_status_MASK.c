
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_extra_stats {int l3_l4_filter_no_match; int l4_filter_match; int l3_filter_match; int vlan_tag_priority_val; int av_tagged_pkt_rcvd; int av_pkt_rcvd; int timestamp_dropped; int ptp_ver; int ptp_frame_type; int ptp_rx_msg_pkt_reserved_type; int ptp_rx_msg_type_management; int ptp_rx_msg_type_announce; int ptp_rx_msg_type_pdelay_follow_up; int ptp_rx_msg_type_pdelay_resp; int ptp_rx_msg_type_pdelay_req; int ptp_rx_msg_type_delay_resp; int ptp_rx_msg_type_delay_req; int ptp_rx_msg_type_follow_up; int ptp_rx_msg_type_sync; int no_ptp_rx_msg_type_ext; int ipv6_pkt_rcvd; int ipv4_pkt_rcvd; int ip_csum_bypassed; int ip_payload_err; int ip_hdr_err; } ;
struct TYPE_2__ {int des0; } ;
struct dma_extended_desc {int des4; TYPE_1__ basic; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(void *VAR_27, struct stmmac_extra_stats *VAR_28,
        struct dma_extended_desc *VAR_29)
{
 unsigned int VAR_30 = FUNC_0(VAR_29->basic.des0);
 unsigned int VAR_31 = FUNC_0(VAR_29->des4);

 if (FUNC_1(VAR_30 & VAR_0)) {
  int VAR_32 = (VAR_31 & VAR_11) >> 8;

  if (VAR_31 & VAR_6)
   VAR_28->ip_hdr_err++;
  if (VAR_31 & VAR_7)
   VAR_28->ip_payload_err++;
  if (VAR_31 & VAR_5)
   VAR_28->ip_csum_bypassed++;
  if (VAR_31 & VAR_3)
   VAR_28->ipv4_pkt_rcvd++;
  if (VAR_31 & VAR_4)
   VAR_28->ipv6_pkt_rcvd++;

  if (VAR_32 == VAR_19)
   VAR_28->no_ptp_rx_msg_type_ext++;
  else if (VAR_32 == VAR_23)
   VAR_28->ptp_rx_msg_type_sync++;
  else if (VAR_32 == VAR_18)
   VAR_28->ptp_rx_msg_type_follow_up++;
  else if (VAR_32 == VAR_16)
   VAR_28->ptp_rx_msg_type_delay_req++;
  else if (VAR_32 == VAR_17)
   VAR_28->ptp_rx_msg_type_delay_resp++;
  else if (VAR_32 == VAR_21)
   VAR_28->ptp_rx_msg_type_pdelay_req++;
  else if (VAR_32 == VAR_22)
   VAR_28->ptp_rx_msg_type_pdelay_resp++;
  else if (VAR_32 == VAR_20)
   VAR_28->ptp_rx_msg_type_pdelay_follow_up++;
  else if (VAR_32 == VAR_24)
   VAR_28->ptp_rx_msg_type_announce++;
  else if (VAR_32 == VAR_25)
   VAR_28->ptp_rx_msg_type_management++;
  else if (VAR_32 == VAR_26)
   VAR_28->ptp_rx_msg_pkt_reserved_type++;

  if (VAR_31 & VAR_12)
   VAR_28->ptp_frame_type++;
  if (VAR_31 & VAR_13)
   VAR_28->ptp_ver++;
  if (VAR_31 & VAR_14)
   VAR_28->timestamp_dropped++;
  if (VAR_31 & VAR_1)
   VAR_28->av_pkt_rcvd++;
  if (VAR_31 & VAR_2)
   VAR_28->av_tagged_pkt_rcvd++;
  if ((VAR_31 & VAR_15) >> 18)
   VAR_28->vlan_tag_priority_val++;
  if (VAR_31 & VAR_8)
   VAR_28->l3_filter_match++;
  if (VAR_31 & VAR_10)
   VAR_28->l4_filter_match++;
  if ((VAR_31 & VAR_9) >> 26)
   VAR_28->l3_l4_filter_no_match++;
 }
}
