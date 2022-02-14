
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;



__attribute__((used)) static u64 FUNC_0(u8 VAR_0)
{

 switch (VAR_0) {
 case 1:
  return 0xF000;
 case 2:
  return 0x0F00;
 case 4:
  return 0x00F0;
 case 8:
 default:
  return 0x000F;
 }
}
