
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid {int dummy; } ;
struct file {int dummy; } ;
struct autofs_sb_info {int flags; int pipefd; int wq_mutex; struct file* pipe; struct pid* oz_pgrp; } ;
struct TYPE_2__ {int pipefd; } ;
struct autofs_dev_ioctl {TYPE_1__ setpipefd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_6 ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 struct pid* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct pid*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct pid*) ;
 int FUNC_9 (struct pid*,struct pid*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_7,
          struct autofs_sb_info *VAR_8,
          struct autofs_dev_ioctl *VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;
 struct pid *VAR_12 = ((void*)0);

 if (VAR_9->setpipefd.pipefd == -1)
  return -VAR_3;

 VAR_10 = VAR_9->setpipefd.pipefd;

 FUNC_4(&VAR_8->wq_mutex);
 if (!(VAR_8->flags & VAR_0)) {
  FUNC_5(&VAR_8->wq_mutex);
  return -VAR_2;
 } else {
  struct file *VAR_13;

  VAR_12 = FUNC_3(VAR_6, VAR_5);

  if (FUNC_6(VAR_12) != FUNC_6(VAR_8->oz_pgrp)) {
   FUNC_7("not allowed to change PID namespace\n");
   VAR_11 = -VAR_3;
   goto out;
  }

  VAR_13 = FUNC_1(VAR_10);
  if (!VAR_13) {
   VAR_11 = -VAR_1;
   goto out;
  }
  if (FUNC_0(VAR_13) < 0) {
   VAR_11 = -VAR_4;
   FUNC_2(VAR_13);
   goto out;
  }
  FUNC_9(VAR_8->oz_pgrp, VAR_12);
  VAR_8->pipefd = VAR_10;
  VAR_8->pipe = VAR_13;
  VAR_8->flags &= ~VAR_0;
 }
out:
 FUNC_8(VAR_12);
 FUNC_5(&VAR_8->wq_mutex);
 return VAR_11;
}
