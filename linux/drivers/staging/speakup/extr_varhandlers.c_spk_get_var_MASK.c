
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct var_t {int dummy; } ;
typedef enum var_id_t { ____Placeholder_var_id_t } var_id_t ;
struct TYPE_2__ {struct var_t* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;

struct var_t *FUNC_1(enum var_id_t VAR_2)
{
 FUNC_0(VAR_2 < 0 || VAR_2 >= VAR_0);
 FUNC_0(!VAR_1[VAR_2]);
 return VAR_1[VAR_2]->data;
}
