
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {scalar_t__ state; int lock; TYPE_1__* ops; int insts_count; int instances; } ;
struct TYPE_2__ {int (* core_deinit ) (struct venus_core*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct venus_core*) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(struct venus_core *VAR_2, bool VAR_3)
{
 int VAR_4 = 0, VAR_5;

 FUNC_2(&VAR_2->lock);

 if (VAR_2->state == VAR_0)
  goto unlock;

 VAR_5 = FUNC_1(&VAR_2->instances);

 if (!VAR_5 && !VAR_3) {
  VAR_4 = -VAR_1;
  goto unlock;
 }

 if (!VAR_5) {
  FUNC_3(&VAR_2->lock);
  FUNC_5(&VAR_2->insts_count,
          !FUNC_0(&VAR_2->insts_count));
  FUNC_2(&VAR_2->lock);
 }

 VAR_4 = VAR_2->ops->core_deinit(VAR_2);

 if (!VAR_4)
  VAR_2->state = VAR_0;

unlock:
 FUNC_3(&VAR_2->lock);
 return VAR_4;
}
