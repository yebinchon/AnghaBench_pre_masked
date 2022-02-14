
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef scalar_t__ u_char ;
struct sym_chip {scalar_t__ device_id; scalar_t__ revision_id; } ;


 struct sym_chip* VAR_0 ;
 int VAR_1 ;

struct sym_chip *
FUNC_0 (u_short VAR_2, u_char VAR_3)
{
 struct sym_chip *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_0[VAR_5];
  if (VAR_2 != VAR_4->device_id)
   continue;
  if (VAR_3 > VAR_4->revision_id)
   continue;
  return VAR_4;
 }

 return ((void*)0);
}
