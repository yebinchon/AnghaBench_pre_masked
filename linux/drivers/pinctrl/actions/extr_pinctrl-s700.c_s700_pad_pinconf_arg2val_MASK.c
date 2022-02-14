
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_padinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static int FUNC_0(const struct owl_padinfo *VAR_3,
    unsigned int VAR_4,
    u32 *VAR_5)
{
 switch (VAR_4) {
 case 130:
  *VAR_5 = VAR_1;
  break;
 case 129:
  *VAR_5 = VAR_2;
  break;
 case 128:
  *VAR_5 = (*VAR_5 >= 1 ? 1 : 0);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
