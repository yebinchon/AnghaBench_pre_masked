
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int f_lock; } ;
struct eventpoll {TYPE_2__* user; int lock; int rbr; } ;
struct TYPE_3__ {struct file* file; } ;
struct epitem {int rcu; int rdllink; int rbn; int fllink; TYPE_1__ ffd; } ;
struct TYPE_4__ {int epoll_watches; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct epitem*) ;
 int FUNC_3 (struct eventpoll*,struct epitem*) ;
 int FUNC_4 (struct epitem*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct eventpoll *VAR_1, struct epitem *VAR_2)
{
 struct file *VAR_3 = VAR_2->ffd.file;

 FUNC_7();




 FUNC_3(VAR_1, VAR_2);


 FUNC_9(&VAR_3->f_lock);
 FUNC_6(&VAR_2->fllink);
 FUNC_10(&VAR_3->f_lock);

 FUNC_8(&VAR_2->rbn, &VAR_1->rbr);

 FUNC_12(&VAR_1->lock);
 if (FUNC_2(VAR_2))
  FUNC_5(&VAR_2->rdllink);
 FUNC_13(&VAR_1->lock);

 FUNC_11(FUNC_4(VAR_2));







 FUNC_1(&VAR_2->rcu, VAR_0);

 FUNC_0(&VAR_1->user->epoll_watches);

 return 0;
}
