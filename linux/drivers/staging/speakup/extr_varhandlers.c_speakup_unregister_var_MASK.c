
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_var_header {int * data; } ;
typedef enum var_id_t { ____Placeholder_var_id_t } var_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct st_var_header** VAR_1 ;

void FUNC_1(enum var_id_t VAR_2)
{
 struct st_var_header *VAR_3;

 FUNC_0(VAR_2 < 0 || VAR_2 >= VAR_0);
 VAR_3 = VAR_1[VAR_2];
 VAR_3->data = ((void*)0);
}
