
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int sta_id; } ;
struct iwl_mvm_vif {TYPE_1__ mcast_sta; } ;
struct iwl_mvm_sta {int sta_id; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int mfp; } ;
struct TYPE_4__ {int iv32; } ;
struct ieee80211_key_seq {TYPE_2__ tkip; } ;
struct ieee80211_key_conf {int flags; int cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_2 ;






 int FUNC_1 (struct ieee80211_key_conf*,int ,struct ieee80211_key_seq*) ;
 int FUNC_2 (struct ieee80211_key_conf*,int const*,int ,int *) ;
 int * FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_4 (struct iwl_mvm*,int ,struct ieee80211_key_conf*,int,int ,int *,int ,int ,int) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_6 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_3,
     struct ieee80211_vif *VAR_4,
     struct ieee80211_sta *VAR_5,
     struct ieee80211_key_conf *VAR_6,
     u8 VAR_7,
     bool VAR_8)
{
 int VAR_9;
 const u8 *VAR_10;
 struct ieee80211_key_seq VAR_11;
 u16 VAR_12[5];
 u32 VAR_13;
 bool VAR_14 = 0;

 if (VAR_5) {
  struct iwl_mvm_sta *VAR_15 = FUNC_5(VAR_5);

  VAR_13 = VAR_15->sta_id;
  VAR_14 = VAR_5->mfp;
 } else if (VAR_4->type == VAR_2 &&
     !(VAR_6->flags & VAR_1)) {
  struct iwl_mvm_vif *VAR_16 = FUNC_6(VAR_4);

  VAR_13 = VAR_16->mcast_sta.sta_id;
 } else {
  FUNC_0(VAR_3, "Failed to find station id\n");
  return -VAR_0;
 }

 switch (VAR_6->cipher) {
 case 130:
  VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_5);

  FUNC_1(VAR_6, 0, &VAR_11);
  FUNC_2(VAR_6, VAR_10, VAR_11.tkip.iv32, VAR_12);
  VAR_9 = FUNC_4(VAR_3, VAR_13, VAR_6, VAR_8,
        VAR_11.tkip.iv32, VAR_12, 0, VAR_7,
        VAR_14);
  break;
 case 133:
 case 128:
 case 129:
 case 132:
 case 131:
  VAR_9 = FUNC_4(VAR_3, VAR_13, VAR_6, VAR_8,
        0, ((void*)0), 0, VAR_7, VAR_14);
  break;
 default:
  VAR_9 = FUNC_4(VAR_3, VAR_13, VAR_6, VAR_8,
        0, ((void*)0), 0, VAR_7, VAR_14);
 }

 return VAR_9;
}
