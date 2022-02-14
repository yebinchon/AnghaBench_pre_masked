
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_cluster {size_t cl_fence_method; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct o2nm_cluster* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(
 struct config_item *VAR_1, char *VAR_2)
{
 struct o2nm_cluster *VAR_3 = FUNC_1(VAR_1);
 ssize_t VAR_4 = 0;

 if (VAR_3)
  VAR_4 = FUNC_0(VAR_2, "%s\n",
         VAR_0[VAR_3->cl_fence_method]);
 return VAR_4;
}
