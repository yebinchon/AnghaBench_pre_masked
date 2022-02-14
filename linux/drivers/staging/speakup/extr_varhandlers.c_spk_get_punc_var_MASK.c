
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct punc_var_t {int var_id; } ;
typedef enum var_id_t { ____Placeholder_var_id_t } var_id_t ;


 struct punc_var_t* VAR_0 ;

struct punc_var_t *FUNC_0(enum var_id_t VAR_1)
{
 struct punc_var_t *VAR_2 = ((void*)0);
 struct punc_var_t *VAR_3;

 VAR_3 = VAR_0;
 while ((VAR_3->var_id != -1) && (!VAR_2)) {
  if (VAR_3->var_id == VAR_1)
   VAR_2 = VAR_3;
  else
   VAR_3++;
 }
 return VAR_2;
}
