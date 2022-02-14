
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {TYPE_1__* map; } ;
struct eeprom_93cx6 {scalar_t__ reg_chip_select; scalar_t__ reg_data_clock; scalar_t__ reg_data_out; scalar_t__ reg_data_in; struct rtl8180_priv* data; } ;
struct TYPE_2__ {int EEPROM_CMD; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl8180_priv*,int *) ;
 int FUNC_1 (struct rtl8180_priv*,int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct eeprom_93cx6 *VAR_4)
{
 struct rtl8180_priv *VAR_5 = VAR_4->data;
 u8 VAR_6 = 2 << 6;

 if (VAR_4->reg_data_in)
  VAR_6 |= VAR_3;
 if (VAR_4->reg_data_out)
  VAR_6 |= VAR_2;
 if (VAR_4->reg_data_clock)
  VAR_6 |= VAR_0;
 if (VAR_4->reg_chip_select)
  VAR_6 |= VAR_1;

 FUNC_1(VAR_5, &VAR_5->map->EEPROM_CMD, VAR_6);
 FUNC_0(VAR_5, &VAR_5->map->EEPROM_CMD);
 FUNC_2(10);
}
