
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;
struct ieee80211_bss_conf {int basic_rates; scalar_t__ use_short_slot; int use_short_preamble; int ht_operation_mode; int use_cts_prot; int beacon_int; int bssid; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mt7601u_dev*,int ,int ) ;
 int FUNC_2 (struct mt7601u_dev*,int,int ) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int ) ;
 int FUNC_4 (struct mt7601u_dev*,int ) ;
 int FUNC_5 (struct mt7601u_dev*,struct ieee80211_bss_conf*) ;
 int FUNC_6 (struct mt7601u_dev*) ;
 int FUNC_7 (struct mt7601u_dev*,int ,int) ;
 int FUNC_8 (struct mt7601u_dev*,int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct ieee80211_hw *VAR_16, struct ieee80211_vif *VAR_17,
    struct ieee80211_bss_conf *VAR_18, u32 VAR_19)
{
 struct mt7601u_dev *VAR_20 = VAR_16->priv;

 FUNC_9(&VAR_20->mutex);

 if (VAR_19 & VAR_0)
  FUNC_5(VAR_20, VAR_18);

 if (VAR_19 & VAR_3) {
  FUNC_1(VAR_20, VAR_15, VAR_18->bssid);





  if (FUNC_0(VAR_18->bssid))
   FUNC_2(VAR_20, 0, 0);
 }

 if (VAR_19 & VAR_1) {
  FUNC_7(VAR_20, VAR_12, VAR_18->basic_rates);
  FUNC_7(VAR_20, VAR_10, 0x65432100);
  FUNC_7(VAR_20, VAR_11, 0xedcba980);
  FUNC_7(VAR_20, VAR_13, 0xedcba988);
  FUNC_7(VAR_20, VAR_14, 0x00002100);
 }

 if (VAR_19 & VAR_2)
  FUNC_2(VAR_20, 1, VAR_18->beacon_int);

 if (VAR_19 & VAR_7 || VAR_19 & VAR_4)
  FUNC_3(VAR_20, VAR_18->use_cts_prot,
        VAR_18->ht_operation_mode);

 if (VAR_19 & VAR_5)
  FUNC_4(VAR_20, VAR_18->use_short_preamble);

 if (VAR_19 & VAR_6) {
  int VAR_21 = VAR_18->use_short_slot ? 9 : 20;

  FUNC_8(VAR_20, VAR_8,
          VAR_9, VAR_21);
 }

 if (VAR_19 & VAR_0)
  FUNC_6(VAR_20);

 FUNC_10(&VAR_20->mutex);
}
