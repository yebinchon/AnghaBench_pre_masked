
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct bnx2x *VAR_1)
{
 if (FUNC_2(VAR_1->pdev)) {
  FUNC_0(VAR_0,
     "Unloading driver while VFs are assigned - VFs will not be deallocated\n");
  return;
 }

 FUNC_1(VAR_1->pdev);
}
