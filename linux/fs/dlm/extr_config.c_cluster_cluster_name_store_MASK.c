
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_cluster {int cl_cluster_name; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int ci_cluster_name; } ;


 struct dlm_cluster* FUNC_0 (struct config_item*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct dlm_cluster *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_0.ci_cluster_name, VAR_2,
    sizeof(VAR_0.ci_cluster_name));
 FUNC_1(VAR_4->cl_cluster_name, VAR_2, sizeof(VAR_4->cl_cluster_name));
 return VAR_3;
}
