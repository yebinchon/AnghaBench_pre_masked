
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx; } ;
struct uart_port {TYPE_1__ icount; int dev; TYPE_2__* state; } ;
struct tty_port {int dummy; } ;
struct eg20t_port {int sg_rx; struct uart_port port; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_port*,int) ;
 int FUNC_3 (struct tty_port*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct eg20t_port *VAR_0, int VAR_1)
{
 int VAR_2;
 struct uart_port *VAR_3 = &VAR_0->port;
 struct tty_port *VAR_4 = &VAR_3->state->port;

 VAR_2 = FUNC_2(VAR_4, VAR_1);

 if (VAR_2 < VAR_1)
  FUNC_0(VAR_3->dev, "Rx overrun: dropping %u bytes\n",
    VAR_1 - VAR_2);
 if (!VAR_2)
  return 0;

 FUNC_3(VAR_4, FUNC_1(&VAR_0->sg_rx), VAR_1);

 VAR_3->icount.rx += VAR_2;

 return VAR_2;
}
