
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sid {scalar_t__ revision; scalar_t__* authority; int num_subauth; scalar_t__* sub_auth; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const struct cifs_sid *VAR_1, const struct cifs_sid *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5, VAR_6;

 if ((!VAR_1) || (!VAR_2))
  return 1;


 if (VAR_1->revision != VAR_2->revision) {
  if (VAR_1->revision > VAR_2->revision)
   return 1;
  else
   return -1;
 }


 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (VAR_1->authority[VAR_3] != VAR_2->authority[VAR_3]) {
   if (VAR_1->authority[VAR_3] > VAR_2->authority[VAR_3])
    return 1;
   else
    return -1;
  }
 }


 VAR_5 = VAR_1->num_subauth;
 VAR_6 = VAR_2->num_subauth;
 VAR_4 = VAR_5 < VAR_6 ? VAR_5 : VAR_6;
 if (VAR_4) {
  for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
   if (VAR_1->sub_auth[VAR_3] != VAR_2->sub_auth[VAR_3]) {
    if (FUNC_0(VAR_1->sub_auth[VAR_3]) >
     FUNC_0(VAR_2->sub_auth[VAR_3]))
     return 1;
    else
     return -1;
   }
  }
 }

 return 0;
}
