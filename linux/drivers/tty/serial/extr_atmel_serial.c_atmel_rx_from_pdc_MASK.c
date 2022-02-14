
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rx; } ;
struct uart_port {int lock; TYPE_2__ icount; int dev; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct atmel_uart_port {int pdc_rx_idx; struct atmel_dma_buffer* pdc_rx; } ;
struct atmel_dma_buffer {unsigned int dma_size; unsigned int dma_addr; unsigned int ofs; scalar_t__ buf; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int) ;
 int FUNC_2 (int ,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int ,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct atmel_uart_port* FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct tty_port*) ;
 int FUNC_10 (struct tty_port*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_9)
{
 struct atmel_uart_port *VAR_10 = FUNC_8(VAR_9);
 struct tty_port *VAR_11 = &VAR_9->state->port;
 struct atmel_dma_buffer *VAR_12;
 int VAR_13 = VAR_10->pdc_rx_idx;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;

 do {

  FUNC_1(VAR_9, VAR_3, VAR_6);

  VAR_12 = &VAR_10->pdc_rx[VAR_13];
  VAR_14 = FUNC_0(VAR_9, VAR_2) - VAR_12->dma_addr;
  VAR_15 = VAR_12->ofs;
  VAR_14 = FUNC_5(VAR_14, VAR_12->dma_size);

  if (FUNC_4(VAR_14 != VAR_15)) {
   FUNC_2(VAR_9->dev, VAR_12->dma_addr,
     VAR_12->dma_size, VAR_8);







   VAR_16 = VAR_14 - VAR_15;

   FUNC_10(VAR_11, VAR_12->buf + VAR_12->ofs,
      VAR_16);

   FUNC_3(VAR_9->dev, VAR_12->dma_addr,
     VAR_12->dma_size, VAR_8);

   VAR_9->icount.rx += VAR_16;
   VAR_12->ofs = VAR_14;
  }





  if (VAR_14 >= VAR_12->dma_size) {
   VAR_12->ofs = 0;
   FUNC_1(VAR_9, VAR_1, VAR_12->dma_addr);
   FUNC_1(VAR_9, VAR_0, VAR_12->dma_size);

   VAR_13 = !VAR_13;
   VAR_10->pdc_rx_idx = VAR_13;
  }
 } while (VAR_14 >= VAR_12->dma_size);





 FUNC_7(&VAR_9->lock);
 FUNC_9(VAR_11);
 FUNC_6(&VAR_9->lock);

 FUNC_1(VAR_9, VAR_5,
     VAR_4 | VAR_7);
}
