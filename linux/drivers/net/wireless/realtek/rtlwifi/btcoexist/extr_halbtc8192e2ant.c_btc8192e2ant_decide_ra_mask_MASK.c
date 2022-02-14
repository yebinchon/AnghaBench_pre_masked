
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct btc_coexist {int dummy; } ;



__attribute__((used)) static u32 FUNC_0(struct btc_coexist *VAR_0,
           u8 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0x0;

 switch (VAR_2) {
 case 0:
  if (VAR_1 == 2)
   VAR_3 = 0x0;
  else
   VAR_3 = 0xfff00000;
  break;
 case 1:
  if (VAR_1 == 2)
   VAR_3 = 0x00000003;
  else
   VAR_3 = 0xfff00003;
  break;
 case 2:
  if (VAR_1 == 2)
   VAR_3 = 0x0001f1f7;
  else
   VAR_3 = 0xfff1f1f7;
  break;
 default:
  break;
 }

 return VAR_3;
}
