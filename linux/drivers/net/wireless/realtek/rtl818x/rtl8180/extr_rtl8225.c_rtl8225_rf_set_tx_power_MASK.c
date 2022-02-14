
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8180_priv {TYPE_2__* map; TYPE_1__* channels; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_4__ {int TX_GAIN_OFDM; int EEPROM_CMD; int CONFIG3; int ANAPARAM2; int TX_GAIN_CCK; } ;
struct TYPE_3__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8180_priv*,int *) ;
 int FUNC_3 (struct rtl8180_priv*,int *,int ) ;
 int FUNC_4 (struct rtl8180_priv*,int *,int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_5 (struct ieee80211_hw*,int,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int,int const) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_8, int VAR_9)
{
 struct rtl8180_priv *VAR_10 = VAR_8->priv;
 u8 VAR_11, VAR_12;
 const u8 *VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_11 = VAR_10->channels[VAR_9 - 1].hw_value & 0xFF;
 VAR_12 = VAR_10->channels[VAR_9 - 1].hw_value >> 8;

 VAR_11 = FUNC_0(VAR_11, (u8)35);
 VAR_12 = FUNC_0(VAR_12, (u8)35);

 FUNC_4(VAR_10, &VAR_10->map->TX_GAIN_CCK,
    VAR_4[VAR_11 / 6] >> 1);

 if (VAR_9 == 14)
  VAR_13 = &VAR_6[(VAR_11 % 6) * 8];
 else
  VAR_13 = &VAR_5[(VAR_11 % 6) * 8];

 for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
  FUNC_5(VAR_8, 0x44 + VAR_15, *VAR_13++);

 FUNC_1(1);



 FUNC_4(VAR_10, &VAR_10->map->EEPROM_CMD, VAR_1);
 VAR_14 = FUNC_2(VAR_10, &VAR_10->map->CONFIG3);
 FUNC_4(VAR_10, &VAR_10->map->CONFIG3, VAR_14 | VAR_0);
 FUNC_3(VAR_10, &VAR_10->map->ANAPARAM2, VAR_3);
 FUNC_4(VAR_10, &VAR_10->map->CONFIG3, VAR_14 & ~VAR_0);
 FUNC_4(VAR_10, &VAR_10->map->EEPROM_CMD, VAR_2);

 FUNC_4(VAR_10, &VAR_10->map->TX_GAIN_OFDM,
    VAR_4[VAR_12/6] >> 1);

 VAR_13 = &VAR_7[VAR_12 % 6];

 FUNC_6(VAR_8, 5, *VAR_13);
 FUNC_6(VAR_8, 7, *VAR_13);

 FUNC_1(1);
}
