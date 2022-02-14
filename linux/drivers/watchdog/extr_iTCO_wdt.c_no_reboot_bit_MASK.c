
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iTCO_wdt_private {int iTCO_version; } ;



__attribute__((used)) static inline u32 FUNC_0(struct iTCO_wdt_private *VAR_0)
{
 u32 VAR_1;

 switch (VAR_0->iTCO_version) {
 case 5:
 case 3:
  VAR_1 = 0x00000010;
  break;
 case 2:
  VAR_1 = 0x00000020;
  break;
 case 4:
 case 1:
 default:
  VAR_1 = 0x00000002;
  break;
 }

 return VAR_1;
}
