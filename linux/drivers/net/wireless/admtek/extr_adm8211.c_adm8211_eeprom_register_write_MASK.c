
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct eeprom_93cx6 {scalar_t__ reg_chip_select; scalar_t__ reg_data_clock; scalar_t__ reg_data_out; scalar_t__ reg_data_in; struct adm8211_priv* data; } ;
struct adm8211_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct eeprom_93cx6 *VAR_6)
{
 struct adm8211_priv *VAR_7 = VAR_6->data;
 u32 VAR_8 = 0x4000 | VAR_4;

 if (VAR_6->reg_data_in)
  VAR_8 |= VAR_2;
 if (VAR_6->reg_data_out)
  VAR_8 |= VAR_3;
 if (VAR_6->reg_data_clock)
  VAR_8 |= VAR_0;
 if (VAR_6->reg_chip_select)
  VAR_8 |= VAR_1;

 FUNC_1(VAR_5, VAR_8);
 FUNC_0(VAR_5);
}
