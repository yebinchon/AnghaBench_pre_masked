
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ mapbase; } ;
struct stm32_usart_offsets {scalar_t__ rdr; } ;
struct stm32_port {int * rx_ch; int rx_dma_buf; int rx_buf; struct uart_port port; TYPE_1__* info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dma_slave_config {int src_addr_width; scalar_t__ src_addr; } ;
struct dma_async_tx_descriptor {int * callback_param; int * callback; } ;
typedef int dma_cookie_t ;
typedef int config ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (struct device*,char*) ;
 struct dma_async_tx_descriptor* FUNC_7 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int *,struct dma_slave_config*) ;
 int FUNC_9 (struct dma_async_tx_descriptor*) ;
 int FUNC_10 (struct dma_slave_config*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct stm32_port *VAR_8,
     struct platform_device *VAR_9)
{
 struct stm32_usart_offsets *VAR_10 = &VAR_8->info->ofs;
 struct uart_port *VAR_11 = &VAR_8->port;
 struct device *VAR_12 = &VAR_9->dev;
 struct dma_slave_config VAR_13;
 struct dma_async_tx_descriptor *VAR_14 = ((void*)0);
 dma_cookie_t VAR_15;
 int VAR_16;


 VAR_8->rx_ch = FUNC_6(VAR_12, "rx");
 if (!VAR_8->rx_ch) {
  FUNC_1(VAR_12, "rx dma alloc failed\n");
  return -VAR_3;
 }
 VAR_8->rx_buf = FUNC_2(&VAR_9->dev, VAR_6,
       &VAR_8->rx_dma_buf,
       VAR_5);
 if (!VAR_8->rx_buf) {
  VAR_16 = -VAR_4;
  goto alloc_err;
 }


 FUNC_10(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.src_addr = VAR_11->mapbase + VAR_10->rdr;
 VAR_13.src_addr_width = VAR_2;

 VAR_16 = FUNC_8(VAR_8->rx_ch, &VAR_13);
 if (VAR_16 < 0) {
  FUNC_0(VAR_12, "rx dma channel config failed\n");
  VAR_16 = -VAR_3;
  goto config_err;
 }


 VAR_14 = FUNC_7(VAR_8->rx_ch,
      VAR_8->rx_dma_buf,
      VAR_6, VAR_7, VAR_0,
      VAR_1);
 if (!VAR_14) {
  FUNC_0(VAR_12, "rx dma prep cyclic failed\n");
  VAR_16 = -VAR_3;
  goto config_err;
 }


 VAR_14->callback = ((void*)0);
 VAR_14->callback_param = ((void*)0);


 VAR_15 = FUNC_9(VAR_14);


 FUNC_3(VAR_8->rx_ch);

 return 0;

config_err:
 FUNC_4(&VAR_9->dev,
     VAR_6, VAR_8->rx_buf,
     VAR_8->rx_dma_buf);

alloc_err:
 FUNC_5(VAR_8->rx_ch);
 VAR_8->rx_ch = ((void*)0);

 return VAR_16;
}
