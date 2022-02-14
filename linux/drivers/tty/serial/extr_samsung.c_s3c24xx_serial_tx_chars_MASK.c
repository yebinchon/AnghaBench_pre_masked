
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tx; } ;
struct uart_port {int fifosize; int lock; TYPE_4__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct s3c24xx_uart_port {int min_dma_size; TYPE_3__* info; TYPE_2__* dma; struct uart_port port; } ;
struct circ_buf {int tail; scalar_t__* buf; int head; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int tx_fifofull; } ;
struct TYPE_6__ {scalar_t__ tx_chan; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct s3c24xx_uart_port*,int) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (struct circ_buf*) ;
 scalar_t__ FUNC_10 (struct circ_buf*) ;
 scalar_t__ FUNC_11 (struct uart_port*) ;
 int FUNC_12 (struct uart_port*) ;
 int FUNC_13 (struct uart_port*,int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_5, void *VAR_6)
{
 struct s3c24xx_uart_port *VAR_7 = VAR_6;
 struct uart_port *VAR_8 = &VAR_7->port;
 struct circ_buf *VAR_9 = &VAR_8->state->xmit;
 unsigned long VAR_10;
 int VAR_11, VAR_12 = 0;

 FUNC_6(&VAR_8->lock, VAR_10);

 VAR_11 = FUNC_0(VAR_9->head, VAR_9->tail, VAR_3);

 if (VAR_7->dma && VAR_7->dma->tx_chan &&
     VAR_11 >= VAR_7->min_dma_size) {
  int VAR_13 = FUNC_1() -
   (VAR_9->tail & (FUNC_1() - 1));
  if (VAR_11-VAR_13 >= VAR_7->min_dma_size) {
   VAR_12 = VAR_11-VAR_13;
   VAR_11 = VAR_13;
  }
 }

 if (VAR_8->x_char) {
  FUNC_13(VAR_8, VAR_2, VAR_8->x_char);
  VAR_8->icount.tx++;
  VAR_8->x_char = 0;
  goto out;
 }





 if (FUNC_10(VAR_9) || FUNC_11(VAR_8)) {
  FUNC_4(VAR_8);
  goto out;
 }



 if (VAR_11 > VAR_8->fifosize) {
  VAR_11 = VAR_8->fifosize;
  VAR_12 = 0;
 }

 while (!FUNC_10(VAR_9) && VAR_11 > 0) {
  if (FUNC_2(VAR_8, VAR_1) & VAR_7->info->tx_fifofull)
   break;

  FUNC_13(VAR_8, VAR_2, VAR_9->buf[VAR_9->tail]);
  VAR_9->tail = (VAR_9->tail + 1) & (VAR_3 - 1);
  VAR_8->icount.tx++;
  VAR_11--;
 }

 if (!VAR_11 && VAR_12) {
  FUNC_3(VAR_7, VAR_12);
  goto out;
 }

 if (FUNC_9(VAR_9) < VAR_4) {
  FUNC_7(&VAR_8->lock);
  FUNC_12(VAR_8);
  FUNC_5(&VAR_8->lock);
 }

 if (FUNC_10(VAR_9))
  FUNC_4(VAR_8);

out:
 FUNC_8(&VAR_8->lock, VAR_10);
 return VAR_0;
}
