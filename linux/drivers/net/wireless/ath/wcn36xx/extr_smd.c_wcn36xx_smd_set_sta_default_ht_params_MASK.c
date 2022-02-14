
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_config_sta_params {int ht_capable; int tx_channel_width_set; int lsig_txop_protection; int max_ampdu_size; int max_ampdu_density; int sgi_20Mhz; int sgi_40mhz; int green_field_capable; int dsss_cck_mode_40mhz; scalar_t__ delayed_ba_support; scalar_t__ max_amsdu_size; } ;



__attribute__((used)) static void FUNC_0(
  struct wcn36xx_hal_config_sta_params *VAR_0)
{
 VAR_0->ht_capable = 1;
 VAR_0->tx_channel_width_set = 1;
 VAR_0->lsig_txop_protection = 1;
 VAR_0->max_ampdu_size = 3;
 VAR_0->max_ampdu_density = 5;
 VAR_0->max_amsdu_size = 0;
 VAR_0->sgi_20Mhz = 1;
 VAR_0->sgi_40mhz = 1;
 VAR_0->green_field_capable = 1;
 VAR_0->delayed_ba_support = 0;
 VAR_0->dsss_cck_mode_40mhz = 1;
}
