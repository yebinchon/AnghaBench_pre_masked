
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdevsim_shared_dev {int ddir; scalar_t__ refcnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct netdevsim_shared_dev*) ;

void FUNC_2(struct netdevsim_shared_dev *VAR_0)
{
 if (--VAR_0->refcnt)
  return;
 FUNC_0(VAR_0->ddir);
 FUNC_1(VAR_0);
}
