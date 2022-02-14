
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int slow_intr_mask; int ext_intr_handler_task; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct adapter *VAR_3)
{





 VAR_3->slow_intr_mask &= ~VAR_1;
 FUNC_1(VAR_3->slow_intr_mask | VAR_2,
     VAR_3->regs + VAR_0);
 FUNC_0(&VAR_3->ext_intr_handler_task);
}
