
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct atmel_uart_port {struct atmel_dma_buffer* pdc_rx; scalar_t__ pdc_rx_idx; scalar_t__ use_pdc_rx; } ;
struct atmel_dma_buffer {int dma_addr; scalar_t__ ofs; int dma_size; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uart_port*,int ,int ) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 struct atmel_uart_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_8)
{
 struct atmel_uart_port *VAR_9 = FUNC_5(VAR_8);
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  struct atmel_dma_buffer *VAR_11 = &VAR_9->pdc_rx[VAR_10];

  VAR_11->buf = FUNC_4(VAR_7, VAR_6);
  if (VAR_11->buf == ((void*)0)) {
   if (VAR_10 != 0) {
    FUNC_2(VAR_8->dev,
     VAR_9->pdc_rx[0].dma_addr,
     VAR_7,
     VAR_4);
    FUNC_3(VAR_9->pdc_rx[0].buf);
   }
   VAR_9->use_pdc_rx = 0;
   return -VAR_5;
  }
  VAR_11->dma_addr = FUNC_1(VAR_8->dev,
      VAR_11->buf,
      VAR_7,
      VAR_4);
  VAR_11->dma_size = VAR_7;
  VAR_11->ofs = 0;
 }

 VAR_9->pdc_rx_idx = 0;

 FUNC_0(VAR_8, VAR_3, VAR_9->pdc_rx[0].dma_addr);
 FUNC_0(VAR_8, VAR_0, VAR_7);

 FUNC_0(VAR_8, VAR_2,
     VAR_9->pdc_rx[1].dma_addr);
 FUNC_0(VAR_8, VAR_1, VAR_7);

 return 0;
}
