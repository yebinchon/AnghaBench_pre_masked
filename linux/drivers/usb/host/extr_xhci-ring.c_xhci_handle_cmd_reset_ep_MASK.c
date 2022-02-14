
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * field; } ;
union xhci_trb {TYPE_3__ generic; } ;
typedef int u32 ;
struct xhci_virt_device {TYPE_2__* eps; TYPE_1__* in_ctx; int out_ctx; } ;
struct xhci_hcd {int quirks; struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct xhci_command {int dummy; } ;
struct TYPE_5__ {int ep_state; } ;
struct TYPE_4__ {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_hcd*,int,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct xhci_ep_ctx*) ;
 struct xhci_command* FUNC_4 (struct xhci_hcd*,int,int ) ;
 int FUNC_5 (struct xhci_hcd*,int ,char*,...) ;
 struct xhci_ep_ctx* FUNC_6 (struct xhci_hcd*,int ,unsigned int) ;
 int FUNC_7 (struct xhci_hcd*,struct xhci_command*,int ,int,int) ;
 int FUNC_8 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_9(struct xhci_hcd *VAR_6, int VAR_7,
  union xhci_trb *VAR_8, u32 VAR_9)
{
 struct xhci_virt_device *VAR_10;
 struct xhci_ep_ctx *VAR_11;
 unsigned int VAR_12;

 VAR_12 = FUNC_0(FUNC_1(VAR_8->generic.field[3]));
 VAR_10 = VAR_6->devs[VAR_7];
 VAR_11 = FUNC_6(VAR_6, VAR_10->out_ctx, VAR_12);
 FUNC_3(VAR_11);




 FUNC_5(VAR_6, VAR_5,
  "Ignoring reset ep completion code of %u", VAR_9);





 if (VAR_6->quirks & VAR_3) {
  struct xhci_command *VAR_13;

  VAR_13 = FUNC_4(VAR_6, 0, VAR_1);
  if (!VAR_13)
   return;

  FUNC_5(VAR_6, VAR_4,
    "Queueing configure endpoint command");
  FUNC_7(VAR_6, VAR_13,
    VAR_6->devs[VAR_7]->in_ctx->dma, VAR_7,
    0);
  FUNC_8(VAR_6);
 } else {

  VAR_6->devs[VAR_7]->eps[VAR_12].ep_state &= ~VAR_0;
 }


 if ((FUNC_1(VAR_8->generic.field[3])) & VAR_2)
  FUNC_2(VAR_6, VAR_7, VAR_12);
}
