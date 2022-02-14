
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,struct notifier_block*) ;

void FUNC_2(struct notifier_block *VAR_1)
{
 if (FUNC_1(&VAR_0, VAR_1))
  FUNC_0(((void*)0), "notifier chain unregister fail\n");
}
