
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_padinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






__attribute__((used)) static int FUNC_0(const struct owl_padinfo *VAR_5,
    unsigned int VAR_6,
    u32 *VAR_7)
{
 switch (VAR_6) {
 case 132:
  *VAR_7 = *VAR_7 == VAR_3;
  break;
 case 131:
  *VAR_7 = *VAR_7 == VAR_2;
  break;
 case 130:
  *VAR_7 = *VAR_7 == VAR_1;
  break;
 case 129:
  *VAR_7 = *VAR_7 == VAR_4;
  break;
 case 128:
  *VAR_7 = *VAR_7 == 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
