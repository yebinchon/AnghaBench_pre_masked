
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int pdev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct be_adapter *VAR_0)
{
 if (FUNC_0(VAR_0))
  return 1;
 else
  return FUNC_1(VAR_0->pdev) == 0;
}
