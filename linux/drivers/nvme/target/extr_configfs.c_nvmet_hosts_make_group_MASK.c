
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int dummy; } ;
struct nvmet_host {struct config_group group; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 struct nvmet_host* FUNC_2 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct config_group *FUNC_3(struct config_group *VAR_3,
  const char *VAR_4)
{
 struct nvmet_host *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_5->group, VAR_4, &VAR_2);

 return &VAR_5->group;
}
