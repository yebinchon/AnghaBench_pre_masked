
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int dev; TYPE_1__* state; } ;
struct msm_dma {unsigned int count; int dir; int phys; int chan; int enable_bit; int cookie; TYPE_2__* desc; } ;
struct msm_port {scalar_t__ is_uartdm; int imr; struct msm_dma tx_dma; struct uart_port uart; } ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_5__ {struct msm_port* callback_param; int callback; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,unsigned int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 TYPE_2__* FUNC_5 (int ,int ,unsigned int,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_7 (struct uart_port*,int ) ;
 int FUNC_8 (struct uart_port*,unsigned int) ;
 int FUNC_9 (struct uart_port*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct msm_port *VAR_10, unsigned int VAR_11)
{
 struct circ_buf *VAR_12 = &VAR_10->uart.state->xmit;
 struct uart_port *VAR_13 = &VAR_10->uart;
 struct msm_dma *VAR_14 = &VAR_10->tx_dma;
 void *VAR_15;
 int VAR_16;
 u32 VAR_17;

 VAR_15 = &VAR_12->buf[VAR_12->tail];

 VAR_14->phys = FUNC_1(VAR_13->dev, VAR_15, VAR_11, VAR_14->dir);
 VAR_16 = FUNC_2(VAR_13->dev, VAR_14->phys);
 if (VAR_16)
  return VAR_16;

 VAR_14->desc = FUNC_5(VAR_14->chan, VAR_14->phys,
      VAR_11, VAR_0,
      VAR_2 |
      VAR_1);
 if (!VAR_14->desc) {
  VAR_16 = -VAR_3;
  goto unmap;
 }

 VAR_14->desc->callback = VAR_9;
 VAR_14->desc->callback_param = VAR_10;

 VAR_14->cookie = FUNC_6(VAR_14->desc);
 VAR_16 = FUNC_3(VAR_14->cookie);
 if (VAR_16)
  goto unmap;





 VAR_10->imr &= ~VAR_8;
 FUNC_9(VAR_13, VAR_10->imr, VAR_7);

 VAR_14->count = VAR_11;

 VAR_17 = FUNC_7(VAR_13, VAR_6);
 VAR_17 |= VAR_14->enable_bit;

 if (VAR_10->is_uartdm < VAR_5)
  FUNC_9(VAR_13, VAR_17, VAR_6);

 FUNC_8(VAR_13, VAR_11);

 if (VAR_10->is_uartdm > VAR_4)
  FUNC_9(VAR_13, VAR_17, VAR_6);

 FUNC_0(VAR_14->chan);
 return 0;
unmap:
 FUNC_4(VAR_13->dev, VAR_14->phys, VAR_11, VAR_14->dir);
 return VAR_16;
}
