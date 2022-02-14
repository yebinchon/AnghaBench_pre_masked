
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eeprom_priv {int * mac_addr; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct eeprom_priv *VAR_0)
{
 return VAR_0->mac_addr;
}
