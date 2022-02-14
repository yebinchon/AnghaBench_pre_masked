
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv_udc {TYPE_1__* op_regs; scalar_t__ stopped; } ;
struct TYPE_2__ {int usbcmd; int usbintr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct mv_udc *VAR_6)
{
 u32 VAR_7;

 VAR_7 = VAR_3 | VAR_2
  | VAR_4
  | VAR_5 | VAR_1;

 FUNC_0(VAR_7, &VAR_6->op_regs->usbintr);

 VAR_6->stopped = 0;


 FUNC_0(VAR_0, &VAR_6->op_regs->usbcmd);
}
