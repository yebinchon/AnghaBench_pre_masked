
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int brk; } ;
struct uart_port {int dev; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 unsigned short FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct tty_port*) ;
 scalar_t__ FUNC_5 (struct tty_port*,int ,int ) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_2)
{
 int VAR_3 = 0;
 unsigned short VAR_4 = FUNC_3(VAR_2, VAR_0);
 struct tty_port *VAR_5 = &VAR_2->state->port;

 if (FUNC_6(VAR_2))
  return 0;

 if (VAR_4 & FUNC_0(VAR_2)) {
  VAR_2->icount.brk++;


  if (FUNC_5(VAR_5, 0, VAR_1))
   VAR_3++;

  FUNC_1(VAR_2->dev, "BREAK detected\n");
 }

 if (VAR_3)
  FUNC_4(VAR_5);

 VAR_3 += FUNC_2(VAR_2);

 return VAR_3;
}
