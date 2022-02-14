
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcn36xx_hal_config_sta_params {void* dsss_cck_mode_40mhz; void* delayed_ba_support; void* green_field_capable; void* sgi_40mhz; void* sgi_20Mhz; void* max_amsdu_size; int max_ampdu_density; int max_ampdu_size; void* lsig_txop_protection; void* tx_channel_width_set; scalar_t__ ht_capable; } ;
struct TYPE_2__ {unsigned long cap; int ampdu_density; int ampdu_factor; scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_sta *VAR_8,
  struct wcn36xx_hal_config_sta_params *VAR_9)
{
 if (VAR_8->ht_cap.ht_supported) {
  unsigned long VAR_10 = VAR_8->ht_cap.cap;
  VAR_9->ht_capable = VAR_8->ht_cap.ht_supported;
  VAR_9->tx_channel_width_set = FUNC_0(VAR_10,
   VAR_7);
  VAR_9->lsig_txop_protection = FUNC_0(VAR_10,
   VAR_3);

  VAR_9->max_ampdu_size = VAR_8->ht_cap.ampdu_factor;
  VAR_9->max_ampdu_density = VAR_8->ht_cap.ampdu_density;
  VAR_9->max_amsdu_size = FUNC_0(VAR_10,
   VAR_4);
  VAR_9->sgi_20Mhz = FUNC_0(VAR_10,
   VAR_5);
  VAR_9->sgi_40mhz = FUNC_0(VAR_10,
   VAR_6);
  VAR_9->green_field_capable = FUNC_0(VAR_10,
   VAR_2);
  VAR_9->delayed_ba_support = FUNC_0(VAR_10,
   VAR_0);
  VAR_9->dsss_cck_mode_40mhz = FUNC_0(VAR_10,
   VAR_1);
 }
}
