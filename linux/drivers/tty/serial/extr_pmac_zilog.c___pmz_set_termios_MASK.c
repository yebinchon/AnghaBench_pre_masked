
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_pmac_port {int* curregs; int flags; int port; int termios_cache; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct uart_pmac_port*) ;
 int FUNC_2 (int *,struct ktermios*,int) ;
 int FUNC_3 (struct uart_pmac_port*,int ,int ,unsigned long) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct uart_pmac_port*,unsigned long*) ;
 int FUNC_6 (struct uart_pmac_port*,int*) ;
 int FUNC_7 (struct uart_pmac_port*) ;
 struct uart_pmac_port* FUNC_8 (struct uart_port*) ;
 unsigned long FUNC_9 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_10 (struct uart_port*,int ,unsigned long) ;
 int FUNC_11 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_12(struct uart_port *VAR_5, struct ktermios *VAR_6,
         struct ktermios *VAR_7)
{
 struct uart_pmac_port *VAR_8 = FUNC_8(VAR_5);
 unsigned long VAR_9;

 FUNC_4("pmz: set_termios()\n");

 FUNC_2(&VAR_8->termios_cache, VAR_6, sizeof(struct ktermios));
 if (FUNC_1(VAR_8)) {

  VAR_9 = FUNC_9(VAR_5, VAR_6, VAR_7, 1200, 4000000);
  FUNC_4("pmz: switch IRDA to %ld bauds\n", VAR_9);

  FUNC_5(VAR_8, &VAR_9);

  FUNC_3(VAR_8, VAR_6->c_cflag, VAR_6->c_iflag, VAR_9);
  FUNC_6(VAR_8, VAR_8->curregs);
  FUNC_11(VAR_8);
 } else {
  VAR_9 = FUNC_9(VAR_5, VAR_6, VAR_7, 1200, 230400);
  FUNC_3(VAR_8, VAR_6->c_cflag, VAR_6->c_iflag, VAR_9);

  if (FUNC_0(&VAR_8->port, VAR_6->c_cflag)) {
   VAR_8->curregs[VAR_3] |= VAR_1 | VAR_4 | VAR_0;
   VAR_8->flags |= VAR_2;
  } else {
   VAR_8->curregs[VAR_3] &= ~(VAR_1 | VAR_4 | VAR_0);
   VAR_8->flags &= ~VAR_2;
  }


  FUNC_7(VAR_8);
 }
 FUNC_10(VAR_5, VAR_6->c_cflag, VAR_9);

 FUNC_4("pmz: set_termios() done.\n");
}
