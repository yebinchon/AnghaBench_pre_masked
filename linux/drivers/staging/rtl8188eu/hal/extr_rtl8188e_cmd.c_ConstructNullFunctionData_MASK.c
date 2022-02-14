
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int InfrastructureMode; } ;
struct wlan_network {TYPE_1__ network; } ;
struct wlan_bssid_ex {scalar_t__* MacAddress; } ;
struct mlme_priv {struct wlan_network cur_network; } ;
struct mlme_ext_info {struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct ieee80211_qos_hdr {int qos_ctrl; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;
typedef scalar_t__ __le16 ;





 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct ieee80211_hdr*,int ) ;
 int FUNC_6 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ,scalar_t__*) ;
 scalar_t__* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_2, u8 *VAR_3,
 u32 *VAR_4,
 u8 *VAR_5,
 u8 VAR_6,
 u8 VAR_7,
 u8 VAR_8,
 u8 VAR_9)
{
 struct ieee80211_hdr *VAR_10;
 __le16 *VAR_11;
 u32 VAR_12;
 struct mlme_priv *VAR_13 = &VAR_2->mlmepriv;
 struct wlan_network *VAR_14 = &VAR_13->cur_network;
 struct mlme_ext_priv *VAR_15 = &VAR_2->mlmeextpriv;
 struct mlme_ext_info *VAR_16 = &VAR_15->mlmext_info;
 struct wlan_bssid_ex *VAR_17 = &VAR_16->network;

 VAR_10 = (struct ieee80211_hdr *)VAR_3;

 VAR_11 = &VAR_10->frame_control;
 *(VAR_11) = 0;
 if (VAR_9)
  FUNC_4(VAR_11);

 switch (VAR_14->network.InfrastructureMode) {
 case 128:
  FUNC_6(VAR_11);
  FUNC_7(VAR_10->addr1, VAR_17->MacAddress);
  FUNC_7(VAR_10->addr2, FUNC_8(&VAR_2->eeprompriv));
  FUNC_7(VAR_10->addr3, VAR_5);
  break;
 case 130:
  FUNC_1(VAR_11);
  FUNC_7(VAR_10->addr1, VAR_5);
  FUNC_7(VAR_10->addr2, VAR_17->MacAddress);
  FUNC_7(VAR_10->addr3, FUNC_8(&VAR_2->eeprompriv));
  break;
 case 129:
 default:
  FUNC_7(VAR_10->addr1, VAR_5);
  FUNC_7(VAR_10->addr2, FUNC_8(&VAR_2->eeprompriv));
  FUNC_7(VAR_10->addr3, VAR_17->MacAddress);
  break;
 }

 FUNC_5(VAR_10, 0);

 if (VAR_6) {
  struct ieee80211_qos_hdr *VAR_18;

  FUNC_2(VAR_3, VAR_1);

  VAR_18 = (struct ieee80211_qos_hdr *)VAR_3;
  FUNC_3(&VAR_18->qos_ctrl, VAR_7);
  FUNC_0(&VAR_18->qos_ctrl, VAR_8);

  VAR_12 = sizeof(struct ieee80211_qos_hdr);
 } else {
  FUNC_2(VAR_3, VAR_0);

  VAR_12 = sizeof(struct ieee80211_hdr_3addr);
 }

 *VAR_4 = VAR_12;
}
