
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int can_stall; int waitq; } ;
struct ffs_data {TYPE_1__ ev; int ep0req_completion; int wait; int eps_lock; int mutex; int state; int opened; int ref; int io_completion_wq; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ffs_data*) ;
 struct ffs_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static struct ffs_data *FUNC_11(const char *VAR_2)
{
 struct ffs_data *VAR_3 = FUNC_6(sizeof *VAR_3, VAR_1);
 if (FUNC_10(!VAR_3))
  return ((void*)0);

 FUNC_0();

 VAR_3->io_completion_wq = FUNC_1("%s", 0, VAR_2);
 if (!VAR_3->io_completion_wq) {
  FUNC_5(VAR_3);
  return ((void*)0);
 }

 FUNC_8(&VAR_3->ref, 1);
 FUNC_2(&VAR_3->opened, 0);
 VAR_3->state = VAR_0;
 FUNC_7(&VAR_3->mutex);
 FUNC_9(&VAR_3->eps_lock);
 FUNC_4(&VAR_3->ev.waitq);
 FUNC_4(&VAR_3->wait);
 FUNC_3(&VAR_3->ep0req_completion);


 VAR_3->ev.can_stall = 1;

 return VAR_3;
}
