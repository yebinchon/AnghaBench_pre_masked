
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1685_priv {scalar_t__ bcd_mode; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct ds1685_priv *VAR_1, u8 VAR_2)
{
 if (VAR_1->bcd_mode) {
  if (VAR_2 < 0x01 || VAR_2 > 0x31 || (VAR_2 & 0x0f) > 0x09)
   return -VAR_0;
 } else {
  if (VAR_2 < 1 || VAR_2 > 31)
   return -VAR_0;
 }
 return 0;
}
