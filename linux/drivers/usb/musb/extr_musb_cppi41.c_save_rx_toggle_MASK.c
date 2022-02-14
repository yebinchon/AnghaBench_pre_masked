
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cppi41_dma_channel {int usb_toggle; TYPE_3__* hw_ep; TYPE_2__* controller; scalar_t__ is_tx; } ;
struct TYPE_6__ {int regs; } ;
struct TYPE_4__ {int musb; } ;
struct TYPE_5__ {TYPE_1__ controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cppi41_dma_channel *VAR_2)
{
 u16 VAR_3;
 u8 VAR_4;

 if (VAR_2->is_tx)
  return;
 if (!FUNC_0(VAR_2->controller->controller.musb))
  return;

 VAR_3 = FUNC_1(VAR_2->hw_ep->regs, VAR_0);
 VAR_4 = VAR_3 & VAR_1 ? 1 : 0;

 VAR_2->usb_toggle = VAR_4;
}
