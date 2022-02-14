
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param {char* value; } ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(
 struct iscsi_param *VAR_0,
 char *VAR_1)
{
 char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 VAR_4 = VAR_0->value;
 VAR_5 = VAR_1;

 do {
  if (!VAR_5)
   return ((void*)0);
  VAR_2 = FUNC_0(VAR_5, ',');
  if (VAR_2)
   *VAR_2 = '\0';
  VAR_4 = VAR_0->value;
  do {
   if (!VAR_4) {
    if (VAR_2)
     *VAR_2 = ',';
    return ((void*)0);
   }
   VAR_3 = FUNC_0(VAR_4, ',');
   if (VAR_3)
    *VAR_3 = '\0';
   if (!FUNC_1(VAR_4, VAR_5)) {
    if (VAR_3)
     *VAR_3 = ',';
    goto out;
   }
   if (VAR_3)
    *VAR_3++ = ',';

   VAR_4 = VAR_3;
  } while (VAR_4);
  if (VAR_2)
   *VAR_2++ = ',';
  VAR_5 = VAR_2;
 } while (VAR_5);

out:
 return VAR_5;
}
