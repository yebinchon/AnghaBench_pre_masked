
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct TYPE_5__ {int rx; } ;
struct TYPE_6__ {int ignore_status_mask; int lock; TYPE_2__ icount; TYPE_1__* state; } ;
struct ar933x_uart_port {TYPE_3__ port; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct ar933x_uart_port*,int ) ;
 int FUNC_1 (struct ar933x_uart_port*,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_port*) ;
 int FUNC_5 (struct tty_port*,unsigned char,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,unsigned char) ;

__attribute__((used)) static void FUNC_7(struct ar933x_uart_port *VAR_5)
{
 struct tty_port *VAR_6 = &VAR_5->port.state->port;
 int VAR_7 = 256;

 do {
  unsigned int VAR_8;
  unsigned char VAR_9;

  VAR_8 = FUNC_0(VAR_5, VAR_1);
  if ((VAR_8 & VAR_2) == 0)
   break;


  FUNC_1(VAR_5, VAR_1,
      VAR_2);

  VAR_5->port.icount.rx++;
  VAR_9 = VAR_8 & VAR_3;

  if (FUNC_6(&VAR_5->port, VAR_9))
   continue;

  if ((VAR_5->port.ignore_status_mask & VAR_0) == 0)
   FUNC_5(VAR_6, VAR_9, VAR_4);
 } while (VAR_7-- > 0);

 FUNC_3(&VAR_5->port.lock);
 FUNC_4(VAR_6);
 FUNC_2(&VAR_5->port.lock);
}
