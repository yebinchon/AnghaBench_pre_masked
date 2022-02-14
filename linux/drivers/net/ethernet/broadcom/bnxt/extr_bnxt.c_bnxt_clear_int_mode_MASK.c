
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int flags; int * irq_tbl; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_1->pdev);

 FUNC_0(VAR_1->irq_tbl);
 VAR_1->irq_tbl = ((void*)0);
 VAR_1->flags &= ~VAR_0;
}
