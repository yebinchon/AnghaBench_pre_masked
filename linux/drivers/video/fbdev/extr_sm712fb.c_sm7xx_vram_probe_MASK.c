
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u8 ;
struct smtcfb_info {int chip_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u_long FUNC_2(struct smtcfb_info *VAR_0)
{
 u8 VAR_1;

 switch (VAR_0->chip_id) {
 case 0x710:
 case 0x712:
  return 0x00400000;
 case 0x720:
  FUNC_1(0x76, 0x3c4);
  VAR_1 = FUNC_0(0x3c5) >> 6;

  if (VAR_1 == 0x00)
   return 0x00800000;
  else if (VAR_1 == 0x01)
   return 0x01000000;
  else if (VAR_1 == 0x02)
   return 0x00400000;
  else if (VAR_1 == 0x03)
   return 0x00400000;
 }
 return 0;
}
