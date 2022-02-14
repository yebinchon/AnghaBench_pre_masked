
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {int dev; TYPE_2__ icount; TYPE_1__* state; } ;
struct scatterlist {int dummy; } ;
struct eg20t_port {int nent; struct scatterlist* sg_tx_p; scalar_t__ tx_dma_use; int desc_tx; struct uart_port port; } ;
struct circ_buf {int tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scatterlist*,int,int ) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct eg20t_port*,int ) ;
 scalar_t__ FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
 struct eg20t_port *VAR_4 = VAR_3;
 struct uart_port *VAR_5 = &VAR_4->port;
 struct circ_buf *VAR_6 = &VAR_5->state->xmit;
 struct scatterlist *VAR_7 = VAR_4->sg_tx_p;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->nent; VAR_8++, VAR_7++) {
  VAR_6->tail += FUNC_4(VAR_7);
  VAR_5->icount.tx += FUNC_4(VAR_7);
 }
 VAR_6->tail &= VAR_2 - 1;
 FUNC_0(VAR_4->desc_tx);
 FUNC_1(VAR_5->dev, VAR_7, VAR_4->nent, VAR_0);
 VAR_4->tx_dma_use = 0;
 VAR_4->nent = 0;
 FUNC_2(VAR_4->sg_tx_p);
 FUNC_3(VAR_4, VAR_1);
}
