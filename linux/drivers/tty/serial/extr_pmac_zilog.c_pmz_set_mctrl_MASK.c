
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_pmac_port {unsigned char* curregs; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_1 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_2 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_3 (struct uart_pmac_port*) ;
 int FUNC_4 (char*,unsigned char,unsigned char,unsigned char) ;
 struct uart_pmac_port* FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_pmac_port*,size_t,unsigned char) ;
 int FUNC_7 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_5, unsigned int VAR_6)
{
 struct uart_pmac_port *VAR_7 = FUNC_5(VAR_5);
 unsigned char VAR_8, VAR_9;


 if (FUNC_2(VAR_7))
  return;

 if (!(FUNC_3(VAR_7) || FUNC_0(VAR_7)))
  return;

 VAR_8 = VAR_9 = 0;

 if (FUNC_1(VAR_7)) {
  if (VAR_6 & VAR_4)
   VAR_8 |= VAR_2;
  else
   VAR_9 |= VAR_2;
 }
 if (VAR_6 & VAR_3)
  VAR_8 |= VAR_0;
 else
  VAR_9 |= VAR_0;


 VAR_7->curregs[VAR_1] |= VAR_8;
 VAR_7->curregs[VAR_1] &= ~VAR_9;

 FUNC_6(VAR_7, VAR_1, VAR_7->curregs[VAR_1]);
 FUNC_4("pmz_set_mctrl: set bits: %x, clear bits: %x -> %x\n",
    VAR_8, VAR_9, VAR_7->curregs[VAR_1]);
 FUNC_7(VAR_7);
}
