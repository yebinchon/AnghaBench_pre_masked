
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int fl_flags; } ;
struct plock_xop {int (* callback ) (struct file_lock*,int) ;struct file_lock* fl; struct file_lock flc; struct file* file; } ;
struct TYPE_2__ {int rv; scalar_t__ number; } ;
struct plock_op {TYPE_1__ info; int list; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct plock_xop*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct file*,struct file_lock*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct plock_op *VAR_2)
{
 struct file *VAR_3;
 struct file_lock *VAR_4;
 struct file_lock *VAR_5;
 int (*VAR_6)(struct file_lock *VAR_7, int VAR_8) = ((void*)0);
 struct plock_xop *VAR_9 = (struct plock_xop *)VAR_2;
 int VAR_10 = 0;

 FUNC_5(&VAR_1);
 if (!FUNC_2(&VAR_2->list)) {
  FUNC_3("dlm_plock_callback: op on list %llx",
     (unsigned long long)VAR_2->info.number);
  FUNC_1(&VAR_2->list);
 }
 FUNC_6(&VAR_1);


 VAR_3 = VAR_9->file;
 VAR_5 = &VAR_9->flc;
 VAR_4 = VAR_9->fl;
 VAR_6 = VAR_9->callback;

 if (VAR_2->info.rv) {
  VAR_6(VAR_4, VAR_2->info.rv);
  goto out;
 }


 VAR_5->fl_flags &= ~VAR_0;
 if (FUNC_4(VAR_3, VAR_5, ((void*)0))) {
  FUNC_3("dlm_plock_callback: vfs lock error %llx file %p fl %p",
     (unsigned long long)VAR_2->info.number, VAR_3, VAR_4);
 }

 VAR_10 = VAR_6(VAR_4, 0);
 if (VAR_10) {

  FUNC_3("dlm_plock_callback: lock granted after lock request "
     "failed; dangling lock!\n");
  goto out;
 }

out:
 FUNC_0(VAR_9);
 return VAR_10;
}
