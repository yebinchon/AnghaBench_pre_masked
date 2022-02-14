
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_cluster {int cl_group; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (int *) ;
 struct o2nm_cluster* VAR_0 ;
 struct o2nm_cluster* FUNC_3 (struct config_item*) ;

__attribute__((used)) static void FUNC_4(struct config_group *VAR_1, struct config_item *VAR_2)
{
 struct o2nm_cluster *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(VAR_0 != VAR_3);
 VAR_0 = ((void*)0);

 FUNC_2(&VAR_3->cl_group);
 FUNC_1(VAR_2);
}
