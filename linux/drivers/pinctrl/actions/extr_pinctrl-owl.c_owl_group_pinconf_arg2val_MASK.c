
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_pingroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



__attribute__((used)) static int FUNC_0(const struct owl_pingroup *VAR_8,
    unsigned int VAR_9,
    u32 *VAR_10)
{
 switch (VAR_9) {
 case 129:
  switch (*VAR_10) {
  case 2:
   *VAR_10 = VAR_3;
   break;
  case 4:
   *VAR_10 = VAR_4;
   break;
  case 8:
   *VAR_10 = VAR_5;
   break;
  case 12:
   *VAR_10 = VAR_2;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 128:
  if (*VAR_10)
   *VAR_10 = VAR_6;
  else
   *VAR_10 = VAR_7;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
