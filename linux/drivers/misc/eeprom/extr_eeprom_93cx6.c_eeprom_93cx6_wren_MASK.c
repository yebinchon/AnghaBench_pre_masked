
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct eeprom_93cx6 {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct eeprom_93cx6*) ;
 int FUNC_1 (struct eeprom_93cx6*) ;
 int FUNC_2 (struct eeprom_93cx6*,int,scalar_t__) ;

void FUNC_3(struct eeprom_93cx6 *VAR_3, bool VAR_4)
{
 u16 VAR_5;


 FUNC_1(VAR_3);



 VAR_5 = VAR_4 ? VAR_1 : VAR_0;
 VAR_5 <<= (VAR_3->width - 2);

 FUNC_2(VAR_3, VAR_5,
    VAR_2 + VAR_3->width);

 FUNC_0(VAR_3);
}
