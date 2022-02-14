
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct linux_binprm {scalar_t__ interp; scalar_t__ filename; scalar_t__ file; scalar_t__ cred; } ;
struct TYPE_4__ {TYPE_1__* signal; } ;
struct TYPE_3__ {int cred_guard_mutex; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct linux_binprm*) ;
 int FUNC_4 (struct linux_binprm*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct linux_binprm *VAR_1)
{
 FUNC_3(VAR_1);
 if (VAR_1->cred) {
  FUNC_5(&VAR_0->signal->cred_guard_mutex);
  FUNC_0(VAR_1->cred);
 }
 if (VAR_1->file) {
  FUNC_1(VAR_1->file);
  FUNC_2(VAR_1->file);
 }

 if (VAR_1->interp != VAR_1->filename)
  FUNC_4(VAR_1->interp);
 FUNC_4(VAR_1);
}
