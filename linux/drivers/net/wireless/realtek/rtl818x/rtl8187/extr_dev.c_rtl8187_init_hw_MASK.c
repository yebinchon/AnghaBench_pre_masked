
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl8187_priv {TYPE_2__* map; TYPE_1__* rf; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
typedef int __le16 ;
struct TYPE_4__ {int GPIO0; int GP_ENABLE; int EEPROM_CMD; int CONFIG1; int WPA_CONF; int RATE_FALLBACK; int RESP_RATE; int CONFIG3; int PGSELECT; int TALLY_SEL; int BRSR; int RFPinsEnable; int RF_PARA; int RF_TIMING; int RFPinsSelect; int RFPinsOutput; int INT_TIMEOUT; int INT_MASK; } ;
struct TYPE_3__ {int (* init ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl8187_priv*,int) ;
 int FUNC_3 (struct rtl8187_priv*,int*) ;
 int FUNC_4 (struct rtl8187_priv*,int *,int) ;
 int FUNC_5 (struct rtl8187_priv*,int *,int) ;
 int FUNC_6 (struct rtl8187_priv*,int*,int) ;
 int FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_2)
{
 struct rtl8187_priv *VAR_3 = VAR_2->priv;
 u8 VAR_4;
 int VAR_5;


 FUNC_2(VAR_3, 1);

 FUNC_4(VAR_3, &VAR_3->map->INT_MASK, 0);

 FUNC_0(200);
 FUNC_6(VAR_3, (u8 *)0xFE18, 0x10);
 FUNC_6(VAR_3, (u8 *)0xFE18, 0x11);
 FUNC_6(VAR_3, (u8 *)0xFE18, 0x00);
 FUNC_0(200);

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_3, 1);


 FUNC_4(VAR_3, &VAR_3->map->RFPinsSelect, 0);
 FUNC_6(VAR_3, &VAR_3->map->GPIO0, 0);

 FUNC_4(VAR_3, &VAR_3->map->RFPinsSelect, (4 << 8));
 FUNC_6(VAR_3, &VAR_3->map->GPIO0, 1);
 FUNC_6(VAR_3, &VAR_3->map->GP_ENABLE, 0);

 FUNC_6(VAR_3, &VAR_3->map->EEPROM_CMD, VAR_0);

 FUNC_4(VAR_3, (__le16 *)0xFFF4, 0xFFFF);
 VAR_4 = FUNC_3(VAR_3, &VAR_3->map->CONFIG1);
 VAR_4 &= 0x3F;
 VAR_4 |= 0x80;
 FUNC_6(VAR_3, &VAR_3->map->CONFIG1, VAR_4);

 FUNC_6(VAR_3, &VAR_3->map->EEPROM_CMD, VAR_1);

 FUNC_5(VAR_3, &VAR_3->map->INT_TIMEOUT, 0);
 FUNC_6(VAR_3, &VAR_3->map->WPA_CONF, 0);
 FUNC_6(VAR_3, &VAR_3->map->RATE_FALLBACK, 0);


 FUNC_6(VAR_3, &VAR_3->map->RESP_RATE, (8 << 4) | 0);
 FUNC_4(VAR_3, &VAR_3->map->BRSR, 0x01F3);


 FUNC_4(VAR_3, &VAR_3->map->RFPinsSelect, 0);
 FUNC_6(VAR_3, &VAR_3->map->GPIO0, 0);
 VAR_4 = FUNC_3(VAR_3, (u8 *)0xFE53);
 FUNC_6(VAR_3, (u8 *)0xFE53, VAR_4 | (1 << 7));
 FUNC_4(VAR_3, &VAR_3->map->RFPinsSelect, (4 << 8));
 FUNC_6(VAR_3, &VAR_3->map->GPIO0, 0x20);
 FUNC_6(VAR_3, &VAR_3->map->GP_ENABLE, 0);
 FUNC_4(VAR_3, &VAR_3->map->RFPinsOutput, 0x80);
 FUNC_4(VAR_3, &VAR_3->map->RFPinsSelect, 0x80);
 FUNC_4(VAR_3, &VAR_3->map->RFPinsEnable, 0x80);
 FUNC_0(100);

 FUNC_5(VAR_3, &VAR_3->map->RF_TIMING, 0x000a8008);
 FUNC_4(VAR_3, &VAR_3->map->BRSR, 0xFFFF);
 FUNC_5(VAR_3, &VAR_3->map->RF_PARA, 0x00100044);
 FUNC_6(VAR_3, &VAR_3->map->EEPROM_CMD,
    VAR_0);
 FUNC_6(VAR_3, &VAR_3->map->CONFIG3, 0x44);
 FUNC_6(VAR_3, &VAR_3->map->EEPROM_CMD,
    VAR_1);
 FUNC_4(VAR_3, &VAR_3->map->RFPinsEnable, 0x1FF7);
 FUNC_0(100);

 VAR_3->rf->init(VAR_2);

 FUNC_4(VAR_3, &VAR_3->map->BRSR, 0x01F3);
 VAR_4 = FUNC_3(VAR_3, &VAR_3->map->PGSELECT) & ~1;
 FUNC_6(VAR_3, &VAR_3->map->PGSELECT, VAR_4 | 1);
 FUNC_4(VAR_3, (__le16 *)0xFFFE, 0x10);
 FUNC_6(VAR_3, &VAR_3->map->TALLY_SEL, 0x80);
 FUNC_6(VAR_3, (u8 *)0xFFFF, 0x60);
 FUNC_6(VAR_3, &VAR_3->map->PGSELECT, VAR_4);

 return 0;
}
