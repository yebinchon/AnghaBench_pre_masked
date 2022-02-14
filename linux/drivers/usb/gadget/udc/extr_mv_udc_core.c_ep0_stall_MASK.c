
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv_udc {int ep0_dir; int ep0_state; TYPE_1__* op_regs; } ;
struct TYPE_2__ {int * epctrlx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct mv_udc *VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_0(&VAR_4->op_regs->epctrlx[0]);
 VAR_5 |= VAR_0 | VAR_1;
 FUNC_1(VAR_5, &VAR_4->op_regs->epctrlx[0]);


 VAR_4->ep0_state = VAR_3;
 VAR_4->ep0_dir = VAR_2;
}
