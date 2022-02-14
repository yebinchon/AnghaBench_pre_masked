
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsim_trap_item {int action; } ;
struct nsim_dev {TYPE_1__* trap_data; } ;
struct devlink_trap {int id; } ;
struct devlink {int dummy; } ;
typedef enum devlink_trap_action { ____Placeholder_devlink_trap_action } devlink_trap_action ;
struct TYPE_2__ {int trap_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct nsim_dev* FUNC_1 (struct devlink*) ;
 struct nsim_trap_item* FUNC_2 (struct nsim_dev*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct devlink *VAR_1,
     const struct devlink_trap *VAR_2,
     enum devlink_trap_action VAR_3)
{
 struct nsim_dev *VAR_4 = FUNC_1(VAR_1);
 struct nsim_trap_item *VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_2->id);
 if (FUNC_0(!VAR_5))
  return -VAR_0;

 FUNC_3(&VAR_4->trap_data->trap_lock);
 VAR_5->action = VAR_3;
 FUNC_4(&VAR_4->trap_data->trap_lock);

 return 0;
}
