
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_qspi_regs {int clkctrl; } ;
struct ti_qspi {struct ti_qspi_regs ctx_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_qspi*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ti_qspi *VAR_1)
{
 struct ti_qspi_regs *VAR_2 = &VAR_1->ctx_reg;

 FUNC_0(VAR_1, VAR_2->clkctrl, VAR_0);
}
