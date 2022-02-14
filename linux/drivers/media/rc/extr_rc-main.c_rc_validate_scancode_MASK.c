
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;







bool FUNC_0(enum rc_proto VAR_0, u32 VAR_1)
{
 switch (VAR_0) {




 case 130:
  if ((((VAR_1 >> 16) ^ ~(VAR_1 >> 8)) & 0xff) == 0)
   return 0;
  break;





 case 131:
  if ((((VAR_1 >> 8) ^ ~VAR_1) & 0xff) == 0)
   return 0;
  break;




 case 128:
  if ((VAR_1 & 0xffff0000) != 0x800f0000)
   return 0;
  break;
 case 129:
  if ((VAR_1 & 0xffff0000) == 0x800f0000)
   return 0;
  break;
 default:
  break;
 }

 return 1;
}
