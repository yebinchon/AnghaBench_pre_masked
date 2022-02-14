
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ps_t {int rssi_val_min; scalar_t__ pre_rfstate; scalar_t__ cur_rfstate; } ;
struct rtl_priv {struct ps_t dm_pstable; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ieee80211_hw*,int,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int,int) ;

void FUNC_4(struct ieee80211_hw *VAR_7, u8 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_7);
 struct ps_t *VAR_10 = &VAR_9->dm_pstable;
 static u8 VAR_11;
 static u32 VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_11 == 0) {
  VAR_12 = (FUNC_1(VAR_7, VAR_1,
      VAR_0) & 0x1CC000) >> 14;

  VAR_13 = (FUNC_1(VAR_7, VAR_6,
      VAR_0) & FUNC_0(3)) >> 3;

  VAR_14 = (FUNC_1(VAR_7, VAR_2,
      VAR_0) & 0xFF000000) >> 24;

  VAR_15 = (FUNC_1(VAR_7, 0xa74, VAR_0) & 0xF000) >> 12;

  VAR_11 = 1;
 }

 if (!VAR_8) {
  if (VAR_10->rssi_val_min != 0) {
   if (VAR_10->pre_rfstate == VAR_4) {
    if (VAR_10->rssi_val_min >= 30)
     VAR_10->cur_rfstate = VAR_5;
    else
     VAR_10->cur_rfstate = VAR_4;
   } else {
    if (VAR_10->rssi_val_min <= 25)
     VAR_10->cur_rfstate = VAR_4;
    else
     VAR_10->cur_rfstate = VAR_5;
   }
  } else {
   VAR_10->cur_rfstate = VAR_3;
  }
 } else {
  VAR_10->cur_rfstate = VAR_4;
 }

 if (VAR_10->pre_rfstate != VAR_10->cur_rfstate) {
  if (VAR_10->cur_rfstate == VAR_5) {
   FUNC_3(VAR_7, VAR_1,
          FUNC_0(5), 0x1);
   FUNC_3(VAR_7, VAR_1,
          0x1C0000, 0x2);
   FUNC_3(VAR_7, VAR_6, FUNC_0(3), 0);
   FUNC_3(VAR_7, VAR_2,
          0xFF000000, 0x63);
   FUNC_3(VAR_7, VAR_1,
          0xC000, 0x2);
   FUNC_3(VAR_7, 0xa74, 0xF000, 0x3);
   FUNC_3(VAR_7, 0x818, FUNC_0(28), 0x0);
   FUNC_3(VAR_7, 0x818, FUNC_0(28), 0x1);
  } else {
   FUNC_3(VAR_7, VAR_1,
          0x1CC000, VAR_12);
   FUNC_3(VAR_7, VAR_6, FUNC_0(3),
          VAR_13);
   FUNC_3(VAR_7, VAR_2, 0xFF000000,
          VAR_14);
   FUNC_3(VAR_7, 0xa74, 0xF000, VAR_15);
   FUNC_3(VAR_7, 0x818, FUNC_0(28), 0x0);
   FUNC_3(VAR_7, VAR_1,
          FUNC_0(5), 0x0);
  }

  VAR_10->pre_rfstate = VAR_10->cur_rfstate;
 }
}
