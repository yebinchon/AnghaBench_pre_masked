
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; int dev; int name; int ops; struct tty_driver* driver; int SAK_work; int tty_files; int files_lock; int flow_lock; int ctrl_lock; int atomic_write_lock; int hangup_work; int read_wait; int write_wait; int ldisc_sem; int winsize_mutex; int termios_rwsem; int throttle_mutex; int legacy_mutex; int * pgrp; int * session; int magic; int kref; } ;
struct tty_driver {int ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (int *) ;
 struct tty_struct* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tty_struct*) ;
 scalar_t__ FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct tty_driver*,int,int ) ;

struct tty_struct *FUNC_13(struct tty_driver *VAR_4, int VAR_5)
{
 struct tty_struct *VAR_6;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_6(&VAR_6->kref);
 VAR_6->magic = VAR_1;
 if (FUNC_11(VAR_6)) {
  FUNC_5(VAR_6);
  return ((void*)0);
 }
 VAR_6->session = ((void*)0);
 VAR_6->pgrp = ((void*)0);
 FUNC_8(&VAR_6->legacy_mutex);
 FUNC_8(&VAR_6->throttle_mutex);
 FUNC_3(&VAR_6->termios_rwsem);
 FUNC_8(&VAR_6->winsize_mutex);
 FUNC_2(&VAR_6->ldisc_sem);
 FUNC_4(&VAR_6->write_wait);
 FUNC_4(&VAR_6->read_wait);
 FUNC_1(&VAR_6->hangup_work, VAR_3);
 FUNC_8(&VAR_6->atomic_write_lock);
 FUNC_9(&VAR_6->ctrl_lock);
 FUNC_9(&VAR_6->flow_lock);
 FUNC_9(&VAR_6->files_lock);
 FUNC_0(&VAR_6->tty_files);
 FUNC_1(&VAR_6->SAK_work, VAR_2);

 VAR_6->driver = VAR_4;
 VAR_6->ops = VAR_4->ops;
 VAR_6->index = VAR_5;
 FUNC_12(VAR_4, VAR_5, VAR_6->name);
 VAR_6->dev = FUNC_10(VAR_6);

 return VAR_6;
}
