
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_uap_bss_param {int bcast_ssid_ctl; int radio_ctl; int dtim_period; int beacon_period; int auth_mode; int rts_threshold; int frag_threshold; int retry_limit; int qos_info; } ;



void FUNC_0(struct mwifiex_uap_bss_param *VAR_0)
{
 VAR_0->bcast_ssid_ctl = 0x7F;
 VAR_0->radio_ctl = 0x7F;
 VAR_0->dtim_period = 0x7F;
 VAR_0->beacon_period = 0x7FFF;
 VAR_0->auth_mode = 0x7F;
 VAR_0->rts_threshold = 0x7FFF;
 VAR_0->frag_threshold = 0x7FFF;
 VAR_0->retry_limit = 0x7F;
 VAR_0->qos_info = 0xFF;
}
