
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef enum fman_port_type { ____Placeholder_fman_port_type } fman_port_type ;





__attribute__((used)) static int FUNC_0(u8 VAR_0, enum fman_port_type VAR_1,
         u16 VAR_2)
{
 int VAR_3;

 if (VAR_0 >= 6) {
  switch (VAR_1) {
  case 128:
   if (VAR_2 == 10000)
    VAR_3 = 12;
   else
    VAR_3 = 3;
   break;
  case 129:
   if (VAR_2 == 10000)
    VAR_3 = 8;
   else
    VAR_3 = 2;
   break;
  default:
   return 0;
  }
 } else {
  switch (VAR_1) {
  case 128:
  case 129:
   if (VAR_2 == 10000)
    VAR_3 = 8;
   else
    VAR_3 = 1;
   break;
  default:
   VAR_3 = 0;
  }
 }

 return VAR_3;
}
