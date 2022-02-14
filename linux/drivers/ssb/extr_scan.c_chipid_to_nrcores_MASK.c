
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static u8 FUNC_1(u16 VAR_0)
{
 switch (VAR_0) {
 case 0x5365:
  return 7;
 case 0x4306:
  return 6;
 case 0x4310:
  return 8;
 case 0x4307:
 case 0x4301:
  return 5;
 case 0x4401:
 case 0x4402:
  return 3;
 case 0x4710:
 case 0x4610:
 case 0x4704:
  return 9;
 default:
  FUNC_0("CHIPID not in nrcores fallback list\n");
 }

 return 1;
}
