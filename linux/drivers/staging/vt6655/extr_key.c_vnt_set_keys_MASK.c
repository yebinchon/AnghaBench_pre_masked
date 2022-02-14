
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vnt_private {int dummy; } ;
struct ieee80211_bss_conf {scalar_t__ bssid; } ;
struct ieee80211_vif {struct ieee80211_bss_conf bss_conf; } ;
struct ieee80211_sta {int * addr; } ;
struct ieee80211_key_conf {int cipher; int flags; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vnt_private*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int FUNC_1 (struct ieee80211_hw*,int *,struct ieee80211_key_conf*,int ,int ,int) ;

int FUNC_2(struct ieee80211_hw *VAR_10, struct ieee80211_sta *VAR_11,
   struct ieee80211_vif *VAR_12, struct ieee80211_key_conf *VAR_13)
{
 struct ieee80211_bss_conf *VAR_14 = &VAR_12->bss_conf;
 struct vnt_private *VAR_15 = VAR_10->priv;
 u8 *VAR_16 = ((void*)0);
 u8 VAR_17 = 0;
 int VAR_18 = 0;
 u32 VAR_19;

 if (VAR_11)
  VAR_16 = &VAR_11->addr[0];

 switch (VAR_13->cipher) {
 case 0:
  for (VAR_19 = 0 ; VAR_19 < VAR_6; VAR_19++)
   FUNC_0(VAR_15, VAR_19);
  return VAR_18;

 case 128:
 case 129:
  for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++)
   FUNC_0(VAR_15, VAR_19);

  FUNC_1(VAR_10, VAR_16,
    VAR_13, VAR_7, VAR_5, 1);

  VAR_13->flags |= VAR_0;

  return VAR_18;
 case 130:
  VAR_13->flags |= VAR_1;
  VAR_13->flags |= VAR_0;

  VAR_17 = VAR_4;

  break;
 case 131:
  VAR_17 = VAR_3;

  VAR_13->flags |= VAR_0;
 }

 if (VAR_13->flags & VAR_2) {
  FUNC_1(VAR_10, VAR_16,
    VAR_13, VAR_9, VAR_17, 1);
 } else {
  FUNC_1(VAR_10, VAR_16,
    VAR_13, VAR_7, VAR_17, 1);

  FUNC_1(VAR_10, (u8 *)VAR_14->bssid,
    VAR_13, VAR_8, VAR_17, 1);
 }

 return 0;
}
