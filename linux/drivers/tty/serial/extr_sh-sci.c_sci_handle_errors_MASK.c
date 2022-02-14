
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parity; int frame; int overrun; } ;
struct uart_port {int dev; TYPE_3__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct sci_port {TYPE_2__* params; } ;
struct TYPE_5__ {unsigned short overrun_mask; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned short FUNC_1 (struct uart_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 unsigned short FUNC_3 (struct uart_port*,int ) ;
 struct sci_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct tty_port*) ;
 scalar_t__ FUNC_6 (struct tty_port*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_4)
{
 int VAR_5 = 0;
 unsigned short VAR_6 = FUNC_3(VAR_4, VAR_0);
 struct tty_port *VAR_7 = &VAR_4->state->port;
 struct sci_port *VAR_8 = FUNC_4(VAR_4);


 if (VAR_6 & VAR_8->params->overrun_mask) {
  VAR_4->icount.overrun++;


  if (FUNC_6(VAR_7, 0, VAR_2))
   VAR_5++;

  FUNC_2(VAR_4->dev, "overrun error\n");
 }

 if (VAR_6 & FUNC_0(VAR_4)) {

  VAR_4->icount.frame++;

  if (FUNC_6(VAR_7, 0, VAR_1))
   VAR_5++;

  FUNC_2(VAR_4->dev, "frame error\n");
 }

 if (VAR_6 & FUNC_1(VAR_4)) {

  VAR_4->icount.parity++;

  if (FUNC_6(VAR_7, 0, VAR_3))
   VAR_5++;

  FUNC_2(VAR_4->dev, "parity error\n");
 }

 if (VAR_5)
  FUNC_5(VAR_7);

 return VAR_5;
}
