
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int InfrastructureMode; } ;
struct wlan_network {TYPE_1__ network; } ;
struct mlme_priv {struct wlan_network cur_network; } ;
struct mlme_ext_info {int network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct ieee80211_qos_hdr {int qos_ctrl; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;



 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct ieee80211_hdr*,int ) ;
 int FUNC_6 (scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__*,int ) ;
 scalar_t__* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
 struct adapter *VAR_3,
 u8 *VAR_4,
 u32 *VAR_5,
 u8 *VAR_6,
 u8 VAR_7,
 u8 VAR_8,
 u8 VAR_9,
 u8 VAR_10
)
{
 struct ieee80211_hdr *VAR_11;
 __le16 *VAR_12;
 u32 VAR_13;
 struct mlme_priv *VAR_14 = &VAR_3->mlmepriv;
 struct wlan_network *VAR_15 = &VAR_14->cur_network;
 struct mlme_ext_priv *VAR_16 = &(VAR_3->mlmeextpriv);
 struct mlme_ext_info *VAR_17 = &(VAR_16->mlmext_info);




 VAR_11 = (struct ieee80211_hdr *)VAR_4;

 VAR_12 = &VAR_11->frame_control;
 *(VAR_12) = 0;
 if (VAR_10)
  FUNC_4(VAR_12);

 switch (VAR_15->network.InfrastructureMode) {
 case 128:
  FUNC_6(VAR_12);
  FUNC_8(VAR_11->addr1, FUNC_7(&(VAR_17->network)), VAR_0);
  FUNC_8(VAR_11->addr2, FUNC_9(&(VAR_3->eeprompriv)), VAR_0);
  FUNC_8(VAR_11->addr3, VAR_6, VAR_0);
  break;
 case 130:
  FUNC_1(VAR_12);
  FUNC_8(VAR_11->addr1, VAR_6, VAR_0);
  FUNC_8(VAR_11->addr2, FUNC_7(&(VAR_17->network)), VAR_0);
  FUNC_8(VAR_11->addr3, FUNC_9(&(VAR_3->eeprompriv)), VAR_0);
  break;
 case 129:
 default:
  FUNC_8(VAR_11->addr1, VAR_6, VAR_0);
  FUNC_8(VAR_11->addr2, FUNC_9(&(VAR_3->eeprompriv)), VAR_0);
  FUNC_8(VAR_11->addr3, FUNC_7(&(VAR_17->network)), VAR_0);
  break;
 }

 FUNC_5(VAR_11, 0);

 if (VAR_7) {
  struct ieee80211_qos_hdr *VAR_18;

  FUNC_2(VAR_4, VAR_2);

  VAR_18 = (struct ieee80211_qos_hdr *)VAR_4;
  FUNC_3(&VAR_18->qos_ctrl, VAR_8);
  FUNC_0(&VAR_18->qos_ctrl, VAR_9);

  VAR_13 = sizeof(struct ieee80211_qos_hdr);
 } else {
  FUNC_2(VAR_4, VAR_1);

  VAR_13 = sizeof(struct ieee80211_hdr_3addr);
 }

 *VAR_5 = VAR_13;
}
