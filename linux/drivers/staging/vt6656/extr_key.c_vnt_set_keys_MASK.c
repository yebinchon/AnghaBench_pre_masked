
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnt_private {int local_id; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;




 int FUNC_0 (struct vnt_private*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int *,struct ieee80211_key_conf*,int ,int ,int) ;

int FUNC_2(struct ieee80211_hw *VAR_12, struct ieee80211_sta *VAR_13,
   struct ieee80211_vif *VAR_14, struct ieee80211_key_conf *VAR_15)
{
 struct ieee80211_bss_conf *VAR_16 = &VAR_14->bss_conf;
 struct vnt_private *VAR_17 = VAR_12->priv;
 u8 *VAR_18 = ((void*)0);
 u8 VAR_19 = 0;
 int VAR_20 = 0, VAR_21;

 if (VAR_13)
  VAR_18 = &VAR_13->addr[0];

 switch (VAR_15->cipher) {
 case 0:
  for (VAR_21 = 0 ; VAR_21 < VAR_8; VAR_21++)
   FUNC_0(VAR_17, VAR_21);
  return VAR_20;

 case 128:
 case 129:
  for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++)
   FUNC_0(VAR_17, VAR_21);

  FUNC_1(VAR_12, VAR_18, VAR_15, VAR_9,
    VAR_6, 1);

  VAR_15->flags |= VAR_1;

  return VAR_20;
 case 130:
  VAR_15->flags |= VAR_2;
  VAR_15->flags |= VAR_1;

  VAR_19 = VAR_5;

  break;
 case 131:
  if (VAR_17->local_id <= VAR_7)
   return -VAR_0;

  VAR_19 = VAR_4;

  VAR_15->flags |= VAR_1;
 }

 if (VAR_15->flags & VAR_3) {
  FUNC_1(VAR_12, VAR_18, VAR_15, VAR_11,
    VAR_19, 1);
 } else {
  FUNC_1(VAR_12, VAR_18, VAR_15, VAR_9,
    VAR_19, 1);

  FUNC_1(VAR_12, (u8 *)VAR_16->bssid, VAR_15,
    VAR_10, VAR_19, 1);
 }

 return 0;
}
