
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct user_namespace {int dummy; } ;
struct task_struct {int flags; struct mm_struct* mm; } ;
struct mm_struct {struct user_namespace* user_ns; } ;
struct cred {int egid; int euid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct user_namespace*,int ) ;
 int FUNC_4 (struct user_namespace*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct task_struct *VAR_7, umode_t VAR_8,
       kuid_t *VAR_9, kgid_t *VAR_10)
{



 const struct cred *VAR_11;
 kuid_t VAR_12;
 kgid_t VAR_13;

 if (FUNC_10(VAR_7->flags & VAR_2)) {
  *VAR_9 = VAR_1;
  *VAR_10 = VAR_0;
  return;
 }


 FUNC_5();
 VAR_11 = FUNC_0(VAR_7);
 VAR_12 = VAR_11->euid;
 VAR_13 = VAR_11->egid;
 FUNC_6();
 if (VAR_8 != (VAR_4|VAR_5|VAR_6)) {
  struct mm_struct *VAR_14;
  FUNC_7(VAR_7);
  VAR_14 = VAR_7->mm;

  if (VAR_14) {
   if (FUNC_1(VAR_14) != VAR_3) {
    struct user_namespace *VAR_15 = VAR_14->user_ns;

    VAR_12 = FUNC_4(VAR_15, 0);
    if (!FUNC_9(VAR_12))
     VAR_12 = VAR_1;

    VAR_13 = FUNC_3(VAR_15, 0);
    if (!FUNC_2(VAR_13))
     VAR_13 = VAR_0;
   }
  } else {
   VAR_12 = VAR_1;
   VAR_13 = VAR_0;
  }
  FUNC_8(VAR_7);
 }
 *VAR_9 = VAR_12;
 *VAR_10 = VAR_13;
}
