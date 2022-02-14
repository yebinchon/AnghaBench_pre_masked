
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tx; } ;
struct TYPE_8__ {TYPE_2__ icount; TYPE_3__* state; } ;
struct tegra_uart_port {TYPE_4__ uport; TYPE_1__* cdata; } ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_7__ {struct circ_buf xmit; } ;
struct TYPE_5__ {scalar_t__ tx_fifo_full_status; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (struct tegra_uart_port*,int ) ;
 int FUNC_2 (struct tegra_uart_port*,int ,int ) ;
 int FUNC_3 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_4(struct tegra_uart_port *VAR_4, int VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_4->uport.state->xmit;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_0(FUNC_3(VAR_6));
  if (VAR_4->cdata->tx_fifo_full_status) {
   unsigned long VAR_8 = FUNC_1(VAR_4, VAR_1);
   if ((VAR_8 & VAR_0))
    break;
  }
  FUNC_2(VAR_4, VAR_6->buf[VAR_6->tail], VAR_2);
  VAR_6->tail = (VAR_6->tail + 1) & (VAR_3 - 1);
  VAR_4->uport.icount.tx++;
 }
}
