
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_name_pair {int value; char* name; } ;
struct sa_name_list {int opcode; int arr_sz; struct value_name_pair* arr; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 struct sa_name_list* VAR_2 ;

bool FUNC_1(int VAR_3, int VAR_4,
    const char **VAR_5, const char **VAR_6)
{
 struct sa_name_list *VAR_7;
 const struct value_name_pair *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 *VAR_5 = ((void*)0);
 if (VAR_3 >= VAR_0)
  return 0;

 if (VAR_3 < FUNC_0(VAR_1))
  *VAR_5 = VAR_1[VAR_3];

 for (VAR_7 = VAR_2; VAR_7->arr; ++VAR_7) {
  if (VAR_7->opcode == VAR_3) {
   VAR_8 = VAR_7->arr;
   VAR_9 = VAR_7->arr_sz;
   break;
  }
 }
 if (!VAR_8)
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10, ++VAR_8) {
  if (VAR_4 == VAR_8->value)
   break;
 }
 if (VAR_10 < VAR_9)
  *VAR_6 = VAR_8->name;

 return 1;
}
