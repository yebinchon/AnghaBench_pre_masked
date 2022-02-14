
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbu2ss_udc {TYPE_1__* p_regs; } ;
struct TYPE_2__ {int EP0_INT_ENA; int EP0_CONTROL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct nbu2ss_udc *VAR_3)
{
 FUNC_0(&VAR_3->p_regs->EP0_CONTROL, (VAR_0 | VAR_1));
 FUNC_1(&VAR_3->p_regs->EP0_INT_ENA, VAR_2);
}
