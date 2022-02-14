
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_subsys {int serial; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 struct nvmet_subsys* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
          char *VAR_2)
{
 struct nvmet_subsys *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2, VAR_0, "%llx\n", VAR_3->serial);
}
