
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {scalar_t__ nIrq; scalar_t__ irq_wake; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct musb*) ;
 int FUNC_2 (struct musb*) ;

__attribute__((used)) static void FUNC_3(struct musb *VAR_0)
{





 if (VAR_0->nIrq >= 0) {
  if (VAR_0->irq_wake)
   FUNC_0(VAR_0->nIrq);
  FUNC_1(VAR_0->nIrq, VAR_0);
 }

 FUNC_2(VAR_0);
}
