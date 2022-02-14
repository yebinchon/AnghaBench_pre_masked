
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int cstate_h; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_4(struct ieee80211_hw *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_3(VAR_13);
 u32 VAR_15 = 0;
 u8 VAR_16 = 0;

 VAR_15 = FUNC_1(VAR_13)
    + FUNC_2(VAR_13);
 FUNC_0(VAR_14, VAR_11, VAR_12,
   "[BTCoex], BT TxRx Counters = %d\n", VAR_15);

 VAR_14->btcoexist.cstate_h &= ~
   (VAR_0 | VAR_1|
    VAR_2);

 if (VAR_15 >= VAR_10) {
  FUNC_0(VAR_14, VAR_11, VAR_12,
    "[BTCoex], BT TxRx Counters at level 3\n");
  VAR_16 = VAR_7;
  VAR_14->btcoexist.cstate_h |=
   VAR_3;
 } else if (VAR_15 >= VAR_9) {
  FUNC_0(VAR_14, VAR_11, VAR_12,
    "[BTCoex], BT TxRx Counters at level 2\n");
  VAR_16 = VAR_6;
  VAR_14->btcoexist.cstate_h |=
   VAR_2;
 } else if (VAR_15 >= VAR_8) {
  FUNC_0(VAR_14, VAR_11, VAR_12,
    "[BTCoex], BT TxRx Counters at level 1\n");
  VAR_16 = VAR_5;
  VAR_14->btcoexist.cstate_h |=
   VAR_1;
 } else {
  FUNC_0(VAR_14, VAR_11, VAR_12,
    "[BTCoex], BT TxRx Counters at level 0\n");
  VAR_16 = VAR_4;
  VAR_14->btcoexist.cstate_h |=
   VAR_0;
 }
 return VAR_16;
}
