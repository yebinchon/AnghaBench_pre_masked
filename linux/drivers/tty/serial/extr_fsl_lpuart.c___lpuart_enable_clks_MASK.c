
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpuart_port {int ipg_clk; int baud_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct lpuart_port *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1) {
  VAR_2 = FUNC_1(VAR_0->ipg_clk);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_1(VAR_0->baud_clk);
  if (VAR_2) {
   FUNC_0(VAR_0->ipg_clk);
   return VAR_2;
  }
 } else {
  FUNC_0(VAR_0->baud_clk);
  FUNC_0(VAR_0->ipg_clk);
 }

 return 0;
}
