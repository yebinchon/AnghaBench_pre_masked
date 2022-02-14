
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ bt_coexist_type; int bt_ant_isolation; scalar_t__ bt_service; scalar_t__ bt_coexistence; } ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {TYPE_1__ btcoexist; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_5(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_8);
 struct rtl_phy *VAR_10 = &(VAR_9->phy);

 u8 VAR_11;

 if (VAR_9->btcoexist.bt_coexistence &&
     ((VAR_9->btcoexist.bt_coexist_type == VAR_0) ||
       VAR_9->btcoexist.bt_coexist_type == VAR_1)) {

  if (VAR_9->btcoexist.bt_ant_isolation)
   FUNC_3(VAR_9, VAR_4, 0xa0);

  VAR_11 = FUNC_2(VAR_9, 0x4fd) &
    FUNC_0(0, 1);
  VAR_11 = VAR_11 |
    ((VAR_9->btcoexist.bt_ant_isolation == 1) ?
    0 : FUNC_0(1, 1)) |
    ((VAR_9->btcoexist.bt_service == VAR_2) ?
    0 : FUNC_0(2, 1));
  FUNC_3(VAR_9, 0x4fd, VAR_11);

  FUNC_4(VAR_9, VAR_3+4, 0xaaaa9aaa);
  FUNC_4(VAR_9, VAR_3+8, 0xffbd0040);
  FUNC_4(VAR_9, VAR_3+0xc, 0x40000010);


  if (VAR_10->rf_type == VAR_5) {
   VAR_11 = FUNC_2(VAR_9, VAR_6);
   VAR_11 &= ~(FUNC_0(1, 1));
   FUNC_3(VAR_9, VAR_6, VAR_11);

   VAR_11 = FUNC_2(VAR_9, VAR_7);
   VAR_11 &= ~(FUNC_0(1, 1));
   FUNC_3(VAR_9, VAR_7, VAR_11);
  }
 }
}
