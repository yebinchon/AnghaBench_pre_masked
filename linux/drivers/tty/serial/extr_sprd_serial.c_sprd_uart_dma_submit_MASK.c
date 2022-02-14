
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct sprd_uart_dma {int chn; int cookie; int phys_addr; } ;
struct dma_async_tx_descriptor {struct uart_port* callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_async_tx_callback ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,int ,int ,int,unsigned long) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_5,
    struct sprd_uart_dma *VAR_6, u32 VAR_7,
    enum dma_transfer_direction VAR_8,
    dma_async_tx_callback VAR_9)
{
 struct dma_async_tx_descriptor *VAR_10;
 unsigned long VAR_11;

 VAR_11 = FUNC_0(VAR_1,
          VAR_3,
          VAR_2,
          VAR_4);

 VAR_10 = FUNC_3(VAR_6->chn, VAR_6->phys_addr, VAR_7,
           VAR_8, VAR_11);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->callback = VAR_9;
 VAR_10->callback_param = VAR_5;

 VAR_6->cookie = FUNC_4(VAR_10);
 if (FUNC_2(VAR_6->cookie))
  return FUNC_2(VAR_6->cookie);

 FUNC_1(VAR_6->chn);

 return 0;
}
