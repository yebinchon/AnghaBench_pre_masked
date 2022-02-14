
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct signalfd_ctx {int sigmask; } ;
struct file {struct signalfd_ctx* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_6__ {TYPE_2__* sighand; TYPE_1__* signal; int pending; } ;
struct TYPE_5__ {int siglock; int signalfd_wqh; } ;
struct TYPE_4__ {int shared_pending; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_2, poll_table *VAR_3)
{
 struct signalfd_ctx *VAR_4 = VAR_2->private_data;
 __poll_t VAR_5 = 0;

 FUNC_1(VAR_2, &VAR_1->sighand->signalfd_wqh, VAR_3);

 FUNC_2(&VAR_1->sighand->siglock);
 if (FUNC_0(&VAR_1->pending, &VAR_4->sigmask) ||
     FUNC_0(&VAR_1->signal->shared_pending,
   &VAR_4->sigmask))
  VAR_5 |= VAR_0;
 FUNC_3(&VAR_1->sighand->siglock);

 return VAR_5;
}
