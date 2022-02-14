
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl8187_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int RFPinsOutput; int RFPinsSelect; int RFPinsEnable; int RFPinsInput; } ;


 int FUNC_0 (struct rtl8187_priv*,int *) ;
 int FUNC_1 (struct rtl8187_priv*,int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u16 FUNC_3(struct ieee80211_hw *VAR_0, u8 VAR_1)
{
 struct rtl8187_priv *VAR_2 = VAR_0->priv;
 u16 VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_3 = FUNC_0(VAR_2, &VAR_2->map->RFPinsOutput);
 VAR_4 = FUNC_0(VAR_2, &VAR_2->map->RFPinsEnable);
 VAR_5 = FUNC_0(VAR_2, &VAR_2->map->RFPinsSelect);

 VAR_3 &= ~0xF;

 FUNC_1(VAR_2, &VAR_2->map->RFPinsEnable, VAR_4 | 0x000F);
 FUNC_1(VAR_2, &VAR_2->map->RFPinsSelect, VAR_5 | 0x000F);

 FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput, VAR_3 | (1 << 2));
 FUNC_2(4);
 FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput, VAR_3);
 FUNC_2(5);

 for (VAR_7 = 4; VAR_7 >= 0; VAR_7--) {
  u16 VAR_8 = VAR_3 | ((VAR_1 >> VAR_7) & 1);

  if (!(VAR_7 & 1)) {
   FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput, VAR_8);
   FUNC_2(1);
  }

  FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
      VAR_8 | (1 << 1));
  FUNC_2(2);
  FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
      VAR_8 | (1 << 1));
  FUNC_2(2);

  if (VAR_7 & 1) {
   FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput, VAR_8);
   FUNC_2(1);
  }
 }

 FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
     VAR_3 | (1 << 3) | (1 << 1));
 FUNC_2(2);
 FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
     VAR_3 | (1 << 3));
 FUNC_2(2);
 FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
     VAR_3 | (1 << 3));
 FUNC_2(2);

 VAR_6 = 0;
 for (VAR_7 = 11; VAR_7 >= 0; VAR_7--) {
  FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
      VAR_3 | (1 << 3));
  FUNC_2(1);
  FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
      VAR_3 | (1 << 3) | (1 << 1));
  FUNC_2(2);
  FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
      VAR_3 | (1 << 3) | (1 << 1));
  FUNC_2(2);
  FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
      VAR_3 | (1 << 3) | (1 << 1));
  FUNC_2(2);

  if (FUNC_0(VAR_2, &VAR_2->map->RFPinsInput) & (1 << 1))
   VAR_6 |= 1 << VAR_7;

  FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
      VAR_3 | (1 << 3));
  FUNC_2(2);
 }

 FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput,
     VAR_3 | (1 << 3) | (1 << 2));
 FUNC_2(2);

 FUNC_1(VAR_2, &VAR_2->map->RFPinsEnable, VAR_4);
 FUNC_1(VAR_2, &VAR_2->map->RFPinsSelect, VAR_5);
 FUNC_1(VAR_2, &VAR_2->map->RFPinsOutput, 0x03A0);

 return VAR_6;
}
