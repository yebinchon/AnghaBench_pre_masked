
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int noprobe; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_3)
{
 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
  return 1;

 if (FUNC_0(VAR_3, "cardu1:", 7) == 0) {
  VAR_3 += 7;
  if (*VAR_3 != '\0') {
   if (FUNC_0(VAR_3, "noprobe", 7) == 0) {
    VAR_2[VAR_0].noprobe = 1;
    VAR_3 += 7;
   }

   if (*VAR_3 != ',')
    return 1;
  } else
   return 1;
 }

 if (FUNC_0(VAR_3, "cardu2:", 7) == 0) {
  VAR_3 += 7;
  if ((*VAR_3 != '\0') && (FUNC_0(VAR_3, "noprobe", 7) == 0))
   VAR_2[VAR_1].noprobe = 1;
 }

 return 1;
}
