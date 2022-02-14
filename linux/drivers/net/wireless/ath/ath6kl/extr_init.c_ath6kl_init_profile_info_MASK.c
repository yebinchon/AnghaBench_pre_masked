
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {scalar_t__ bss_ch; int bssid; int req_bssid; int wep_key_list; scalar_t__ grp_crypto_len; void* grp_crypto; scalar_t__ prwise_crypto_len; void* prwise_crypto; int auth_mode; int dot11_auth_mode; int ssid; scalar_t__ ssid_len; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct ath6kl_vif *VAR_3)
{
 VAR_3->ssid_len = 0;
 FUNC_0(VAR_3->ssid, 0, sizeof(VAR_3->ssid));

 VAR_3->dot11_auth_mode = VAR_2;
 VAR_3->auth_mode = VAR_0;
 VAR_3->prwise_crypto = VAR_1;
 VAR_3->prwise_crypto_len = 0;
 VAR_3->grp_crypto = VAR_1;
 VAR_3->grp_crypto_len = 0;
 FUNC_0(VAR_3->wep_key_list, 0, sizeof(VAR_3->wep_key_list));
 FUNC_0(VAR_3->req_bssid, 0, sizeof(VAR_3->req_bssid));
 FUNC_0(VAR_3->bssid, 0, sizeof(VAR_3->bssid));
 VAR_3->bss_ch = 0;
}
