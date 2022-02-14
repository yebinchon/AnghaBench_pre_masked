
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct TYPE_7__ {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_8__ {TYPE_4__* desc; int cookie; int dma_addr; TYPE_1__ xmit; } ;
struct sirfsoc_uart_port {TYPE_3__* uart_reg; int is_atlas7; int rx_dma_chan; TYPE_2__ rx_dma_items; } ;
struct sirfsoc_register {int sirfsoc_int_en_reg; int sirfsoc_rx_dma_io_ctrl; } ;
struct sirfsoc_int_en {int dummy; } ;
struct TYPE_10__ {struct sirfsoc_uart_port* callback_param; int callback; } ;
struct TYPE_9__ {int uart_type; struct sirfsoc_int_en uart_int_en; struct sirfsoc_register uart_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sirfsoc_int_en*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ,int ,int,int,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct uart_port*,int ) ;
 int VAR_4 ;
 struct sirfsoc_uart_port* FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_5)
{
 struct sirfsoc_uart_port *VAR_6 = FUNC_7(VAR_5);
 struct sirfsoc_register *VAR_7 = &VAR_6->uart_reg->uart_reg;
 struct sirfsoc_int_en *VAR_8 = &VAR_6->uart_reg->uart_int_en;
 FUNC_8(VAR_5, VAR_7->sirfsoc_rx_dma_io_ctrl,
  FUNC_6(VAR_5, VAR_7->sirfsoc_rx_dma_io_ctrl) &
  ~VAR_3);
 VAR_6->rx_dma_items.xmit.tail =
  VAR_6->rx_dma_items.xmit.head = 0;
 VAR_6->rx_dma_items.desc =
  FUNC_4(VAR_6->rx_dma_chan,
  VAR_6->rx_dma_items.dma_addr, VAR_2,
  VAR_2 / 2,
  VAR_0, VAR_1);
 if (FUNC_0(VAR_6->rx_dma_items.desc)) {
  FUNC_2(VAR_5->dev, "DMA slave single fail\n");
  return;
 }
 VAR_6->rx_dma_items.desc->callback =
  VAR_4;
 VAR_6->rx_dma_items.desc->callback_param = VAR_6;
 VAR_6->rx_dma_items.cookie =
  FUNC_5(VAR_6->rx_dma_items.desc);
 FUNC_3(VAR_6->rx_dma_chan);
 if (!VAR_6->is_atlas7)
  FUNC_8(VAR_5, VAR_7->sirfsoc_int_en_reg,
    FUNC_6(VAR_5, VAR_7->sirfsoc_int_en_reg) |
    FUNC_1(VAR_8,
    VAR_6->uart_reg->uart_type));
 else
  FUNC_8(VAR_5, VAR_7->sirfsoc_int_en_reg,
    FUNC_1(VAR_8,
    VAR_6->uart_reg->uart_type));
}
