
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {short mask; int* value; } ;


 short VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 short* VAR_4 ;
 TYPE_1__* VAR_5 ;

int FUNC_0(const char *VAR_6, const int VAR_7, const int VAR_8)
{
 u_char *VAR_9;
 short VAR_10 = VAR_5[VAR_7].mask;

 if (VAR_8 & 1) {
  for (VAR_9 = (u_char *)VAR_5[3].value; *VAR_9; VAR_9++)
   VAR_4[*VAR_9] &= ~VAR_10;
 }
 VAR_9 = (u_char *)VAR_6;
 if (!VAR_9) {
  VAR_9 = VAR_5[VAR_7].value;
 } else {
  for (; *VAR_9; VAR_9++) {
   if (*VAR_9 < VAR_3)
    break;
   if (VAR_10 < VAR_2) {
    if (!(VAR_4[*VAR_9] & VAR_2))
     break;
   } else if (VAR_4[*VAR_9] & VAR_0) {
    break;
   }
  }
  if (*VAR_9)
   return -VAR_1;
  VAR_9 = (u_char *)VAR_6;
 }
 if (VAR_8 & 2) {
  for (; *VAR_9; VAR_9++)
   if (*VAR_9 > VAR_3)
    VAR_4[*VAR_9] |= VAR_10;
 } else {
  for (; *VAR_9; VAR_9++)
   if (*VAR_9 > VAR_3)
    VAR_4[*VAR_9] &= ~VAR_10;
 }
 return 0;
}
