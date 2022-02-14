
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int pde_unload_lock; TYPE_1__* proc_fops; } ;
struct pde_opener {int closing; struct completion* c; int lh; struct file* file; } ;
struct file {int dummy; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {int (* release ) (int ,struct file*) ;} ;


 int FUNC_0 (struct completion) ;
 struct completion VAR_0 ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int ,struct pde_opener*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct file*) ;
 scalar_t__ FUNC_8 (struct completion*) ;
 int FUNC_9 (struct completion*) ;

__attribute__((used)) static void FUNC_10(struct proc_dir_entry *VAR_2, struct pde_opener *VAR_3)
{
 if (VAR_3->closing) {

  FUNC_0(VAR_0);
  VAR_3->c = &VAR_0;
  FUNC_6(&VAR_2->pde_unload_lock);
  FUNC_9(&VAR_0);
 } else {
  struct file *VAR_4;
  struct completion *VAR_5;

  VAR_3->closing = 1;
  FUNC_6(&VAR_2->pde_unload_lock);
  VAR_4 = VAR_3->file;
  VAR_2->proc_fops->release(FUNC_2(VAR_4), VAR_4);
  FUNC_5(&VAR_2->pde_unload_lock);

  FUNC_4(&VAR_3->lh);
  VAR_5 = VAR_3->c;
  FUNC_6(&VAR_2->pde_unload_lock);
  if (FUNC_8(VAR_5))
   FUNC_1(VAR_5);
  FUNC_3(VAR_1, VAR_3);
 }
}
