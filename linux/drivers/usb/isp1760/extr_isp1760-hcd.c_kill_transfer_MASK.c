
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {int regs; } ;
struct urb {int pipe; } ;
struct isp1760_qh {int slot; } ;
struct isp1760_hcd {TYPE_2__* int_slots; TYPE_1__* atl_slots; } ;
struct TYPE_4__ {int * qtd; int * qh; } ;
struct TYPE_3__ {int * qtd; int * qh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct isp1760_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_2, struct urb *VAR_3,
  struct isp1760_qh *VAR_4)
{
 struct isp1760_hcd *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 FUNC_0(VAR_4->slot == -1);



 if (FUNC_5(VAR_3->pipe) || FUNC_4(VAR_3->pipe)) {
  VAR_6 = FUNC_2(VAR_2->regs, VAR_0);
  VAR_6 |= (1 << VAR_4->slot);
  FUNC_3(VAR_2->regs, VAR_0, VAR_6);
  VAR_5->atl_slots[VAR_4->slot].qh = ((void*)0);
  VAR_5->atl_slots[VAR_4->slot].qtd = ((void*)0);
 } else {
  VAR_6 = FUNC_2(VAR_2->regs, VAR_1);
  VAR_6 |= (1 << VAR_4->slot);
  FUNC_3(VAR_2->regs, VAR_1, VAR_6);
  VAR_5->int_slots[VAR_4->slot].qh = ((void*)0);
  VAR_5->int_slots[VAR_4->slot].qtd = ((void*)0);
 }

 VAR_4->slot = -1;
}
