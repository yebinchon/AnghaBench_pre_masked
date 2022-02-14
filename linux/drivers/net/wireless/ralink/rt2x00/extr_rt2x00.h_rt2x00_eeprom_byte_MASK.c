
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {scalar_t__ eeprom; } ;



__attribute__((used)) static inline u8 FUNC_0(struct rt2x00_dev *VAR_0,
        const unsigned int VAR_1)
{
 return *(((u8 *)VAR_0->eeprom) + VAR_1);
}
