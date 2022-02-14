
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gen_pool {int dummy; } ;
struct TYPE_2__ {int pm_functions; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* FUNC_0 (struct gen_pool*,void*,int *,int) ;

int FUNC_1(struct gen_pool *VAR_2, void *VAR_3)
{
 void *VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_3,
       &VAR_1->pm_functions,
       sizeof(VAR_1->pm_functions));
 if (!VAR_4)
  return -VAR_0;

 return 0;
}
