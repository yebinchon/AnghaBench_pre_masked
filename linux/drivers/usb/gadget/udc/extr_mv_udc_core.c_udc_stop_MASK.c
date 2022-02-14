
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv_udc {int stopped; TYPE_1__* op_regs; } ;
struct TYPE_2__ {int usbcmd; int usbintr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct mv_udc *VAR_5)
{
 u32 VAR_6;


 VAR_6 = FUNC_0(&VAR_5->op_regs->usbintr);
 VAR_6 &= ~(VAR_2 | VAR_1 |
  VAR_3 | VAR_4);
 FUNC_1(VAR_6, &VAR_5->op_regs->usbintr);

 VAR_5->stopped = 1;


 VAR_6 = FUNC_0(&VAR_5->op_regs->usbcmd);
 VAR_6 &= ~VAR_0;
 FUNC_1(VAR_6, &VAR_5->op_regs->usbcmd);
}
