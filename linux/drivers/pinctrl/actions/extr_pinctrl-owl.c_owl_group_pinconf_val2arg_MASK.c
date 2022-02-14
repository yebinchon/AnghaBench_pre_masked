
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_pingroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;







__attribute__((used)) static int FUNC_0(const struct owl_pingroup *VAR_2,
    unsigned int VAR_3,
    u32 *VAR_4)
{
 switch (VAR_3) {
 case 129:
  switch (*VAR_4) {
  case 132:
   *VAR_4 = 2;
   break;
  case 131:
   *VAR_4 = 4;
   break;
  case 130:
   *VAR_4 = 8;
   break;
  case 133:
   *VAR_4 = 12;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 128:
  if (*VAR_4)
   *VAR_4 = 1;
  else
   *VAR_4 = 0;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
