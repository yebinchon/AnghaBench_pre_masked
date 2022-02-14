
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct musb_hw_ep {int regs; int epnum; struct musb* musb; } ;
struct musb {int mregs; } ;
struct cppi41_dma_channel {int usb_toggle; struct musb_hw_ep* hw_ep; scalar_t__ is_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct musb*) ;
 int FUNC_1 (struct musb*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct cppi41_dma_channel *VAR_3)
{
 struct musb_hw_ep *VAR_4 = VAR_3->hw_ep;
 struct musb *VAR_5 = VAR_4->musb;
 u16 VAR_6;
 u8 VAR_7;

 if (VAR_3->is_tx)
  return;
 if (!FUNC_0(VAR_5))
  return;

 FUNC_2(VAR_5->mregs, VAR_4->epnum);
 VAR_6 = FUNC_3(VAR_4->regs, VAR_0);
 VAR_7 = VAR_6 & VAR_1 ? 1 : 0;






 if (!VAR_7 && VAR_7 == VAR_3->usb_toggle) {
  VAR_6 |= VAR_1 | VAR_2;
  FUNC_4(VAR_3->hw_ep->regs, VAR_0, VAR_6);
  FUNC_1(VAR_5, "Restoring DATA1 toggle.");
 }

 VAR_3->usb_toggle = VAR_7;
}
