
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv_udc {TYPE_1__* op_regs; } ;
struct TYPE_2__ {int * portsc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct mv_udc *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(&VAR_0->op_regs->portsc[0]);
 VAR_2 |= VAR_1 << 16;
 FUNC_1(VAR_2, &VAR_0->op_regs->portsc[0]);
}
