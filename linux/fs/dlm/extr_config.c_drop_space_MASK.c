
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_space {int group; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;


 int FUNC_0 (struct config_item*) ;
 struct dlm_space* FUNC_1 (struct config_item*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct config_group *VAR_0, struct config_item *VAR_1)
{
 struct dlm_space *VAR_2 = FUNC_1(VAR_1);



 FUNC_2(&VAR_2->group);
 FUNC_0(VAR_1);
}
