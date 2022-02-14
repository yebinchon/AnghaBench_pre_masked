
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {TYPE_2__* state; } ;
struct s3c24xx_uart_port {unsigned long min_dma_size; TYPE_1__* dma; struct uart_port port; } ;
struct circ_buf {int tail; int head; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;
struct TYPE_3__ {int tx_chan; } ;


 unsigned long FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct s3c24xx_uart_port*,unsigned long) ;
 int FUNC_3 (struct s3c24xx_uart_port*) ;
 int FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct s3c24xx_uart_port *VAR_1)
{
 struct uart_port *VAR_2 = &VAR_1->port;
 struct circ_buf *VAR_3 = &VAR_2->state->xmit;
 unsigned long VAR_4;


 VAR_4 = FUNC_0(VAR_3->head, VAR_3->tail, VAR_0);

 if (!VAR_4) {
  FUNC_4(VAR_2);
  return;
 }

 if (!VAR_1->dma || !VAR_1->dma->tx_chan ||
     VAR_4 < VAR_1->min_dma_size ||
     VAR_3->tail & (FUNC_1() - 1))
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1, VAR_4);
}
