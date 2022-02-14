
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_cluster {char* cl_cluster_name; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 struct dlm_cluster* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0, char *VAR_1)
{
 struct dlm_cluster *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1, "%s\n", VAR_2->cl_cluster_name);
}
