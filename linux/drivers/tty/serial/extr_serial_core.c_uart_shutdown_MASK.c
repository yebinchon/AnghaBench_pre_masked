
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* buf; } ;
struct tty_port {int dummy; } ;
struct uart_state {TYPE_3__ xmit; struct tty_port port; } ;
struct uart_port {TYPE_1__* cons; } ;
struct TYPE_5__ {int c_cflag; } ;
struct tty_struct {TYPE_2__ termios; int flags; } ;
struct TYPE_4__ {int cflag; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_port*,int ) ;
 int FUNC_5 (struct tty_port*,int ) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 struct uart_port* FUNC_7 (struct uart_state*) ;
 int FUNC_8 (struct uart_port*,int ) ;
 int FUNC_9 (struct uart_state*,unsigned long) ;
 int FUNC_10 (struct tty_port*) ;
 int FUNC_11 (struct uart_port*,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct tty_struct *VAR_1, struct uart_state *VAR_2)
{
 struct uart_port *VAR_3 = FUNC_7(VAR_2);
 struct tty_port *VAR_4 = &VAR_2->port;
 unsigned long VAR_5 = 0;
 char *VAR_6 = ((void*)0);




 if (VAR_1)
  FUNC_2(VAR_0, &VAR_1->flags);

 if (FUNC_3(VAR_4)) {
  FUNC_4(VAR_4, 0);




  if (VAR_3 && FUNC_6(VAR_3) && VAR_1)
   VAR_3->cons->cflag = VAR_1->termios.c_cflag;

  if (!VAR_1 || FUNC_0(VAR_1))
   FUNC_8(VAR_3, 0);

  FUNC_10(VAR_4);
 }






 FUNC_5(VAR_4, 0);







 FUNC_9(VAR_2, VAR_5);
 VAR_6 = VAR_2->xmit.buf;
 VAR_2->xmit.buf = ((void*)0);
 FUNC_11(VAR_3, VAR_5);

 if (VAR_6)
  FUNC_1((unsigned long)VAR_6);
}
