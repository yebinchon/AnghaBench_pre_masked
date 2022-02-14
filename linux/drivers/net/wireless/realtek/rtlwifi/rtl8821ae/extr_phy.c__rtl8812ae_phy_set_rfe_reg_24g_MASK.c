
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bt_coexistence; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct rtl_hal {int rfe_type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rtl_hal* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_6);
 struct rtl_hal *VAR_8 = FUNC_0(FUNC_1(VAR_6));
 u8 VAR_9;

 switch (VAR_8->rfe_type) {
 case 3:
  FUNC_3(VAR_6, VAR_3, VAR_0, 0x54337770);
  FUNC_3(VAR_6, VAR_5, VAR_0, 0x54337770);
  FUNC_3(VAR_6, VAR_2, VAR_1, 0x010);
  FUNC_3(VAR_6, VAR_4, VAR_1, 0x010);
  FUNC_3(VAR_6, 0x900, 0x00000303, 0x1);
  break;
 case 4:
  FUNC_3(VAR_6, VAR_3, VAR_0, 0x77777777);
  FUNC_3(VAR_6, VAR_5, VAR_0, 0x77777777);
  FUNC_3(VAR_6, VAR_2, VAR_1, 0x001);
  FUNC_3(VAR_6, VAR_4, VAR_1, 0x001);
  break;
 case 5:
  FUNC_4(VAR_7, VAR_3 + 2, 0x77);
  FUNC_3(VAR_6, VAR_5, VAR_0, 0x77777777);
  VAR_9 = FUNC_2(VAR_7, VAR_2 + 3);
  FUNC_4(VAR_7, VAR_2 + 3, VAR_9 & ~0x1);
  FUNC_3(VAR_6, VAR_4, VAR_1, 0x000);
  break;
 case 1:
  if (VAR_7->btcoexist.bt_coexistence) {
   FUNC_3(VAR_6, VAR_3, 0xffffff, 0x777777);
   FUNC_3(VAR_6, VAR_5, VAR_0,
          0x77777777);
   FUNC_3(VAR_6, VAR_2, 0x33f00000, 0x000);
   FUNC_3(VAR_6, VAR_4, VAR_1, 0x000);
   break;
  }

 case 0:
 case 2:
 default:
  FUNC_3(VAR_6, VAR_3, VAR_0, 0x77777777);
  FUNC_3(VAR_6, VAR_5, VAR_0, 0x77777777);
  FUNC_3(VAR_6, VAR_2, VAR_1, 0x000);
  FUNC_3(VAR_6, VAR_4, VAR_1, 0x000);
  break;
 }
}
