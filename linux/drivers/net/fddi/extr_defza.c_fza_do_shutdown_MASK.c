
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fza_private {TYPE_1__* regs; } ;
struct TYPE_2__ {int reset; int control_b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct fza_private *VAR_3)
{

 FUNC_1(VAR_0, &VAR_3->regs->control_b);


 FUNC_1(VAR_2, &VAR_3->regs->reset);
 FUNC_0(&VAR_3->regs->reset);
 FUNC_1(VAR_1, &VAR_3->regs->reset);
 FUNC_0(&VAR_3->regs->reset);
}
