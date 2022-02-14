
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00_dev {int dummy; } ;
typedef enum rt2800_eeprom_word { ____Placeholder_rt2800_eeprom_word } rt2800_eeprom_word ;


 unsigned int FUNC_0 (struct rt2x00_dev*,int const) ;
 int FUNC_1 (struct rt2x00_dev*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_0,
    const enum rt2800_eeprom_word VAR_1, u16 VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_3, VAR_2);
}
