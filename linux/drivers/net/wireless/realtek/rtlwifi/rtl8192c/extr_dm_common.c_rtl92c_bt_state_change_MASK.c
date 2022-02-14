
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int bt_cur_state; int reg_bt_sco; int bt_service; int bt_ant_isolation; int ratio_tx; int ratio_pri; } ;
struct TYPE_3__ {scalar_t__ link_state; } ;
struct rtl_priv {TYPE_2__ btcoexist; TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;

__attribute__((used)) static bool FUNC_6(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_8);

 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u8 VAR_15;
 u8 VAR_16;

 if (VAR_9->mac80211.link_state < VAR_7)
  return 0;

 VAR_15 = FUNC_2(VAR_9, 0x4fd);
 VAR_13 = FUNC_3(VAR_9, 0x488) & VAR_2;
 VAR_14 = FUNC_3(VAR_9, 0x48c) & VAR_2;
 VAR_10 = FUNC_3(VAR_9, 0x490);

 if (VAR_13 == VAR_2 && VAR_14 == VAR_2 &&
     VAR_10 == 0xffffffff && VAR_15 == 0xff)
  return 0;

 VAR_15 &= FUNC_0(0, 1);
 if (VAR_15 != VAR_9->btcoexist.bt_cur_state) {
  VAR_9->btcoexist.bt_cur_state = VAR_15;

  if (VAR_9->btcoexist.reg_bt_sco == 3) {
   VAR_9->btcoexist.bt_service = VAR_1;

   VAR_15 = VAR_15 |
     ((VAR_9->btcoexist.bt_ant_isolation == 1) ?
     0 : FUNC_0(1, 1)) |
     FUNC_0(2, 1);
   FUNC_4(VAR_9, 0x4fd, VAR_15);
  }
  return 1;
 }

 VAR_11 = VAR_13 * 1000 / VAR_10;
 VAR_12 = VAR_14 * 1000 / VAR_10;
 VAR_9->btcoexist.ratio_tx = VAR_11;
 VAR_9->btcoexist.ratio_pri = VAR_12;

 if (VAR_15 && VAR_9->btcoexist.reg_bt_sco == 3) {

  if ((VAR_11 < 30) && (VAR_12 < 30))
   VAR_16 = VAR_1;
  else if ((VAR_12 > 110) && (VAR_12 < 250))
   VAR_16 = VAR_6;
  else if ((VAR_11 >= 200) && (VAR_12 >= 200))
   VAR_16 = VAR_0;
  else if ((VAR_11 >= 350) && (VAR_11 < 500))
   VAR_16 = VAR_3;
  else if (VAR_11 >= 500)
   VAR_16 = VAR_5;
  else
   VAR_16 = VAR_4;

  if (VAR_16 != VAR_9->btcoexist.bt_service) {
   VAR_9->btcoexist.bt_service = VAR_16;
   VAR_15 = VAR_15 |
      ((VAR_9->btcoexist.bt_ant_isolation == 1) ?
      0 : FUNC_0(1, 1)) |
      ((VAR_9->btcoexist.bt_service != VAR_1) ?
      0 : FUNC_0(2, 1));



   if (VAR_9->btcoexist.bt_service != VAR_1) {
    FUNC_5(VAR_9, 0x504, 0x0ccc);
    FUNC_4(VAR_9, 0x506, 0x54);
    FUNC_4(VAR_9, 0x507, 0x54);
   } else {
    FUNC_4(VAR_9, 0x506, 0x00);
    FUNC_4(VAR_9, 0x507, 0x00);
   }

   FUNC_4(VAR_9, 0x4fd, VAR_15);
   return 1;
  }
 }

 return 0;

}
