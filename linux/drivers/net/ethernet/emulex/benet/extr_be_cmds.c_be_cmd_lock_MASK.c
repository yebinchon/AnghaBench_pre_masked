
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int mbox_lock; int mcc_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_3(struct be_adapter *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  FUNC_0(&VAR_0->mcc_lock);
  return 0;
 } else {
  return FUNC_1(&VAR_0->mbox_lock);
 }
}
