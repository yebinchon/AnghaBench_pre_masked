
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tb_switch {int dummy; } ;
struct tb_eeprom_ctl {int data_in; } ;


 int VAR_0 ;
 int FUNC_0 (struct tb_switch*,struct tb_eeprom_ctl*) ;
 int FUNC_1 (struct tb_switch*,struct tb_eeprom_ctl*,int ) ;

__attribute__((used)) static int FUNC_2(struct tb_switch *VAR_1, u8 *VAR_2)
{
 struct tb_eeprom_ctl VAR_3;
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_5)
  return VAR_5;
 *VAR_2 = 0;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  *VAR_2 <<= 1;
  VAR_5 = FUNC_1(VAR_1, &VAR_3, VAR_0);
  if (VAR_5)
   return VAR_5;
  *VAR_2 |= VAR_3.data_in;
 }
 return 0;
}
