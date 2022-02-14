
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cobalt {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct cobalt*) ;
 int FUNC_2 (struct cobalt*,int) ;

void FUNC_3(struct cobalt *VAR_0)
{
 u32 VAR_1 = FUNC_2(VAR_0, 0x30);

 switch (VAR_1) {
 case 3:
 case 4:
 case 5:
  FUNC_1(VAR_0);
  break;
 default:
  FUNC_0("CPLD revision %u is not supported!\n", VAR_1);
  break;
 }
}
