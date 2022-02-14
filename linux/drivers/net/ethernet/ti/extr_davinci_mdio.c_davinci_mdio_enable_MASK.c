
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct davinci_mdio_data {int clk_div; TYPE_1__* regs; } ;
struct TYPE_2__ {int control; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct davinci_mdio_data *VAR_1)
{

 FUNC_0(VAR_1->clk_div | VAR_0, &VAR_1->regs->control);
}
