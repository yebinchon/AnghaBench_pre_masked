
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {scalar_t__ error; int lock; int done; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* core_ping ) (struct venus_core*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct venus_core*,int) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(struct venus_core *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->lock);

 VAR_5 = VAR_4->ops->core_ping(VAR_4, 0xbeef);
 if (VAR_5)
  goto unlock;

 VAR_5 = FUNC_3(&VAR_4->done, VAR_3);
 if (!VAR_5) {
  VAR_5 = -VAR_1;
  goto unlock;
 }
 VAR_5 = 0;
 if (VAR_4->error != VAR_2)
  VAR_5 = -VAR_0;
unlock:
 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
