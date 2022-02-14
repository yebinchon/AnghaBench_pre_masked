
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {TYPE_2__* map; TYPE_1__* channels; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_4__ {int TX_GAIN_OFDM; int TX_GAIN_CCK; } ;
struct TYPE_3__ {int hw_value; } ;


 int * VAR_0 ;
 int FUNC_0 (struct rtl8180_priv*,int *,int ) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1, int VAR_2)
{
 struct rtl8180_priv *VAR_3 = VAR_1->priv;
 u8 VAR_4, VAR_5;

 VAR_4 = VAR_3->channels[VAR_2 - 1].hw_value & 0xFF;
 if (VAR_4 > 35)
  VAR_4 = 35;
 FUNC_0(VAR_3, &VAR_3->map->TX_GAIN_CCK,
    VAR_0[VAR_4]);

 FUNC_2(1000, 5000);
 VAR_5 = VAR_3->channels[VAR_2 - 1].hw_value >> 8;
 if (VAR_5 > 35)
  VAR_5 = 35;

 FUNC_0(VAR_3, &VAR_3->map->TX_GAIN_OFDM,
    VAR_0[VAR_5]);
 if (VAR_5 < 12) {
  FUNC_1(VAR_1, 7, 0x5C);
  FUNC_1(VAR_1, 9, 0x5C);
 }
 if (VAR_5 < 18) {
  FUNC_1(VAR_1, 7, 0x54);
  FUNC_1(VAR_1, 9, 0x54);
 } else {
  FUNC_1(VAR_1, 7, 0x50);
  FUNC_1(VAR_1, 9, 0x50);
 }

 FUNC_2(1000, 5000);
}
