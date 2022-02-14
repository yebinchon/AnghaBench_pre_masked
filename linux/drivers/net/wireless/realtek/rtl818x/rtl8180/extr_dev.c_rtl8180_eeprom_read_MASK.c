
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rtl8180_priv {int rf_type; int csthreshold; scalar_t__ chip_family; int rfparam; int antenna_diversity_en; int antenna_diversity_default; int xtal_out; int xtal_in; int xtal_cal; int thermal_meter_val; int thermal_meter_en; TYPE_2__* map; int anaparam; TYPE_1__* channels; scalar_t__ mac_addr; } ;
struct eeprom_93cx6 {int width; int register_write; int register_read; struct rtl8180_priv* data; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_4__ {int EEPROM_CMD; int RX_CONF; } ;
struct TYPE_3__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct eeprom_93cx6*,int,int *,int) ;
 int FUNC_1 (struct eeprom_93cx6*,int,int*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct rtl8180_priv*,int *) ;
 int FUNC_4 (struct rtl8180_priv*,int *) ;
 int FUNC_5 (struct rtl8180_priv*,int *,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct rtl8180_priv *VAR_8)
{
 struct eeprom_93cx6 VAR_9;
 int VAR_10;
 u16 VAR_11;
 int VAR_12;

 VAR_9.data = VAR_8;
 VAR_9.register_read = VAR_6;
 VAR_9.register_write = VAR_7;
 if (FUNC_3(VAR_8, &VAR_8->map->RX_CONF) & (1 << 6))
  VAR_9.width = VAR_1;
 else
  VAR_9.width = VAR_0;

 FUNC_5(VAR_8, &VAR_8->map->EEPROM_CMD,
   VAR_5);
 FUNC_4(VAR_8, &VAR_8->map->EEPROM_CMD);
 FUNC_6(10);

 FUNC_1(&VAR_9, 0x06, &VAR_11);
 VAR_11 &= 0xFF;
 VAR_8->rf_type = VAR_11;

 FUNC_1(&VAR_9, 0x17, &VAR_11);
 VAR_8->csthreshold = VAR_11 >> 8;

 FUNC_0(&VAR_9, 0x7, (__le16 *)VAR_8->mac_addr, 3);

 if (VAR_8->chip_family == VAR_3)
  VAR_10 = 0x30;
 else
  VAR_10 = 0x10;


 for (VAR_12 = 0; VAR_12 < 14; VAR_12 += 2) {
  u16 VAR_13;
  FUNC_1(&VAR_9, VAR_10 + (VAR_12 >> 1),
    &VAR_13);
  VAR_8->channels[VAR_12].hw_value = VAR_13 & 0xFF;
  VAR_8->channels[VAR_12 + 1].hw_value = VAR_13 >> 8;
 }


 if (VAR_8->chip_family != VAR_2) {
  for (VAR_12 = 0; VAR_12 < 14; VAR_12 += 2) {
   u16 VAR_14;
   FUNC_1(&VAR_9, 0x20 + (VAR_12 >> 1), &VAR_14);
   VAR_8->channels[VAR_12].hw_value |= (VAR_14 & 0xFF) << 8;
   VAR_8->channels[VAR_12 + 1].hw_value |= VAR_14 & 0xFF00;
  }
 }

 if (VAR_8->chip_family == VAR_2) {
  __le32 VAR_15;
  FUNC_0(&VAR_9, 0xD, (__le16 *)&VAR_15, 2);
  VAR_8->anaparam = FUNC_2(VAR_15);
  FUNC_1(&VAR_9, 0x19, &VAR_8->rfparam);
 }

 if (VAR_8->chip_family == VAR_3) {
  FUNC_1(&VAR_9, 0x3F, &VAR_11);
  VAR_8->antenna_diversity_en = !!(VAR_11 & 0x100);
  VAR_8->antenna_diversity_default = (VAR_11 & 0xC00) == 0x400;

  FUNC_1(&VAR_9, 0x7C, &VAR_11);
  VAR_8->xtal_out = VAR_11 & 0xF;
  VAR_8->xtal_in = (VAR_11 & 0xF0) >> 4;
  VAR_8->xtal_cal = !!(VAR_11 & 0x1000);
  VAR_8->thermal_meter_val = (VAR_11 & 0xF00) >> 8;
  VAR_8->thermal_meter_en = !!(VAR_11 & 0x2000);
 }

 FUNC_5(VAR_8, &VAR_8->map->EEPROM_CMD,
   VAR_4);
}
