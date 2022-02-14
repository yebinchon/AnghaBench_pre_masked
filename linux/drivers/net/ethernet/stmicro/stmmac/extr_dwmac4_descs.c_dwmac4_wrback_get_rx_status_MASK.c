
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_extra_stats {int l3_l4_filter_no_match; int l4_filter_match; int l3_filter_match; int da_rx_filter_fail; int sa_rx_filter_fail; int timestamp_dropped; int ptp_ver; int ptp_frame_type; int ptp_rx_msg_pkt_reserved_type; int ptp_rx_msg_type_management; int ptp_rx_msg_type_announce; int ptp_rx_msg_type_pdelay_follow_up; int ptp_rx_msg_type_pdelay_resp; int ptp_rx_msg_type_pdelay_req; int ptp_rx_msg_type_delay_resp; int ptp_rx_msg_type_delay_req; int ptp_rx_msg_type_follow_up; int ptp_rx_msg_type_sync; int no_ptp_rx_msg_type_ext; int ipv6_pkt_rcvd; int ipv4_pkt_rcvd; int ip_csum_bypassed; int ip_hdr_err; int dribbling_bit; int rx_crc_errors; int rx_mii; int rx_watchdog; int rx_gmac_overflow; } ;
struct net_device_stats {int rx_crc_errors; int rx_length_errors; } ;
struct dma_desc {int des3; int des2; int des1; } ;


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
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_37, struct stmmac_extra_stats *VAR_38,
           struct dma_desc *VAR_39)
{
 struct net_device_stats *VAR_40 = (struct net_device_stats *)VAR_37;
 unsigned int VAR_41 = FUNC_0(VAR_39->des1);
 unsigned int VAR_42 = FUNC_0(VAR_39->des2);
 unsigned int VAR_43 = FUNC_0(VAR_39->des3);
 int VAR_44;
 int VAR_45 = VAR_36;

 if (FUNC_2(VAR_43 & VAR_20))
  return VAR_35;


 if (FUNC_1(!(VAR_43 & VAR_18)))
  return VAR_34;

 if (FUNC_2(VAR_43 & VAR_16)) {
  if (FUNC_2(VAR_43 & VAR_17))
   VAR_40->rx_length_errors++;
  if (FUNC_2(VAR_43 & VAR_19))
   VAR_38->rx_gmac_overflow++;

  if (FUNC_2(VAR_43 & VAR_22))
   VAR_38->rx_watchdog++;

  if (FUNC_2(VAR_43 & VAR_21))
   VAR_38->rx_mii++;

  if (FUNC_2(VAR_43 & VAR_14)) {
   VAR_38->rx_crc_errors++;
   VAR_40->rx_crc_errors++;
  }

  if (FUNC_2(VAR_43 & VAR_15))
   VAR_38->dribbling_bit++;

  VAR_45 = VAR_34;
 }

 VAR_44 = (VAR_41 & VAR_0) >> 8;

 if (VAR_41 & VAR_4)
  VAR_38->ip_hdr_err++;
 if (VAR_41 & VAR_3)
  VAR_38->ip_csum_bypassed++;
 if (VAR_41 & VAR_1)
  VAR_38->ipv4_pkt_rcvd++;
 if (VAR_41 & VAR_2)
  VAR_38->ipv6_pkt_rcvd++;

 if (VAR_44 == VAR_26)
  VAR_38->no_ptp_rx_msg_type_ext++;
 else if (VAR_44 == VAR_30)
  VAR_38->ptp_rx_msg_type_sync++;
 else if (VAR_44 == VAR_25)
  VAR_38->ptp_rx_msg_type_follow_up++;
 else if (VAR_44 == VAR_23)
  VAR_38->ptp_rx_msg_type_delay_req++;
 else if (VAR_44 == VAR_24)
  VAR_38->ptp_rx_msg_type_delay_resp++;
 else if (VAR_44 == VAR_28)
  VAR_38->ptp_rx_msg_type_pdelay_req++;
 else if (VAR_44 == VAR_29)
  VAR_38->ptp_rx_msg_type_pdelay_resp++;
 else if (VAR_44 == VAR_27)
  VAR_38->ptp_rx_msg_type_pdelay_follow_up++;
 else if (VAR_44 == VAR_31)
  VAR_38->ptp_rx_msg_type_announce++;
 else if (VAR_44 == VAR_32)
  VAR_38->ptp_rx_msg_type_management++;
 else if (VAR_44 == VAR_33)
  VAR_38->ptp_rx_msg_pkt_reserved_type++;

 if (VAR_41 & VAR_5)
  VAR_38->ptp_frame_type++;
 if (VAR_41 & VAR_6)
  VAR_38->ptp_ver++;
 if (VAR_41 & VAR_7)
  VAR_38->timestamp_dropped++;

 if (FUNC_2(VAR_42 & VAR_13)) {
  VAR_38->sa_rx_filter_fail++;
  VAR_45 = VAR_34;
 }
 if (FUNC_2(VAR_42 & VAR_8)) {
  VAR_38->da_rx_filter_fail++;
  VAR_45 = VAR_34;
 }

 if (VAR_42 & VAR_9)
  VAR_38->l3_filter_match++;
 if (VAR_42 & VAR_12)
  VAR_38->l4_filter_match++;
 if ((VAR_42 & VAR_10)
     >> VAR_11)
  VAR_38->l3_l4_filter_no_match++;

 return VAR_45;
}
