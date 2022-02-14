
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct atmel_uart_port {struct atmel_dma_buffer* pdc_rx; } ;
struct atmel_dma_buffer {int buf; int dma_size; int dma_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct atmel_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct atmel_uart_port *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  struct atmel_dma_buffer *VAR_4 = &VAR_2->pdc_rx[VAR_3];

  FUNC_0(VAR_1->dev,
     VAR_4->dma_addr,
     VAR_4->dma_size,
     VAR_0);
  FUNC_1(VAR_4->buf);
 }
}
