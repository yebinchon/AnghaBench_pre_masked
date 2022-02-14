
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xpakStat {int alarm_transceiver_temp_high; int alarm_transceiver_temp_low; int alarm_laser_bias_current_high; int alarm_laser_bias_current_low; int alarm_laser_output_power_high; int alarm_laser_output_power_low; int warn_transceiver_temp_high; int warn_transceiver_temp_low; int warn_laser_bias_current_high; int warn_laser_bias_current_low; int warn_laser_output_power_high; int warn_laser_output_power_low; } ;
struct swStat {int single_ecc_errs; int double_ecc_errs; int parity_err_cnt; int serious_err_cnt; int soft_reset_cnt; int fifo_full_cnt; int* ring_full_cnt; int clubbed_frms_cnt; int sending_both; int outof_sequence_pkts; int flush_max_pkts; int num_aggregations; int sum_avg_pkts_aggregated; int mem_alloc_fail_cnt; int pci_map_fail_cnt; int watchdog_timer_cnt; int mem_allocated; int mem_freed; int link_up_cnt; int link_down_cnt; int link_up_time; int link_down_time; int tx_buf_abort_cnt; int tx_desc_abort_cnt; int tx_parity_err_cnt; int tx_link_loss_cnt; int tx_list_proc_err_cnt; int rx_parity_err_cnt; int rx_abort_cnt; int rx_parity_abort_cnt; int rx_rda_fail_cnt; int rx_unkn_prot_cnt; int rx_fcs_err_cnt; int rx_buf_size_err_cnt; int rx_rxd_corrupt_cnt; int rx_unkn_err_cnt; int tda_err_cnt; int pfc_err_cnt; int pcc_err_cnt; int tti_err_cnt; int tpa_err_cnt; int sm_err_cnt; int lso_err_cnt; int mac_tmac_err_cnt; int mac_rmac_err_cnt; int xgxs_txgxs_err_cnt; int xgxs_rxgxs_err_cnt; int rc_err_cnt; int prc_pcix_err_cnt; int rpa_err_cnt; int rda_err_cnt; int rti_err_cnt; int mc_err_cnt; } ;
struct stat_block {int link_fault_cnt; int rmac_ingm_full_discard; int rmac_rts_discard; int rmac_red_discard; int rmac_da_discard; int rmac_pf_discard; int rmac_fcs_discard; int rmac_len_discard; int rmac_vlan_frms; int rmac_gt_max_alt_frms; int rmac_jabber_alt_frms; int rmac_osized_alt_frms; int rmac_ttl_gt_max_frms; int rmac_ttl_8192_max_frms; int rmac_ttl_4096_8191_frms; int rmac_ttl_1519_4095_frms; int rxf_wr_cnt; int txf_rd_cnt; int rxd_wr_cnt; int rxd_rd_cnt; int txd_wr_cnt; int txd_rd_cnt; int txp_wr_cnt; int rd_rtry_wr_ack_cnt; int wr_disc_cnt; int wr_rtry_cnt; int new_wr_req_rtry_cnt; int new_wr_req_cnt; int wr_req_cnt; int wr_rtry_rd_ack_cnt; int rd_rtry_cnt; int new_rd_req_rtry_cnt; int new_rd_req_cnt; int rd_req_cnt; int rmac_err_tcp; int rmac_accepted_ip; int rmac_accepted_ip_oflow; int rmac_xgmii_ctrl_err_cnt; int rmac_xgmii_data_err_cnt; int rmac_pause_cnt; int rmac_pause_cnt_oflow; int rmac_full_q7; int rmac_full_q6; int rmac_full_q5; int rmac_full_q4; int rmac_full_q3; int rmac_full_q2; int rmac_full_q1; int rmac_full_q0; int rmac_frms_q7; int rmac_frms_q6; int rmac_frms_q5; int rmac_frms_q4; int rmac_frms_q3; int rmac_frms_q2; int rmac_frms_q1; int rmac_frms_q0; int rmac_xgmii_err_sym; int rmac_err_drp_udp; int rmac_err_drp_udp_oflow; int rmac_udp; int rmac_udp_oflow; int rmac_tcp; int rmac_icmp; int rmac_icmp_oflow; int rmac_drop_ip; int rmac_drop_ip_oflow; int rmac_hdr_err_ip; int rmac_ip_octets; int rmac_ip; int rmac_ip_oflow; int rmac_ttl_1024_1518_frms; int rmac_ttl_512_1023_frms; int rmac_ttl_256_511_frms; int rmac_ttl_128_255_frms; int rmac_ttl_65_127_frms; int rmac_ttl_64_frms; int rmac_jabber_frms; int rmac_jabber_frms_oflow; int rmac_frag_frms; int rmac_frag_frms_oflow; int rmac_osized_frms; int rmac_osized_frms_oflow; int rmac_usized_frms; int rmac_usized_frms_oflow; int rmac_ttl_frms; int rmac_ttl_less_fb_octets; int rmac_drop_events; int rmac_drop_events_oflow; int rmac_discarded_frms; int rmac_discarded_frms_oflow; int rmac_accepted_nucst_frms; int rmac_accepted_nucst_frms_oflow; int rmac_accepted_ucst_frms; int rmac_accepted_ucst_frms_oflow; int rmac_ttl_octets; int rmac_ttl_octets_oflow; int rmac_unsup_ctrl_frms; int rmac_pause_ctrl_frms; int rmac_long_frms; int rmac_out_rng_len_err_frms; int rmac_in_rng_len_err_frms; int rmac_vld_bcst_frms; int rmac_vld_bcst_frms_oflow; int rmac_vld_mcst_frms; int rmac_vld_mcst_frms_oflow; int rmac_drop_frms; int rmac_fcs_err_frms; int rmac_data_octets; int rmac_data_octets_oflow; int rmac_vld_frms; int rmac_vld_frms_oflow; int tmac_udp; int tmac_udp_oflow; int tmac_tcp; int tmac_rst_tcp; int tmac_rst_tcp_oflow; int tmac_icmp; int tmac_icmp_oflow; int tmac_drop_ip; int tmac_drop_ip_oflow; int tmac_vld_ip; int tmac_vld_ip_oflow; int tmac_vld_ip_octets; int tmac_ttl_less_fb_octets; int tmac_any_err_frms; int tmac_any_err_frms_oflow; int tmac_nucst_frms; int tmac_nucst_frms_oflow; int tmac_ucst_frms; int tmac_ucst_frms_oflow; int tmac_ttl_octets; int tmac_ttl_octets_oflow; int tmac_pause_ctrl_frms; int tmac_bcst_frms; int tmac_bcst_frms_oflow; int tmac_mcst_frms; int tmac_mcst_frms_oflow; int tmac_drop_frms; int tmac_data_octets; int tmac_data_octets_oflow; int tmac_frms; int tmac_frms_oflow; struct xpakStat xpak_stat; struct swStat sw_stat; } ;
struct TYPE_2__ {struct stat_block* stats_info; } ;
struct s2io_nic {scalar_t__ device_type; TYPE_1__ mac_control; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct s2io_nic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct s2io_nic*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
       struct ethtool_stats *VAR_3,
       u64 *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 struct s2io_nic *VAR_7 = FUNC_3(VAR_2);
 struct stat_block *VAR_8 = VAR_7->mac_control.stats_info;
 struct swStat *VAR_9 = &VAR_8->sw_stat;
 struct xpakStat *VAR_10 = &VAR_8->xpak_stat;

 FUNC_4(VAR_7);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_frms_oflow) << 32 |
  FUNC_1(VAR_8->tmac_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_data_octets_oflow) << 32 |
  FUNC_1(VAR_8->tmac_data_octets);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->tmac_drop_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_mcst_frms_oflow) << 32 |
  FUNC_1(VAR_8->tmac_mcst_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_bcst_frms_oflow) << 32 |
  FUNC_1(VAR_8->tmac_bcst_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->tmac_pause_ctrl_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_ttl_octets_oflow) << 32 |
  FUNC_1(VAR_8->tmac_ttl_octets);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_ucst_frms_oflow) << 32 |
  FUNC_1(VAR_8->tmac_ucst_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_nucst_frms_oflow) << 32 |
  FUNC_1(VAR_8->tmac_nucst_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_any_err_frms_oflow) << 32 |
  FUNC_1(VAR_8->tmac_any_err_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->tmac_ttl_less_fb_octets);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->tmac_vld_ip_octets);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_vld_ip_oflow) << 32 |
  FUNC_1(VAR_8->tmac_vld_ip);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_drop_ip_oflow) << 32 |
  FUNC_1(VAR_8->tmac_drop_ip);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_icmp_oflow) << 32 |
  FUNC_1(VAR_8->tmac_icmp);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->tmac_rst_tcp_oflow) << 32 |
  FUNC_1(VAR_8->tmac_rst_tcp);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->tmac_tcp);
 VAR_4[VAR_5++] = (u64)FUNC_1(VAR_8->tmac_udp_oflow) << 32 |
  FUNC_1(VAR_8->tmac_udp);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_vld_frms_oflow) << 32 |
  FUNC_1(VAR_8->rmac_vld_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_data_octets_oflow) << 32 |
  FUNC_1(VAR_8->rmac_data_octets);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_fcs_err_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_drop_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_vld_mcst_frms_oflow) << 32 |
  FUNC_1(VAR_8->rmac_vld_mcst_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_vld_bcst_frms_oflow) << 32 |
  FUNC_1(VAR_8->rmac_vld_bcst_frms);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_in_rng_len_err_frms);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_out_rng_len_err_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_long_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_pause_ctrl_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_unsup_ctrl_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_ttl_octets_oflow) << 32 |
  FUNC_1(VAR_8->rmac_ttl_octets);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_accepted_ucst_frms_oflow) << 32
  | FUNC_1(VAR_8->rmac_accepted_ucst_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_accepted_nucst_frms_oflow)
  << 32 | FUNC_1(VAR_8->rmac_accepted_nucst_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_discarded_frms_oflow) << 32 |
  FUNC_1(VAR_8->rmac_discarded_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_drop_events_oflow)
  << 32 | FUNC_1(VAR_8->rmac_drop_events);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_less_fb_octets);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_usized_frms_oflow) << 32 |
  FUNC_1(VAR_8->rmac_usized_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_osized_frms_oflow) << 32 |
  FUNC_1(VAR_8->rmac_osized_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_frag_frms_oflow) << 32 |
  FUNC_1(VAR_8->rmac_frag_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_jabber_frms_oflow) << 32 |
  FUNC_1(VAR_8->rmac_jabber_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_64_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_65_127_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_128_255_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_256_511_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_512_1023_frms);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_1024_1518_frms);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_ip_oflow) << 32 |
  FUNC_1(VAR_8->rmac_ip);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ip_octets);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_hdr_err_ip);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_drop_ip_oflow) << 32 |
  FUNC_1(VAR_8->rmac_drop_ip);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_icmp_oflow) << 32 |
  FUNC_1(VAR_8->rmac_icmp);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_tcp);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_udp_oflow) << 32 |
  FUNC_1(VAR_8->rmac_udp);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_err_drp_udp_oflow) << 32 |
  FUNC_1(VAR_8->rmac_err_drp_udp);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_xgmii_err_sym);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_frms_q0);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_frms_q1);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_frms_q2);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_frms_q3);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_frms_q4);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_frms_q5);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_frms_q6);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_frms_q7);
 VAR_4[VAR_5++] = FUNC_0(VAR_8->rmac_full_q0);
 VAR_4[VAR_5++] = FUNC_0(VAR_8->rmac_full_q1);
 VAR_4[VAR_5++] = FUNC_0(VAR_8->rmac_full_q2);
 VAR_4[VAR_5++] = FUNC_0(VAR_8->rmac_full_q3);
 VAR_4[VAR_5++] = FUNC_0(VAR_8->rmac_full_q4);
 VAR_4[VAR_5++] = FUNC_0(VAR_8->rmac_full_q5);
 VAR_4[VAR_5++] = FUNC_0(VAR_8->rmac_full_q6);
 VAR_4[VAR_5++] = FUNC_0(VAR_8->rmac_full_q7);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_pause_cnt_oflow) << 32 |
  FUNC_1(VAR_8->rmac_pause_cnt);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_xgmii_data_err_cnt);
 VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_xgmii_ctrl_err_cnt);
 VAR_4[VAR_5++] =
  (u64)FUNC_1(VAR_8->rmac_accepted_ip_oflow) << 32 |
  FUNC_1(VAR_8->rmac_accepted_ip);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_err_tcp);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rd_req_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->new_rd_req_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->new_rd_req_rtry_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rd_rtry_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->wr_rtry_rd_ack_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->wr_req_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->new_wr_req_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->new_wr_req_rtry_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->wr_rtry_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->wr_disc_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rd_rtry_wr_ack_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->txp_wr_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->txd_rd_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->txd_wr_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rxd_rd_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rxd_wr_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->txf_rd_cnt);
 VAR_4[VAR_5++] = FUNC_1(VAR_8->rxf_wr_cnt);


 if (VAR_7->device_type == VAR_1) {
  VAR_4[VAR_5++] =
   FUNC_2(VAR_8->rmac_ttl_1519_4095_frms);
  VAR_4[VAR_5++] =
   FUNC_2(VAR_8->rmac_ttl_4096_8191_frms);
  VAR_4[VAR_5++] =
   FUNC_2(VAR_8->rmac_ttl_8192_max_frms);
  VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_ttl_gt_max_frms);
  VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_osized_alt_frms);
  VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_jabber_alt_frms);
  VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_gt_max_alt_frms);
  VAR_4[VAR_5++] = FUNC_2(VAR_8->rmac_vlan_frms);
  VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_len_discard);
  VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_fcs_discard);
  VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_pf_discard);
  VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_da_discard);
  VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_red_discard);
  VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_rts_discard);
  VAR_4[VAR_5++] = FUNC_1(VAR_8->rmac_ingm_full_discard);
  VAR_4[VAR_5++] = FUNC_1(VAR_8->link_fault_cnt);
 }

 VAR_4[VAR_5++] = 0;
 VAR_4[VAR_5++] = VAR_9->single_ecc_errs;
 VAR_4[VAR_5++] = VAR_9->double_ecc_errs;
 VAR_4[VAR_5++] = VAR_9->parity_err_cnt;
 VAR_4[VAR_5++] = VAR_9->serious_err_cnt;
 VAR_4[VAR_5++] = VAR_9->soft_reset_cnt;
 VAR_4[VAR_5++] = VAR_9->fifo_full_cnt;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_4[VAR_5++] = VAR_9->ring_full_cnt[VAR_6];
 VAR_4[VAR_5++] = VAR_10->alarm_transceiver_temp_high;
 VAR_4[VAR_5++] = VAR_10->alarm_transceiver_temp_low;
 VAR_4[VAR_5++] = VAR_10->alarm_laser_bias_current_high;
 VAR_4[VAR_5++] = VAR_10->alarm_laser_bias_current_low;
 VAR_4[VAR_5++] = VAR_10->alarm_laser_output_power_high;
 VAR_4[VAR_5++] = VAR_10->alarm_laser_output_power_low;
 VAR_4[VAR_5++] = VAR_10->warn_transceiver_temp_high;
 VAR_4[VAR_5++] = VAR_10->warn_transceiver_temp_low;
 VAR_4[VAR_5++] = VAR_10->warn_laser_bias_current_high;
 VAR_4[VAR_5++] = VAR_10->warn_laser_bias_current_low;
 VAR_4[VAR_5++] = VAR_10->warn_laser_output_power_high;
 VAR_4[VAR_5++] = VAR_10->warn_laser_output_power_low;
 VAR_4[VAR_5++] = VAR_9->clubbed_frms_cnt;
 VAR_4[VAR_5++] = VAR_9->sending_both;
 VAR_4[VAR_5++] = VAR_9->outof_sequence_pkts;
 VAR_4[VAR_5++] = VAR_9->flush_max_pkts;
 if (VAR_9->num_aggregations) {
  u64 VAR_11 = VAR_9->sum_avg_pkts_aggregated;
  int VAR_12 = 0;




  while (VAR_11 >= VAR_9->num_aggregations) {
   VAR_11 -= VAR_9->num_aggregations;
   VAR_12++;
  }
  VAR_4[VAR_5++] = VAR_12;
 } else
  VAR_4[VAR_5++] = 0;
 VAR_4[VAR_5++] = VAR_9->mem_alloc_fail_cnt;
 VAR_4[VAR_5++] = VAR_9->pci_map_fail_cnt;
 VAR_4[VAR_5++] = VAR_9->watchdog_timer_cnt;
 VAR_4[VAR_5++] = VAR_9->mem_allocated;
 VAR_4[VAR_5++] = VAR_9->mem_freed;
 VAR_4[VAR_5++] = VAR_9->link_up_cnt;
 VAR_4[VAR_5++] = VAR_9->link_down_cnt;
 VAR_4[VAR_5++] = VAR_9->link_up_time;
 VAR_4[VAR_5++] = VAR_9->link_down_time;

 VAR_4[VAR_5++] = VAR_9->tx_buf_abort_cnt;
 VAR_4[VAR_5++] = VAR_9->tx_desc_abort_cnt;
 VAR_4[VAR_5++] = VAR_9->tx_parity_err_cnt;
 VAR_4[VAR_5++] = VAR_9->tx_link_loss_cnt;
 VAR_4[VAR_5++] = VAR_9->tx_list_proc_err_cnt;

 VAR_4[VAR_5++] = VAR_9->rx_parity_err_cnt;
 VAR_4[VAR_5++] = VAR_9->rx_abort_cnt;
 VAR_4[VAR_5++] = VAR_9->rx_parity_abort_cnt;
 VAR_4[VAR_5++] = VAR_9->rx_rda_fail_cnt;
 VAR_4[VAR_5++] = VAR_9->rx_unkn_prot_cnt;
 VAR_4[VAR_5++] = VAR_9->rx_fcs_err_cnt;
 VAR_4[VAR_5++] = VAR_9->rx_buf_size_err_cnt;
 VAR_4[VAR_5++] = VAR_9->rx_rxd_corrupt_cnt;
 VAR_4[VAR_5++] = VAR_9->rx_unkn_err_cnt;
 VAR_4[VAR_5++] = VAR_9->tda_err_cnt;
 VAR_4[VAR_5++] = VAR_9->pfc_err_cnt;
 VAR_4[VAR_5++] = VAR_9->pcc_err_cnt;
 VAR_4[VAR_5++] = VAR_9->tti_err_cnt;
 VAR_4[VAR_5++] = VAR_9->tpa_err_cnt;
 VAR_4[VAR_5++] = VAR_9->sm_err_cnt;
 VAR_4[VAR_5++] = VAR_9->lso_err_cnt;
 VAR_4[VAR_5++] = VAR_9->mac_tmac_err_cnt;
 VAR_4[VAR_5++] = VAR_9->mac_rmac_err_cnt;
 VAR_4[VAR_5++] = VAR_9->xgxs_txgxs_err_cnt;
 VAR_4[VAR_5++] = VAR_9->xgxs_rxgxs_err_cnt;
 VAR_4[VAR_5++] = VAR_9->rc_err_cnt;
 VAR_4[VAR_5++] = VAR_9->prc_pcix_err_cnt;
 VAR_4[VAR_5++] = VAR_9->rpa_err_cnt;
 VAR_4[VAR_5++] = VAR_9->rda_err_cnt;
 VAR_4[VAR_5++] = VAR_9->rti_err_cnt;
 VAR_4[VAR_5++] = VAR_9->mc_err_cnt;
}
