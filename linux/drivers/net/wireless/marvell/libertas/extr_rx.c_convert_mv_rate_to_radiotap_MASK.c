
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_0)
{
 switch (VAR_0) {
 case 0:
  return 2;
 case 1:
  return 4;
 case 2:
  return 11;
 case 3:
  return 22;

 case 5:
  return 12;
 case 6:
  return 18;
 case 7:
  return 24;
 case 8:
  return 36;
 case 9:
  return 48;
 case 10:
  return 72;
 case 11:
  return 96;
 case 12:
  return 108;
 }
 FUNC_0("Invalid Marvell WLAN rate %i\n", VAR_0);
 return 0;
}
