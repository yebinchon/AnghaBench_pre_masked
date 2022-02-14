
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int overrun; } ;
struct uart_port {int dev; TYPE_3__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct sci_port {TYPE_2__* params; } ;
struct plat_sci_reg {int size; } ;
struct TYPE_5__ {int overrun_mask; int overrun_reg; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct plat_sci_reg* FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,int) ;
 struct sci_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_1)
{
 struct tty_port *VAR_2 = &VAR_1->state->port;
 struct sci_port *VAR_3 = FUNC_4(VAR_1);
 const struct plat_sci_reg *VAR_4;
 int VAR_5 = 0;
 u16 VAR_6;

 VAR_4 = FUNC_1(VAR_1, VAR_3->params->overrun_reg);
 if (!VAR_4->size)
  return 0;

 VAR_6 = FUNC_2(VAR_1, VAR_3->params->overrun_reg);
 if (VAR_6 & VAR_3->params->overrun_mask) {
  VAR_6 &= ~VAR_3->params->overrun_mask;
  FUNC_3(VAR_1, VAR_3->params->overrun_reg, VAR_6);

  VAR_1->icount.overrun++;

  FUNC_6(VAR_2, 0, VAR_0);
  FUNC_5(VAR_2);

  FUNC_0(VAR_1->dev, "overrun error\n");
  VAR_5++;
 }

 return VAR_5;
}
