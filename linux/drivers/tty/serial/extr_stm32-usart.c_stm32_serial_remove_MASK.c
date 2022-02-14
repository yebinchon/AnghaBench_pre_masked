
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct stm32_usart_offsets {int cr3; } ;
struct stm32_port {scalar_t__ wakeirq; int clk; scalar_t__ tx_dma_buf; int tx_buf; scalar_t__ tx_ch; scalar_t__ rx_dma_buf; int rx_buf; scalar_t__ rx_ch; TYPE_1__* info; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct uart_port* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct uart_port*,int ,int ) ;
 int VAR_4 ;
 struct stm32_port* FUNC_10 (struct uart_port*) ;
 int FUNC_11 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct uart_port *VAR_6 = FUNC_5(VAR_5);
 struct stm32_port *VAR_7 = FUNC_10(VAR_6);
 struct stm32_usart_offsets *VAR_8 = &VAR_7->info->ofs;
 int VAR_9;

 FUNC_7(&VAR_5->dev);

 FUNC_9(VAR_6, VAR_8->cr3, VAR_2);

 if (VAR_7->rx_ch)
  FUNC_4(VAR_7->rx_ch);

 if (VAR_7->rx_dma_buf)
  FUNC_3(&VAR_5->dev,
      VAR_0, VAR_7->rx_buf,
      VAR_7->rx_dma_buf);

 FUNC_9(VAR_6, VAR_8->cr3, VAR_3);

 if (VAR_7->tx_ch)
  FUNC_4(VAR_7->tx_ch);

 if (VAR_7->tx_dma_buf)
  FUNC_3(&VAR_5->dev,
      VAR_1, VAR_7->tx_buf,
      VAR_7->tx_dma_buf);

 if (VAR_7->wakeirq > 0) {
  FUNC_1(&VAR_5->dev);
  FUNC_2(&VAR_5->dev, 0);
 }

 FUNC_0(VAR_7->clk);

 VAR_9 = FUNC_11(&VAR_4, VAR_6);

 FUNC_6(&VAR_5->dev);
 FUNC_8(&VAR_5->dev);

 return VAR_9;
}
