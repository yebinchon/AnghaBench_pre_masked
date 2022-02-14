
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_sys_config {int accept_non_directed_frames; int disable_unicast_decryption; int disable_multicast_decryption; int pass_noise_stats_to_host; int silence_threshold; scalar_t__ bt_coexist_collision_thr; scalar_t__ enable_cts_to_self; scalar_t__ dot11g_auto_detection; scalar_t__ pass_crc_to_host; scalar_t__ antenna_diversity; scalar_t__ exclude_multicast_unencrypted; scalar_t__ exclude_unicast_unencrypted; scalar_t__ accept_all_data_frames; scalar_t__ answer_broadcast_ssid_probe; scalar_t__ bt_coexistence; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ipw_sys_config*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ipw_sys_config *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(struct ipw_sys_config));
 VAR_3->bt_coexistence = 0;
 VAR_3->answer_broadcast_ssid_probe = 0;
 VAR_3->accept_all_data_frames = 0;
 VAR_3->accept_non_directed_frames = 1;
 VAR_3->exclude_unicast_unencrypted = 0;
 VAR_3->disable_unicast_decryption = 1;
 VAR_3->exclude_multicast_unencrypted = 0;
 VAR_3->disable_multicast_decryption = 1;
 if (VAR_2 < VAR_1 || VAR_2 > VAR_0)
  VAR_2 = VAR_1;
 VAR_3->antenna_diversity = VAR_2;
 VAR_3->pass_crc_to_host = 0;
 VAR_3->dot11g_auto_detection = 0;
 VAR_3->enable_cts_to_self = 0;
 VAR_3->bt_coexist_collision_thr = 0;
 VAR_3->pass_noise_stats_to_host = 1;
 VAR_3->silence_threshold = 0x1e;
}
