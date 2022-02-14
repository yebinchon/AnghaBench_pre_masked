
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_trap_item {int action; void* trap_ctx; } ;
struct nsim_dev {int dummy; } ;
struct devlink_trap {int init_action; int id; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct nsim_dev* FUNC_1 (struct devlink*) ;
 struct nsim_trap_item* FUNC_2 (struct nsim_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct devlink *VAR_1,
          const struct devlink_trap *VAR_2,
          void *VAR_3)
{
 struct nsim_dev *VAR_4 = FUNC_1(VAR_1);
 struct nsim_trap_item *VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_2->id);
 if (FUNC_0(!VAR_5))
  return -VAR_0;

 VAR_5->trap_ctx = VAR_3;
 VAR_5->action = VAR_2->init_action;

 return 0;
}
