
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {scalar_t__ state; scalar_t__ error; int lock; int done; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* core_init ) (struct venus_core*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct venus_core*) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct venus_core *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(&VAR_5->lock);

 if (VAR_5->state >= VAR_0)
  goto unlock;

 FUNC_2(&VAR_5->done);

 VAR_6 = VAR_5->ops->core_init(VAR_5);
 if (VAR_6)
  goto unlock;

 VAR_6 = FUNC_4(&VAR_5->done, VAR_4);
 if (!VAR_6) {
  VAR_6 = -VAR_2;
  goto unlock;
 }

 VAR_6 = 0;

 if (VAR_5->error != VAR_3) {
  VAR_6 = -VAR_1;
  goto unlock;
 }

 VAR_5->state = VAR_0;
unlock:
 FUNC_1(&VAR_5->lock);
 return VAR_6;
}
