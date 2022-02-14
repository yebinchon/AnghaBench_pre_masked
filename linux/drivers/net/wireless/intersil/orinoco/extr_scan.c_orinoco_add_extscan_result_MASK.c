
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct orinoco_private {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
struct agere_ext_scan_info {int* data; int bssid; int level; int beacon_interval; int capabilities; int timestamp; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int* FUNC_1 (int ,int*,size_t) ;
 struct cfg80211_bss* FUNC_2 (struct wiphy*,struct ieee80211_channel*,int ,int ,int ,int ,int ,int const*,size_t,int ,int ) ;
 int FUNC_3 (struct wiphy*,struct cfg80211_bss*) ;
 int FUNC_4 (int,int ) ;
 struct ieee80211_channel* FUNC_5 (struct wiphy*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct wiphy* FUNC_8 (struct orinoco_private*) ;

void FUNC_9(struct orinoco_private *VAR_4,
    struct agere_ext_scan_info *VAR_5,
    size_t VAR_6)
{
 struct wiphy *VAR_7 = FUNC_8(VAR_4);
 struct ieee80211_channel *VAR_8;
 struct cfg80211_bss *VAR_9;
 const u8 *VAR_10;
 u64 VAR_11;
 s32 VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 size_t VAR_15;
 int VAR_16, VAR_17;

 VAR_15 = VAR_6 - sizeof(*VAR_5);
 VAR_10 = FUNC_1(VAR_3, VAR_5->data, VAR_15);
 VAR_16 = VAR_10 ? VAR_10[2] : 0;
 VAR_17 = FUNC_4(VAR_16, VAR_2);
 VAR_8 = FUNC_5(VAR_7, VAR_17);

 VAR_11 = FUNC_7(VAR_5->timestamp);
 VAR_13 = FUNC_6(VAR_5->capabilities);
 VAR_14 = FUNC_6(VAR_5->beacon_interval);
 VAR_10 = VAR_5->data;
 VAR_12 = FUNC_0(VAR_5->level);

 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_0,
       VAR_5->bssid, VAR_11, VAR_13,
       VAR_14, VAR_10, VAR_15, VAR_12,
       VAR_1);
 FUNC_3(VAR_7, VAR_9);
}
