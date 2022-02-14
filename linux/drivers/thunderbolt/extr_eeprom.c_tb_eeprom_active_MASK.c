
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {int dummy; } ;
struct tb_eeprom_ctl {int access_high; int access_low; } ;


 int FUNC_0 (struct tb_switch*,struct tb_eeprom_ctl*) ;
 int FUNC_1 (struct tb_switch*,struct tb_eeprom_ctl*) ;

__attribute__((used)) static int FUNC_2(struct tb_switch *VAR_0, bool VAR_1)
{
 struct tb_eeprom_ctl VAR_2;
 int VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;
 if (VAR_1) {
  VAR_2.access_high = 1;
  VAR_3 = FUNC_1(VAR_0, &VAR_2);
  if (VAR_3)
   return VAR_3;
  VAR_2.access_low = 0;
  return FUNC_1(VAR_0, &VAR_2);
 } else {
  VAR_2.access_low = 1;
  VAR_3 = FUNC_1(VAR_0, &VAR_2);
  if (VAR_3)
   return VAR_3;
  VAR_2.access_high = 0;
  return FUNC_1(VAR_0, &VAR_2);
 }
}
