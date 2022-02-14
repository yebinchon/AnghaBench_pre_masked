
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvmet_subsys {int subsysnqn; } ;
struct config_group {int cg_item; } ;
struct nvmet_ns {struct config_group group; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_group* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 int FUNC_2 (char const*,int ,scalar_t__*) ;
 struct nvmet_subsys* FUNC_3 (int *) ;
 struct nvmet_ns* FUNC_4 (struct nvmet_subsys*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__,int ) ;

__attribute__((used)) static struct config_group *FUNC_7(struct config_group *VAR_4,
  const char *VAR_5)
{
 struct nvmet_subsys *VAR_6 = FUNC_3(&VAR_4->cg_item);
 struct nvmet_ns *VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_2(VAR_5, 0, &VAR_9);
 if (VAR_8)
  goto out;

 VAR_8 = -VAR_0;
 if (VAR_9 == 0 || VAR_9 == VAR_2) {
  FUNC_5("invalid nsid %#x", VAR_9);
  goto out;
 }

 VAR_8 = -VAR_1;
 VAR_7 = FUNC_4(VAR_6, VAR_9);
 if (!VAR_7)
  goto out;
 FUNC_1(&VAR_7->group, VAR_5, &VAR_3);

 FUNC_6("adding nsid %d to subsystem %s\n", VAR_9, VAR_6->subsysnqn);

 return &VAR_7->group;
out:
 return FUNC_0(VAR_8);
}
