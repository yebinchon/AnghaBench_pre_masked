
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct vcs_poll_data {TYPE_1__ notifier; int event; int waitq; int cons_num; } ;
struct file {int f_lock; struct vcs_poll_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vcs_poll_data*) ;
 struct vcs_poll_data* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (struct vcs_poll_data*) ;

__attribute__((used)) static struct vcs_poll_data *
FUNC_9(struct file *VAR_3)
{
 struct vcs_poll_data *VAR_4 = VAR_3->private_data, *VAR_5 = ((void*)0);

 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->cons_num = FUNC_0(FUNC_1(VAR_3));
 FUNC_2(&VAR_4->waitq);
 VAR_4->notifier.notifier_call = VAR_2;







 VAR_4->event = VAR_1;

 if (FUNC_5(&VAR_4->notifier) != 0) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }
 FUNC_6(&VAR_3->f_lock);
 if (!VAR_3->private_data) {
  VAR_3->private_data = VAR_4;
 } else {

  VAR_5 = VAR_4;
  VAR_4 = VAR_3->private_data;
 }
 FUNC_7(&VAR_3->f_lock);
 if (VAR_5)
  FUNC_8(VAR_5);

 return VAR_4;
}
