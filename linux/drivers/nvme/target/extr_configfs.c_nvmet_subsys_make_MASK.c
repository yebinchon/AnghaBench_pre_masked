
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int dummy; } ;
struct nvmet_subsys {struct config_group group; struct config_group allowed_hosts_group; struct config_group namespaces_group; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (struct nvmet_subsys*) ;
 struct config_group* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nvmet_subsys*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct config_group*,char const*,int *) ;
 int FUNC_4 (struct config_group*,struct config_group*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct nvmet_subsys* FUNC_5 (char const*,int ) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,int ) ;

__attribute__((used)) static struct config_group *FUNC_8(struct config_group *VAR_6,
  const char *VAR_7)
{
 struct nvmet_subsys *VAR_8;

 if (FUNC_7(VAR_7, VAR_1)) {
  FUNC_6("can't create discovery subsystem through configfs\n");
  return FUNC_1(-VAR_0);
 }

 VAR_8 = FUNC_5(VAR_7, VAR_2);
 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);

 FUNC_3(&VAR_8->group, VAR_7, &VAR_5);

 FUNC_3(&VAR_8->namespaces_group,
   "namespaces", &VAR_4);
 FUNC_4(&VAR_8->namespaces_group, &VAR_8->group);

 FUNC_3(&VAR_8->allowed_hosts_group,
   "allowed_hosts", &VAR_3);
 FUNC_4(&VAR_8->allowed_hosts_group,
   &VAR_8->group);

 return &VAR_8->group;
}
