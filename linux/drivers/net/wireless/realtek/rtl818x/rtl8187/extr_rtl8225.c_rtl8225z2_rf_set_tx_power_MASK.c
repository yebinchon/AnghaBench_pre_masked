
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8187_priv {int txpwr_base; TYPE_2__* map; TYPE_1__* channels; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_4__ {int TX_GAIN_OFDM; int EEPROM_CMD; int CONFIG3; int ANAPARAM2; int TX_GAIN_CCK; } ;
struct TYPE_3__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8187_priv*,int *) ;
 int FUNC_3 (struct rtl8187_priv*,int *,int ) ;
 int FUNC_4 (struct rtl8187_priv*,int *,int) ;
 int FUNC_5 (struct ieee80211_hw*,int,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int,int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_7, int VAR_8)
{
 struct rtl8187_priv *VAR_9 = VAR_7->priv;
 u8 VAR_10, VAR_11;
 const u8 *VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_10 = VAR_9->channels[VAR_8 - 1].hw_value & 0xF;
 VAR_11 = VAR_9->channels[VAR_8 - 1].hw_value >> 4;

 VAR_10 = FUNC_0(VAR_10, (u8)15);
 VAR_10 += VAR_9->txpwr_base & 0xF;
 VAR_10 = FUNC_0(VAR_10, (u8)35);

 if (VAR_11 > (u8)15)
  VAR_11 = 25;
 else
  VAR_11 += 10;
 VAR_11 += VAR_9->txpwr_base >> 4;
 VAR_11 = FUNC_0(VAR_11, (u8)35);

 if (VAR_8 == 14)
  VAR_12 = VAR_6;
 else
  VAR_12 = VAR_5;

 for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
  FUNC_5(VAR_7, 0x44 + VAR_14, *VAR_12++);

 FUNC_4(VAR_9, &VAR_9->map->TX_GAIN_CCK,
    VAR_4[VAR_10]);
 FUNC_1(1);


 FUNC_4(VAR_9, &VAR_9->map->EEPROM_CMD, VAR_2);
 VAR_13 = FUNC_2(VAR_9, &VAR_9->map->CONFIG3);
 FUNC_4(VAR_9, &VAR_9->map->CONFIG3,
   VAR_13 | VAR_1);
 FUNC_3(VAR_9, &VAR_9->map->ANAPARAM2,
     VAR_0);
 FUNC_4(VAR_9, &VAR_9->map->CONFIG3,
   VAR_13 & ~VAR_1);
 FUNC_4(VAR_9, &VAR_9->map->EEPROM_CMD, VAR_3);

 FUNC_6(VAR_7, 2, 0x42);
 FUNC_6(VAR_7, 5, 0x00);
 FUNC_6(VAR_7, 6, 0x40);
 FUNC_6(VAR_7, 7, 0x00);
 FUNC_6(VAR_7, 8, 0x40);

 FUNC_4(VAR_9, &VAR_9->map->TX_GAIN_OFDM,
    VAR_4[VAR_11]);
 FUNC_1(1);
}
