
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_pmac_port {unsigned char* curregs; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 struct uart_pmac_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_pmac_port*,size_t,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_4)
{
 struct uart_pmac_port *VAR_5 = FUNC_1(VAR_4);
 unsigned char VAR_6;

 if (FUNC_0(VAR_5))
  return;
 VAR_6 = VAR_5->curregs[VAR_2] | (VAR_1 | VAR_3 | VAR_0);
 if (VAR_6 != VAR_5->curregs[VAR_2]) {
  VAR_5->curregs[VAR_2] = VAR_6;


  FUNC_2(VAR_5, VAR_2, VAR_5->curregs[VAR_2]);
 }
}
