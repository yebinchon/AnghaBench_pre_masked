
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_cluster {int group; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct config_item*) ;
 struct dlm_cluster* FUNC_1 (struct config_item*) ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(struct config_group *VAR_2, struct config_item *VAR_3)
{
 struct dlm_cluster *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(&VAR_4->group);

 VAR_1 = ((void*)0);
 VAR_0 = ((void*)0);

 FUNC_0(VAR_3);
}
