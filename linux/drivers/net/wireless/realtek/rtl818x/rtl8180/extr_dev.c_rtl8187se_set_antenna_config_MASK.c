
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int TX_ANTENNA; } ;


 int FUNC_0 (struct rtl8180_priv*,int *,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0, u8 VAR_1,
      bool VAR_2)
{
 struct rtl8180_priv *VAR_3 = VAR_0->priv;

 FUNC_1(VAR_0, 0x0C, 0x09);
 if (VAR_2) {
  if (VAR_1 == 1) {
   FUNC_0(VAR_3, &VAR_3->map->TX_ANTENNA, 0x00);
   FUNC_1(VAR_0, 0x11, 0xBB);
   FUNC_1(VAR_0, 0x01, 0xC7);
   FUNC_2(VAR_0, 0x0D, 0x54);
   FUNC_2(VAR_0, 0x18, 0xB2);
  } else {
   FUNC_0(VAR_3, &VAR_3->map->TX_ANTENNA, 0x03);
   FUNC_1(VAR_0, 0x11, 0x9B);
   FUNC_1(VAR_0, 0x01, 0xC7);
   FUNC_2(VAR_0, 0x0D, 0x5C);
   FUNC_2(VAR_0, 0x18, 0xB2);
  }
 } else {
  if (VAR_1 == 1) {
   FUNC_0(VAR_3, &VAR_3->map->TX_ANTENNA, 0x00);
   FUNC_1(VAR_0, 0x11, 0xBB);
   FUNC_1(VAR_0, 0x01, 0x47);
   FUNC_2(VAR_0, 0x0D, 0x54);
   FUNC_2(VAR_0, 0x18, 0x32);
  } else {
   FUNC_0(VAR_3, &VAR_3->map->TX_ANTENNA, 0x03);
   FUNC_1(VAR_0, 0x11, 0x9B);
   FUNC_1(VAR_0, 0x01, 0x47);
   FUNC_2(VAR_0, 0x0D, 0x5C);
   FUNC_2(VAR_0, 0x18, 0x32);
  }
 }

}
