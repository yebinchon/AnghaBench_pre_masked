
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlan_bssid_ex {struct ht_priv* SupportedRates; } ;
struct sta_info {int bssratelen; int qos_option; int htpriv; int bw_mode; int * bssrateset; int wireless_mode; } ;
struct TYPE_4__ {int cap_info; } ;
struct ht_priv {int sgi_20m; int sgi_40m; int ampdu_enable; int agg_enable_bitmap; int candidate_tid_bitmap; int ch_offset; TYPE_2__ ht_cap; scalar_t__ ht_option; } ;
struct TYPE_3__ {int network; } ;
struct mlme_priv {struct ht_priv htpriv; TYPE_1__ cur_network; } ;
struct mlme_ext_priv {int cur_ch_offset; int cur_bwmode; int cur_wireless_mode; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct ht_priv*,int) ;
 int FUNC_2 (struct ht_priv*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_2, struct sta_info *VAR_3)
{
 struct mlme_priv *VAR_4 = &(VAR_2->mlmepriv);
 struct wlan_bssid_ex
  *VAR_5 = (struct wlan_bssid_ex *)&VAR_4->cur_network.network;
 struct mlme_ext_priv *VAR_6 = &(VAR_2->mlmeextpriv);
 struct ht_priv *VAR_7 = &VAR_4->htpriv;

 VAR_3->wireless_mode = VAR_6->cur_wireless_mode;

 VAR_3->bssratelen = FUNC_2(VAR_5->SupportedRates);
 FUNC_1(VAR_3->bssrateset, VAR_5->SupportedRates, VAR_3->bssratelen);


 if (VAR_7->ht_option) {




  if ((VAR_7->ht_cap.cap_info) & FUNC_0(VAR_0))
   VAR_7->sgi_20m = 1;


  if ((VAR_7->ht_cap.cap_info) & FUNC_0(VAR_1))
   VAR_7->sgi_40m = 1;

  VAR_3->qos_option = 1;
 } else {
  VAR_7->ampdu_enable = 0;

  VAR_7->sgi_20m = 0;
  VAR_7->sgi_40m = 0;
 }

 VAR_3->bw_mode = VAR_6->cur_bwmode;
 VAR_7->ch_offset = VAR_6->cur_ch_offset;

 VAR_7->agg_enable_bitmap = 0x0;
 VAR_7->candidate_tid_bitmap = 0x0;

 FUNC_1(&VAR_3->htpriv, &VAR_4->htpriv, sizeof(struct ht_priv));
}
