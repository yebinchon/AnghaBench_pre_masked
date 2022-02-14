
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; struct tegra_tcu* private_data; } ;
struct tegra_tcu {int dummy; } ;
struct circ_buf {size_t tail; int * buf; int head; } ;
struct TYPE_2__ {struct circ_buf xmit; } ;


 unsigned long FUNC_0 (int ,size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (struct tegra_tcu*,int *,unsigned long) ;
 int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct tegra_tcu *VAR_2 = VAR_1->private_data;
 struct circ_buf *VAR_3 = &VAR_1->state->xmit;
 unsigned long VAR_4;

 for (;;) {
  VAR_4 = FUNC_0(VAR_3->head, VAR_3->tail, VAR_0);
  if (!VAR_4)
   break;

  FUNC_1(VAR_2, &VAR_3->buf[VAR_3->tail], VAR_4);
  VAR_3->tail = (VAR_3->tail + VAR_4) & (VAR_0 - 1);
 }

 FUNC_2(VAR_1);
}
