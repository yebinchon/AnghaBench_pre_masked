
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int ctrl_lock; struct pid* pgrp; int fasync; } ;
struct pid {int dummy; } ;
struct file {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct pid*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,struct file*,int,int *) ;
 int FUNC_2 (struct file*) ;
 struct tty_struct* FUNC_3 (struct file*) ;
 int FUNC_4 (struct pid*) ;
 int FUNC_5 (struct pid*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct pid* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct tty_struct*,int ,char*) ;

__attribute__((used)) static int FUNC_10(int VAR_3, struct file *VAR_4, int VAR_5)
{
 struct tty_struct *VAR_6 = FUNC_3(VAR_4);
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (FUNC_9(VAR_6, FUNC_2(VAR_4), "tty_fasync"))
  goto out;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6->fasync);
 if (VAR_8 <= 0)
  goto out;

 if (VAR_5) {
  enum pid_type VAR_9;
  struct pid *VAR_10;

  FUNC_6(&VAR_6->ctrl_lock, VAR_7);
  if (VAR_6->pgrp) {
   VAR_10 = VAR_6->pgrp;
   VAR_9 = VAR_0;
  } else {
   VAR_10 = FUNC_8(VAR_2);
   VAR_9 = VAR_1;
  }
  FUNC_4(VAR_10);
  FUNC_7(&VAR_6->ctrl_lock, VAR_7);
  FUNC_0(VAR_4, VAR_10, VAR_9, 0);
  FUNC_5(VAR_10);
  VAR_8 = 0;
 }
out:
 return VAR_8;
}
