
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct calling_interface_token {int tokenID; } ;


 int VAR_0 ;
 struct calling_interface_token* VAR_1 ;

struct calling_interface_token *FUNC_0(int VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].tokenID == VAR_2)
   return &VAR_1[VAR_3];
 }

 return ((void*)0);
}
