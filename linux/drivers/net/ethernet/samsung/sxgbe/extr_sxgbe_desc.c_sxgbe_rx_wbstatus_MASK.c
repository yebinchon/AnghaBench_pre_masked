
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int err_l2_type; int layer34_pkt_type; scalar_t__ l4_filter_match; scalar_t__ l3_filter_match; scalar_t__ hash_filter_pass; scalar_t__ da_filter_fail; scalar_t__ sa_filter_fail; scalar_t__ vlan_filter_match; scalar_t__ err_summary; } ;
struct TYPE_4__ {TYPE_1__ rx_wb_des23; } ;
struct sxgbe_rx_norm_desc {TYPE_2__ rdes23; } ;
struct sxgbe_extra_stats {int l4_filter_match; int l3_filter_match; int hash_filter_pass; int da_filter_fail; int sa_filter_fail; int vlan_filter_match; int ip6_unknown_pkt; int ip6_icmp_pkt; int ip6_udp_pkt; int ip6_tcp_pkt; int ip4_unknown_pkt; int ip4_icmp_pkt; int ip4_udp_pkt; int ip4_tcp_pkt; int not_ip_pkt; int dvlan_ocvlan_icvlan_pkt; int dvlan_osvlan_icvlan_pkt; int dvlan_osvlan_isvlan_pkt; int cvlan_tag_pkt; int svlan_tag_pkt; int other_pkt; int untag_okt; int oam_pkt; int arp_pkt; int dcb_ctl_pkt; int mac_ctl_pkt; int len_pkt; int overflow_error; int ip_payload_err; int ip_hdr_err; int rx_gaint_pkt_err; int rx_crc_err; int rx_watchdog_err; int rx_code_gmii_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct sxgbe_rx_norm_desc *VAR_3,
        struct sxgbe_extra_stats *VAR_4, int *VAR_5)
{
 int VAR_6 = 0;

 *VAR_5 = VAR_1;
 if (VAR_3->rdes23.rx_wb_des23.err_summary) {
  switch (VAR_3->rdes23.rx_wb_des23.err_l2_type) {
  case 147:
   VAR_6 = -VAR_2;
   VAR_4->rx_code_gmii_err++;
   break;
  case 128:
   VAR_6 = -VAR_2;
   VAR_4->rx_watchdog_err++;
   break;
  case 155:
   VAR_6 = -VAR_2;
   VAR_4->rx_crc_err++;
   break;
  case 148:
   VAR_6 = -VAR_2;
   VAR_4->rx_gaint_pkt_err++;
   break;
  case 138:
   *VAR_5 = VAR_0;
   VAR_4->ip_hdr_err++;
   break;
  case 131:
   *VAR_5 = VAR_0;
   VAR_4->ip_payload_err++;
   break;
  case 132:
   VAR_6 = -VAR_2;
   VAR_4->overflow_error++;
   break;
  default:
   FUNC_0("Invalid Error type\n");
   break;
  }
 } else {
  switch (VAR_3->rdes23.rx_wb_des23.err_l2_type) {
  case 137:
   VAR_4->len_pkt++;
   break;
  case 136:
   VAR_4->mac_ctl_pkt++;
   break;
  case 153:
   VAR_4->dcb_ctl_pkt++;
   break;
  case 156:
   VAR_4->arp_pkt++;
   break;
  case 134:
   VAR_4->oam_pkt++;
   break;
  case 129:
   VAR_4->untag_okt++;
   break;
  case 133:
   VAR_4->other_pkt++;
   break;
  case 130:
   VAR_4->svlan_tag_pkt++;
   break;
  case 154:
   VAR_4->cvlan_tag_pkt++;
   break;
  case 152:
   VAR_4->dvlan_ocvlan_icvlan_pkt++;
   break;
  case 149:
   VAR_4->dvlan_osvlan_isvlan_pkt++;
   break;
  case 150:
   VAR_4->dvlan_osvlan_icvlan_pkt++;
   break;
  case 151:
   VAR_4->dvlan_ocvlan_icvlan_pkt++;
   break;
  default:
   FUNC_0("Invalid L2 Packet type\n");
   break;
  }
 }


 switch (VAR_3->rdes23.rx_wb_des23.layer34_pkt_type) {
 case 135:
  VAR_4->not_ip_pkt++;
  break;
 case 145:
  VAR_4->ip4_tcp_pkt++;
  break;
 case 144:
  VAR_4->ip4_udp_pkt++;
  break;
 case 146:
  VAR_4->ip4_icmp_pkt++;
  break;
 case 143:
  VAR_4->ip4_unknown_pkt++;
  break;
 case 141:
  VAR_4->ip6_tcp_pkt++;
  break;
 case 140:
  VAR_4->ip6_udp_pkt++;
  break;
 case 142:
  VAR_4->ip6_icmp_pkt++;
  break;
 case 139:
  VAR_4->ip6_unknown_pkt++;
  break;
 default:
  FUNC_0("Invalid L3/L4 Packet type\n");
  break;
 }


 if (VAR_3->rdes23.rx_wb_des23.vlan_filter_match)
  VAR_4->vlan_filter_match++;

 if (VAR_3->rdes23.rx_wb_des23.sa_filter_fail) {
  VAR_6 = -VAR_2;
  VAR_4->sa_filter_fail++;
 }
 if (VAR_3->rdes23.rx_wb_des23.da_filter_fail) {
  VAR_6 = -VAR_2;
  VAR_4->da_filter_fail++;
 }
 if (VAR_3->rdes23.rx_wb_des23.hash_filter_pass)
  VAR_4->hash_filter_pass++;

 if (VAR_3->rdes23.rx_wb_des23.l3_filter_match)
  VAR_4->l3_filter_match++;

 if (VAR_3->rdes23.rx_wb_des23.l4_filter_match)
  VAR_4->l4_filter_match++;

 return VAR_6;
}
