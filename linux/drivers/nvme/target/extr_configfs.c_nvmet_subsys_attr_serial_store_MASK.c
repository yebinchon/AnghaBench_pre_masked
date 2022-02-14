
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_subsys {int serial; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,int *) ;
 struct nvmet_subsys* FUNC_2 (struct config_item*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
           const char *VAR_2, size_t VAR_3)
{
 struct nvmet_subsys *VAR_4 = FUNC_2(VAR_1);

 FUNC_0(&VAR_0);
 FUNC_1(VAR_2, "%llx\n", &VAR_4->serial);
 FUNC_3(&VAR_0);

 return VAR_3;
}
