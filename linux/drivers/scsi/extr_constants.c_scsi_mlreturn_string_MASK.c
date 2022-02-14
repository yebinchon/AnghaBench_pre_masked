
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_name_pair {int value; char const* name; } ;


 int FUNC_0 (struct value_name_pair*) ;
 struct value_name_pair* VAR_0 ;

const char *FUNC_1(int VAR_1)
{
 const struct value_name_pair *VAR_2 = VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3, ++VAR_2) {
  if (VAR_1 == VAR_2->value)
   return VAR_2->name;
 }
 return ((void*)0);
}
