
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpuart_port {int ipg_clk; int baud_clk; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct lpuart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct lpuart_port *VAR_0)
{
 if (FUNC_1(VAR_0))
  return FUNC_0(VAR_0->baud_clk);

 return FUNC_0(VAR_0->ipg_clk);
}
