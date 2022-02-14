
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_var_header {int data; } ;
typedef enum var_id_t { ____Placeholder_var_id_t } var_id_t ;


 int VAR_0 ;
 struct st_var_header** VAR_1 ;

struct st_var_header *FUNC_0(enum var_id_t VAR_2)
{
 struct st_var_header *VAR_3;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return ((void*)0);
 VAR_3 = VAR_1[VAR_2];
 if (!VAR_3->data)
  return ((void*)0);
 return VAR_3;
}
