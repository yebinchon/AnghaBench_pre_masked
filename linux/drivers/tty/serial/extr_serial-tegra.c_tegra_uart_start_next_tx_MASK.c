
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* state; } ;
struct tegra_uart_port {scalar_t__ use_tx_pio; int current_baud; TYPE_2__ uport; } ;
struct circ_buf {size_t tail; int head; int * buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ,size_t,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct tegra_uart_port*,unsigned long) ;
 int FUNC_3 (struct tegra_uart_port*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tegra_uart_port *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 struct circ_buf *VAR_5 = &VAR_2->uport.state->xmit;

 if (!VAR_2->current_baud)
  return;

 VAR_3 = (unsigned long)&VAR_5->buf[VAR_5->tail];
 VAR_4 = FUNC_1(VAR_5->head, VAR_5->tail, VAR_1);
 if (!VAR_4)
  return;

 if (VAR_2->use_tx_pio || VAR_4 < VAR_0)
  FUNC_2(VAR_2, VAR_4);
 else if (FUNC_0(VAR_3) > 0)
  FUNC_2(VAR_2, FUNC_0(VAR_3));
 else
  FUNC_3(VAR_2, VAR_4);
}
