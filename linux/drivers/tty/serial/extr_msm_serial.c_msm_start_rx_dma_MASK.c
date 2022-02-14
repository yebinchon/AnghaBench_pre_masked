
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int dev; } ;
struct msm_dma {int count; int enable_bit; int dir; int phys; int chan; int cookie; TYPE_1__* desc; int virt; } ;
struct msm_port {int imr; scalar_t__ is_uartdm; struct uart_port uart; struct msm_dma rx_dma; } ;
struct TYPE_3__ {struct msm_port* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 TYPE_1__* FUNC_5 (int ,int ,int,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_7 (struct uart_port*,int ) ;
 int FUNC_8 (struct uart_port*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct msm_port *VAR_14)
{
 struct msm_dma *VAR_15 = &VAR_14->rx_dma;
 struct uart_port *VAR_16 = &VAR_14->uart;
 u32 VAR_17;
 int VAR_18;

 if (!VAR_15->chan)
  return;

 VAR_15->phys = FUNC_1(VAR_16->dev, VAR_15->virt,
       VAR_6, VAR_15->dir);
 VAR_18 = FUNC_2(VAR_16->dev, VAR_15->phys);
 if (VAR_18)
  return;

 VAR_15->desc = FUNC_5(VAR_15->chan, VAR_15->phys,
      VAR_6, VAR_0,
      VAR_1);
 if (!VAR_15->desc)
  goto unmap;

 VAR_15->desc->callback = VAR_13;
 VAR_15->desc->callback_param = VAR_14;

 VAR_15->cookie = FUNC_6(VAR_15->desc);
 VAR_18 = FUNC_3(VAR_15->cookie);
 if (VAR_18)
  goto unmap;




 VAR_14->imr &= ~(VAR_11 | VAR_12);





 if (VAR_14->is_uartdm < VAR_3)
  VAR_14->imr |= VAR_12;

 FUNC_8(VAR_16, VAR_14->imr, VAR_10);

 VAR_15->count = VAR_6;

 FUNC_0(VAR_15->chan);

 FUNC_8(VAR_16, VAR_8, VAR_7);
 FUNC_8(VAR_16, VAR_9, VAR_7);

 VAR_17 = FUNC_7(VAR_16, VAR_4);
 VAR_17 |= VAR_15->enable_bit;

 if (VAR_14->is_uartdm < VAR_3)
  FUNC_8(VAR_16, VAR_17, VAR_4);

 FUNC_8(VAR_16, VAR_6, VAR_5);

 if (VAR_14->is_uartdm > VAR_2)
  FUNC_8(VAR_16, VAR_17, VAR_4);

 return;
unmap:
 FUNC_4(VAR_16->dev, VAR_15->phys, VAR_6, VAR_15->dir);
}
