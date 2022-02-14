
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct udc_ep {int halted; int num; TYPE_1__* regs; } ;
struct TYPE_2__ {int ctl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct udc_ep*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct udc_ep *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->halted == 1) {
  VAR_3 = FUNC_2(&VAR_2->regs->ctl);

  if (!(VAR_3 & FUNC_0(VAR_1))) {
   VAR_3 |= FUNC_0(VAR_0);
   FUNC_3(VAR_3, &VAR_2->regs->ctl);
   VAR_2->halted = 0;
   FUNC_1(VAR_2, VAR_2->num);
  }
 }
}
