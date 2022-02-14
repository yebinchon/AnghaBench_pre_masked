
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int sw_coexist_all_off; int bt_rfreg_origin_1e; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int,int,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_5,
         u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_2(VAR_5);

 if (VAR_1 == VAR_6) {

  FUNC_0(VAR_7, VAR_2, VAR_3,
    "Shrink RF Rx LPF corner!!\n");
  FUNC_1(VAR_5, VAR_4, 0x1e,
     0xfffff, 0xf0ff7);
  VAR_7->btcoexist.sw_coexist_all_off = 0;
 } else if (VAR_0 == VAR_6) {

  FUNC_0(VAR_7, VAR_2, VAR_3,
    "Resume RF Rx LPF corner!!\n");
  FUNC_1(VAR_5, VAR_4, 0x1e, 0xfffff,
     VAR_7->btcoexist.bt_rfreg_origin_1e);
 }
}
