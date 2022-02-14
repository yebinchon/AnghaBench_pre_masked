
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int rx; } ;
struct uart_port {TYPE_2__* state; TYPE_1__ icount; } ;
struct tty_port {int dummy; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct tty_port*) ;
 int FUNC_2 (struct tty_port*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_4)
{
 struct tty_port *VAR_5 = &VAR_4->state->port;

 while (FUNC_0(VAR_4, VAR_2) & VAR_3) {
  u8 VAR_6 = FUNC_0(VAR_4, VAR_1);

  VAR_4->icount.rx++;
  FUNC_2(&VAR_4->state->port, VAR_6, VAR_0);
 }

 FUNC_1(VAR_5);
}
