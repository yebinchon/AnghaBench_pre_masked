
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int btcoexist; int ant_num; void* bt_type; } ;
struct TYPE_4__ {TYPE_1__ btc_info; } ;
struct rtl_priv {TYPE_2__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_4,
           bool VAR_5, u8 *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_4);
 u8 VAR_8;
 u32 VAR_9;

 if (!VAR_5) {
  VAR_9 = FUNC_2(VAR_7, VAR_3);
  if (VAR_9 & FUNC_0(18))
   VAR_7->btcoexist.btc_info.btcoexist = 1;
  else
   VAR_7->btcoexist.btc_info.btcoexist = 0;
  VAR_7->btcoexist.btc_info.bt_type = VAR_1;

  VAR_8 = VAR_6[VAR_2];
  VAR_7->btcoexist.btc_info.ant_num = (VAR_8 & 0x1);
 } else {
  VAR_7->btcoexist.btc_info.btcoexist = 0;
  VAR_7->btcoexist.btc_info.bt_type = VAR_1;
  VAR_7->btcoexist.btc_info.ant_num = VAR_0;
 }

}
