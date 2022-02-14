
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pmac_port {int* curregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (struct uart_pmac_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_pmac_port *VAR_5, int VAR_6)
{
 if (VAR_6) {
  VAR_5->curregs[1] |= VAR_1 | VAR_4;
  if (!FUNC_0(VAR_5))
   VAR_5->curregs[1] |= VAR_0;
 } else {
  VAR_5->curregs[1] &= ~(VAR_0 | VAR_4 | VAR_3);
 }
 FUNC_1(VAR_5, VAR_2, VAR_5->curregs[1]);
}
