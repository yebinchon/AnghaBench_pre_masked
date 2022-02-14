
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_config_sta_params_v1 {int p2p; int bssid_index; int sta_index; int supported_rates; int dsss_cck_mode_40mhz; int max_ampdu_duration; int delayed_ba_support; int mimo_ps; int green_field_capable; int max_sp_len; int uapsd; int action; int encrypt_type; int rmf; int sgi_20Mhz; int sgi_40mhz; int max_ampdu_density; int max_ampdu_size; int lsig_txop_protection; int rifs_mode; int tx_channel_width_set; int ht_capable; int wmm_enabled; int listen_interval; int short_preamble_supported; int type; int aid; int mac; int bssid; } ;
struct wcn36xx_hal_config_sta_params {int p2p; int bssid_index; int sta_index; int supported_rates; int dsss_cck_mode_40mhz; int max_ampdu_duration; int delayed_ba_support; int mimo_ps; int green_field_capable; int max_sp_len; int uapsd; int action; int encrypt_type; int rmf; int sgi_20Mhz; int sgi_40mhz; int max_ampdu_density; int max_ampdu_size; int lsig_txop_protection; int rifs_mode; int tx_channel_width_set; int ht_capable; int wmm_enabled; int listen_interval; int short_preamble_supported; int type; int aid; int * mac; int * bssid; } ;
struct wcn36xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct wcn36xx *VAR_1,
   const struct wcn36xx_hal_config_sta_params *VAR_2,
   struct wcn36xx_hal_config_sta_params_v1 *VAR_3)
{

 FUNC_0(&VAR_3->bssid, VAR_2->bssid, VAR_0);
 FUNC_0(&VAR_3->mac, VAR_2->mac, VAR_0);
 VAR_3->aid = VAR_2->aid;
 VAR_3->type = VAR_2->type;
 VAR_3->short_preamble_supported = VAR_2->short_preamble_supported;
 VAR_3->listen_interval = VAR_2->listen_interval;
 VAR_3->wmm_enabled = VAR_2->wmm_enabled;
 VAR_3->ht_capable = VAR_2->ht_capable;
 VAR_3->tx_channel_width_set = VAR_2->tx_channel_width_set;
 VAR_3->rifs_mode = VAR_2->rifs_mode;
 VAR_3->lsig_txop_protection = VAR_2->lsig_txop_protection;
 VAR_3->max_ampdu_size = VAR_2->max_ampdu_size;
 VAR_3->max_ampdu_density = VAR_2->max_ampdu_density;
 VAR_3->sgi_40mhz = VAR_2->sgi_40mhz;
 VAR_3->sgi_20Mhz = VAR_2->sgi_20Mhz;
 VAR_3->rmf = VAR_2->rmf;
 VAR_3->encrypt_type = VAR_2->encrypt_type;
 VAR_3->action = VAR_2->action;
 VAR_3->uapsd = VAR_2->uapsd;
 VAR_3->max_sp_len = VAR_2->max_sp_len;
 VAR_3->green_field_capable = VAR_2->green_field_capable;
 VAR_3->mimo_ps = VAR_2->mimo_ps;
 VAR_3->delayed_ba_support = VAR_2->delayed_ba_support;
 VAR_3->max_ampdu_duration = VAR_2->max_ampdu_duration;
 VAR_3->dsss_cck_mode_40mhz = VAR_2->dsss_cck_mode_40mhz;
 FUNC_0(&VAR_3->supported_rates, &VAR_2->supported_rates,
        sizeof(VAR_2->supported_rates));
 VAR_3->sta_index = VAR_2->sta_index;
 VAR_3->bssid_index = VAR_2->bssid_index;
 VAR_3->p2p = VAR_2->p2p;
}
