
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ mapbase; } ;
struct stm32_usart_offsets {scalar_t__ tdr; } ;
struct stm32_port {int tx_dma_busy; int * tx_ch; int tx_dma_buf; int tx_buf; struct uart_port port; TYPE_1__* info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dma_slave_config {int dst_addr_width; scalar_t__ dst_addr; } ;
typedef int config ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int ,int *,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (struct device*,char*) ;
 int FUNC_6 (int *,struct dma_slave_config*) ;
 int FUNC_7 (struct dma_slave_config*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct stm32_port *VAR_5,
     struct platform_device *VAR_6)
{
 struct stm32_usart_offsets *VAR_7 = &VAR_5->info->ofs;
 struct uart_port *VAR_8 = &VAR_5->port;
 struct device *VAR_9 = &VAR_6->dev;
 struct dma_slave_config VAR_10;
 int VAR_11;

 VAR_5->tx_dma_busy = 0;


 VAR_5->tx_ch = FUNC_5(VAR_9, "tx");
 if (!VAR_5->tx_ch) {
  FUNC_1(VAR_9, "tx dma alloc failed\n");
  return -VAR_1;
 }
 VAR_5->tx_buf = FUNC_2(&VAR_6->dev, VAR_4,
       &VAR_5->tx_dma_buf,
       VAR_3);
 if (!VAR_5->tx_buf) {
  VAR_11 = -VAR_2;
  goto alloc_err;
 }


 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.dst_addr = VAR_8->mapbase + VAR_7->tdr;
 VAR_10.dst_addr_width = VAR_0;

 VAR_11 = FUNC_6(VAR_5->tx_ch, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_9, "tx dma channel config failed\n");
  VAR_11 = -VAR_1;
  goto config_err;
 }

 return 0;

config_err:
 FUNC_3(&VAR_6->dev,
     VAR_4, VAR_5->tx_buf,
     VAR_5->tx_dma_buf);

alloc_err:
 FUNC_4(VAR_5->tx_ch);
 VAR_5->tx_ch = ((void*)0);

 return VAR_11;
}
