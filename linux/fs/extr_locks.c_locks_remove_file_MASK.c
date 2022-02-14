
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock_context {int flc_lock; int flc_lease; int flc_flock; int flc_posix; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int i_flctx; } ;


 int FUNC_0 (struct file*,int *,char*) ;
 TYPE_1__* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,struct file_lock_context*) ;
 int FUNC_3 (struct file*,struct file_lock_context*) ;
 int FUNC_4 (struct file*,struct file*) ;
 struct file_lock_context* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct file *VAR_0)
{
 struct file_lock_context *VAR_1;

 VAR_1 = FUNC_5(&FUNC_1(VAR_0)->i_flctx);
 if (!VAR_1)
  return;


 FUNC_4(VAR_0, VAR_0);


 FUNC_2(VAR_0, VAR_1);


 FUNC_3(VAR_0, VAR_1);

 FUNC_6(&VAR_1->flc_lock);
 FUNC_0(VAR_0, &VAR_1->flc_posix, "POSIX");
 FUNC_0(VAR_0, &VAR_1->flc_flock, "FLOCK");
 FUNC_0(VAR_0, &VAR_1->flc_lease, "LEASE");
 FUNC_7(&VAR_1->flc_lock);
}
