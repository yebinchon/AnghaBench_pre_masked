
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(enum wireless_mode VAR_3,
   u32 VAR_4)
{
 u8 VAR_5 = 0;
 if (VAR_3 < VAR_2)
  VAR_5 = 0;
 else if (VAR_3 == VAR_0) {
  if (VAR_4 & 0xfff00000)
   VAR_5 = 3;
  else
   VAR_5 = 2;
 } else if (VAR_3 == VAR_1) {
   VAR_5 = 1;
 }

 return VAR_5 << 4;
}
