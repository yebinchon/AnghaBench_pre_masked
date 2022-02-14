
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eeprom_93cx6 {int const width; } ;


 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct eeprom_93cx6*) ;
 int FUNC_1 (struct eeprom_93cx6*,int*,int) ;
 int FUNC_2 (struct eeprom_93cx6*) ;
 int FUNC_3 (struct eeprom_93cx6*,int,scalar_t__) ;

void FUNC_4(struct eeprom_93cx6 *VAR_2, const u8 VAR_3,
 u16 *VAR_4)
{
 u16 VAR_5;




 FUNC_2(VAR_2);




 VAR_5 = (VAR_0 << VAR_2->width) | VAR_3;
 FUNC_3(VAR_2, VAR_5,
  VAR_1 + VAR_2->width);




 FUNC_1(VAR_2, VAR_4, 16);




 FUNC_0(VAR_2);
}
