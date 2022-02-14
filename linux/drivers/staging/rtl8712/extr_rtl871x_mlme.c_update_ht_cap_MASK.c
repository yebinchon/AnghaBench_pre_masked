
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u8 ;
struct TYPE_2__ {int MacAddress; } ;
struct wlan_network {TYPE_1__ network; } ;
struct sta_info {struct recv_reorder_ctrl* recvreorder_ctrl; } ;
struct registry_priv {int ampdu_enable; } ;
struct recv_reorder_ctrl {int indicate_seq; int wend_b; } ;
struct ht_priv {int ampdu_enable; int rx_ampdu_maxlen; int ht_option; } ;
struct mlme_priv {struct wlan_network cur_network; struct ht_priv htpriv; } ;
struct ieee80211_ht_cap {int ampdu_params_info; } ;
struct _adapter {int stapriv; struct registry_priv registrypriv; struct mlme_priv mlmepriv; } ;
struct NDIS_802_11_FIXED_IEs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sta_info* FUNC_0 (struct _adapter*) ;
 int* FUNC_1 (int*,int ,scalar_t__*,scalar_t__) ;
 struct sta_info* FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct _adapter *VAR_3, u8 *VAR_4, uint VAR_5)
{
 u8 *VAR_6, VAR_7;
 int VAR_8;
 uint VAR_9;
 struct sta_info *VAR_10, *VAR_11;
 struct ieee80211_ht_cap *VAR_12;
 struct recv_reorder_ctrl *VAR_13;
 struct mlme_priv *VAR_14 = &VAR_3->mlmepriv;
 struct ht_priv *VAR_15 = &VAR_14->htpriv;
 struct registry_priv *VAR_16 = &VAR_3->registrypriv;
 struct wlan_network *VAR_17 = &(VAR_14->cur_network);

 if (!VAR_15->ht_option)
  return;

 if (!VAR_15->ampdu_enable &&
     (VAR_16->ampdu_enable == 1))
  VAR_15->ampdu_enable = 1;

 VAR_9 = 0;
 VAR_6 = FUNC_1(VAR_4 + sizeof(struct NDIS_802_11_FIXED_IEs),
    VAR_2,
    &VAR_9, VAR_5 -
    sizeof(struct NDIS_802_11_FIXED_IEs));
 if (VAR_6 && VAR_9 > 0) {
  VAR_12 = (struct ieee80211_ht_cap *)(VAR_6 + 2);
  VAR_7 = (VAR_12->ampdu_params_info &
    VAR_0);

  VAR_7 = 1 << (VAR_7 + 3);
  VAR_15->rx_ampdu_maxlen = VAR_7;
 }





 VAR_10 = FUNC_0(VAR_3);
 if (VAR_10) {
  for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
   VAR_13 = &VAR_10->recvreorder_ctrl[VAR_8];
   VAR_13->indicate_seq = 0xffff;
   VAR_13->wend_b = 0xffff;
  }
 }
 VAR_11 = FUNC_2(&VAR_3->stapriv,
     VAR_17->network.MacAddress);
 if (VAR_11) {
  for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
   VAR_13 = &VAR_11->recvreorder_ctrl[VAR_8];
   VAR_13->indicate_seq = 0xffff;
   VAR_13->wend_b = 0xffff;
  }
 }
 VAR_9 = 0;
 VAR_6 = FUNC_1(VAR_4 + sizeof(struct NDIS_802_11_FIXED_IEs),
     VAR_1, &VAR_9,
     VAR_5 - sizeof(struct NDIS_802_11_FIXED_IEs));
}
