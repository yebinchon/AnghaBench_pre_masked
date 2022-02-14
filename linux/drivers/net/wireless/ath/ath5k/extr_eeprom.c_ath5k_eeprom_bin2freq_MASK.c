
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ath5k_eeprom_info {scalar_t__ ee_version; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u16 FUNC_0(struct ath5k_eeprom_info *VAR_3, u16 VAR_4,
       unsigned int VAR_5)
{
 u16 VAR_6;

 if (VAR_4 == VAR_0)
  return VAR_4;

 if (VAR_5 == VAR_1) {
  if (VAR_3->ee_version > VAR_2)
   VAR_6 = (5 * VAR_4) + 4800;
  else
   VAR_6 = VAR_4 > 62 ? (10 * 62) + (5 * (VAR_4 - 62)) + 5100 :
    (VAR_4 * 10) + 5100;
 } else {
  if (VAR_3->ee_version > VAR_2)
   VAR_6 = VAR_4 + 2300;
  else
   VAR_6 = VAR_4 + 2400;
 }

 return VAR_6;
}
