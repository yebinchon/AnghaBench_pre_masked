
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {struct user_namespace* parent; } ;
struct linux_binprm {TYPE_1__* mm; int interp_flags; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct user_namespace* user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct file*) ;
 struct user_namespace* FUNC_1 (struct user_namespace*) ;
 struct user_namespace VAR_2 ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct user_namespace*,struct inode*) ;
 int FUNC_4 (struct user_namespace*) ;

void FUNC_5(struct linux_binprm *VAR_3, struct file *VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_4);
 if (FUNC_2(VAR_5, VAR_1) < 0) {
  struct user_namespace *VAR_6, *VAR_7;
  VAR_3->interp_flags |= VAR_0;


  VAR_7 = VAR_6 = VAR_3->mm->user_ns;
  while ((VAR_7 != &VAR_2) &&
         !FUNC_3(VAR_7, VAR_5))
   VAR_7 = VAR_7->parent;

  if (VAR_6 != VAR_7) {
   VAR_3->mm->user_ns = FUNC_1(VAR_7);
   FUNC_4(VAR_6);
  }
 }
}
