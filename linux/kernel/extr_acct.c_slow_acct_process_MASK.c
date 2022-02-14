
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {struct pid_namespace* parent; } ;
struct bsd_acct_struct {int lock; } ;


 struct bsd_acct_struct* FUNC_0 (struct pid_namespace*) ;
 int FUNC_1 (struct bsd_acct_struct*) ;
 int FUNC_2 (struct bsd_acct_struct*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pid_namespace *VAR_0)
{
 for ( ; VAR_0; VAR_0 = VAR_0->parent) {
  struct bsd_acct_struct *VAR_1 = FUNC_0(VAR_0);
  if (VAR_1) {
   FUNC_2(VAR_1);
   FUNC_3(&VAR_1->lock);
   FUNC_1(VAR_1);
  }
 }
}
