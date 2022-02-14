
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int mbox_lock; int mcc_lock; } ;


 void FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_0)
{
 if (FUNC_1(VAR_0))
  return FUNC_0(&VAR_0->mcc_lock);
 else
  return FUNC_0(&VAR_0->mbox_lock);
}
