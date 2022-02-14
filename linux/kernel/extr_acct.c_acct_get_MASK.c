
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int bacct; } ;
struct bsd_acct_struct {int lock; int count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bsd_acct_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct bsd_acct_struct* FUNC_9 (int ) ;

__attribute__((used)) static struct bsd_acct_struct *FUNC_10(struct pid_namespace *VAR_0)
{
 struct bsd_acct_struct *VAR_1;
again:
 FUNC_8();
 FUNC_6();
 VAR_1 = FUNC_9(FUNC_0(VAR_0->bacct));
 if (!VAR_1) {
  FUNC_7();
  return ((void*)0);
 }
 if (!FUNC_2(&VAR_1->count)) {
  FUNC_7();
  FUNC_3();
  goto again;
 }
 FUNC_7();
 FUNC_4(&VAR_1->lock);
 if (VAR_1 != FUNC_9(FUNC_0(VAR_0->bacct))) {
  FUNC_5(&VAR_1->lock);
  FUNC_1(VAR_1);
  goto again;
 }
 return VAR_1;
}
