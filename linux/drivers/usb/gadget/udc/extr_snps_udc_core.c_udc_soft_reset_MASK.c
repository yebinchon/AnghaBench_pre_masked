
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udc {scalar_t__ chiprev; TYPE_1__* regs; } ;
struct TYPE_2__ {int cfg; int irqsts; int ep_irqsts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct udc*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_4 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct udc *VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(VAR_5, "Soft reset\n");





 FUNC_5(VAR_3, &VAR_5->regs->ep_irqsts);

 FUNC_5(VAR_2, &VAR_5->regs->irqsts);




 if (VAR_5->chiprev != VAR_0) {
  FUNC_3(&VAR_4, VAR_6);
  FUNC_5(FUNC_0(VAR_1), &VAR_5->regs->cfg);
  FUNC_2(&VAR_5->regs->cfg);
  FUNC_4(&VAR_4, VAR_6);
 }
}
