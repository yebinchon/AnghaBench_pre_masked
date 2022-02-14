
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dlm_space {int dummy; } ;
struct config_item {int dummy; } ;
struct TYPE_5__ {TYPE_1__* cg_subsys; } ;
struct TYPE_4__ {int su_mutex; } ;


 struct config_item* FUNC_0 (TYPE_2__*,char*) ;
 struct dlm_space* FUNC_1 (struct config_item*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static struct dlm_space *FUNC_4(char *VAR_1)
{
 struct config_item *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 FUNC_2(&VAR_0->cg_subsys->su_mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_0->cg_subsys->su_mutex);

 return FUNC_1(VAR_2);
}
