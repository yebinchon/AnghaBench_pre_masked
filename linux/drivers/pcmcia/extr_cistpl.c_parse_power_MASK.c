
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_3__ {int present; int flags; scalar_t__* param; } ;
typedef TYPE_1__ cistpl_power_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u_char *FUNC_2(u_char *VAR_2, u_char *VAR_3, cistpl_power_t *VAR_4)
{
 int VAR_5;
 u_int VAR_6;

 if (VAR_2 == VAR_3)
  return ((void*)0);
 VAR_4->present = *VAR_2;
 VAR_4->flags = 0;
 VAR_2++;
 for (VAR_5 = 0; VAR_5 < 7; VAR_5++)
  if (VAR_4->present & (1<<VAR_5)) {
   if (VAR_2 == VAR_3)
    return ((void*)0);
   VAR_4->param[VAR_5] = FUNC_0(*VAR_2);
   VAR_6 = FUNC_1(*VAR_2);
   while (*VAR_2 & 0x80) {
    if (++VAR_2 == VAR_3)
     return ((void*)0);
    if ((*VAR_2 & 0x7f) < 100)
     VAR_4->param[VAR_5] +=
      (*VAR_2 & 0x7f) * VAR_6 / 100;
    else if (*VAR_2 == 0x7d)
     VAR_4->flags |= VAR_0;
    else if (*VAR_2 == 0x7e)
     VAR_4->param[VAR_5] = 0;
    else if (*VAR_2 == 0x7f)
     VAR_4->flags |= VAR_1;
    else
     return ((void*)0);
   }
   VAR_2++;
  }
 return VAR_2;
}
