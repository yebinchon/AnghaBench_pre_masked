
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ov9640_reg_alt {int com13; int com15; void* com7; int com12; } ;





 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_1(u32 VAR_6,
         struct ov9640_reg_alt *VAR_7)
{
 switch (VAR_6) {
 default:
 case 128:
  VAR_7->com12 = VAR_0;
  VAR_7->com13 = VAR_2 |
     FUNC_0(0x01);
  break;
 case 130:
  VAR_7->com7 = VAR_5;
  VAR_7->com13 = VAR_1;
  VAR_7->com15 = VAR_3;
  break;
 case 129:
  VAR_7->com7 = VAR_5;
  VAR_7->com13 = VAR_1;
  VAR_7->com15 = VAR_4;
  break;
 }
}
