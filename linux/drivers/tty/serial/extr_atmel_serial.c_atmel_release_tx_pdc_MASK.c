
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct atmel_dma_buffer {int dma_size; int dma_addr; } ;
struct atmel_uart_port {struct atmel_dma_buffer pdc_tx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct atmel_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1)
{
 struct atmel_uart_port *VAR_2 = FUNC_1(VAR_1);
 struct atmel_dma_buffer *VAR_3 = &VAR_2->pdc_tx;

 FUNC_0(VAR_1->dev,
    VAR_3->dma_addr,
    VAR_3->dma_size,
    VAR_0);
}
