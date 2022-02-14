
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {int bt_busy; int cstate; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int c2h_bt_info_req_sent; size_t bt_retry_cnt; size_t c2h_bt_info_original; int c2h_bt_inquiry_page; } ;


 size_t FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 TYPE_2__ VAR_5 ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_6,
      u8 *VAR_7, u8 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_6);
 u8 VAR_10;
 u8 VAR_11;

 VAR_5 = 0;
 VAR_5 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  if (VAR_11 == 0)
   VAR_5 = VAR_7[VAR_11];
  else if (VAR_11 == 1)
   VAR_5 = VAR_7[VAR_11];
  if (VAR_11 == VAR_8-1)
   FUNC_1(VAR_9, VAR_2, VAR_4,
     "0x%2x]", VAR_7[VAR_11]);
  else
   FUNC_1(VAR_9, VAR_2, VAR_4,
     "0x%2x, ", VAR_7[VAR_11]);

 }
 FUNC_1(VAR_9, VAR_2, VAR_3,
  "BT info bt_info (Data)= 0x%x\n",
   VAR_5);
 VAR_10 = VAR_5;

 if (VAR_10 & FUNC_0(2))
  VAR_5 = 1;
 else
  VAR_5 = 0;


 if (VAR_10 & VAR_0) {
  FUNC_1(VAR_9, VAR_2, VAR_3,
   "[BTC2H], BTInfo: bConnect=true\n");
  VAR_9->btcoexist.bt_busy = 1;
  VAR_9->btcoexist.cstate &= ~VAR_1;
 } else {
  FUNC_1(VAR_9, VAR_2, VAR_3,
   "[BTC2H], BTInfo: bConnect=false\n");
  VAR_9->btcoexist.bt_busy = 0;
  VAR_9->btcoexist.cstate |= VAR_1;
 }
}
