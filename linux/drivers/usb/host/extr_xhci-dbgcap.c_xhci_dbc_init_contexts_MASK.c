
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {struct xhci_dbc* dbc; } ;
struct xhci_ep_ctx {void* deq; void* ep_info2; scalar_t__ ep_info; } ;
struct xhci_dbc {int string_dma; TYPE_4__* regs; TYPE_3__* ctx; TYPE_2__* ring_in; TYPE_1__* ring_out; } ;
struct dbc_info_context {void* length; void* serial; void* product; void* manufacturer; void* string0; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int devinfo2; int devinfo1; int dccp; int control; } ;
struct TYPE_7__ {int dma; scalar_t__ bytes; } ;
struct TYPE_6__ {int cycle_state; } ;
struct TYPE_5__ {int cycle_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct xhci_ep_ctx* FUNC_3 (struct xhci_dbc*) ;
 int FUNC_4 (struct xhci_dbc*) ;
 struct xhci_ep_ctx* FUNC_5 (struct xhci_dbc*) ;
 int FUNC_6 (struct xhci_dbc*) ;
 void* FUNC_7 (int ,int,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (struct xhci_hcd*,int ,int *) ;

__attribute__((used)) static void FUNC_11(struct xhci_hcd *VAR_7, u32 VAR_8)
{
 struct xhci_dbc *VAR_9;
 struct dbc_info_context *VAR_10;
 struct xhci_ep_ctx *VAR_11;
 u32 VAR_12;
 dma_addr_t VAR_13, VAR_14;
 unsigned int VAR_15;

 VAR_9 = VAR_7->dbc;
 if (!VAR_9)
  return;


 VAR_10 = (struct dbc_info_context *)VAR_9->ctx->bytes;
 VAR_14 = VAR_9->string_dma;
 VAR_10->string0 = FUNC_2(VAR_14);
 VAR_10->manufacturer = FUNC_2(VAR_14 + VAR_3);
 VAR_10->product = FUNC_2(VAR_14 + VAR_3 * 2);
 VAR_10->serial = FUNC_2(VAR_14 + VAR_3 * 3);
 VAR_10->length = FUNC_1(VAR_8);


 VAR_11 = FUNC_5(VAR_9);
 VAR_15 = FUNC_0(FUNC_8(&VAR_9->regs->control));
 VAR_13 = FUNC_6(VAR_9);
 VAR_11->ep_info = 0;
 VAR_11->ep_info2 = FUNC_7(VAR_1, 1024, VAR_15);
 VAR_11->deq = FUNC_2(VAR_13 | VAR_9->ring_out->cycle_state);


 VAR_11 = FUNC_3(VAR_9);
 VAR_13 = FUNC_4(VAR_9);
 VAR_11->ep_info = 0;
 VAR_11->ep_info2 = FUNC_7(VAR_0, 1024, VAR_15);
 VAR_11->deq = FUNC_2(VAR_13 | VAR_9->ring_in->cycle_state);


 FUNC_10(VAR_7, VAR_9->ctx->dma, &VAR_9->regs->dccp);

 VAR_12 = FUNC_1((VAR_6 << 16) | VAR_5);
 FUNC_9(VAR_12, &VAR_9->regs->devinfo1);

 VAR_12 = FUNC_1((VAR_2 << 16) | VAR_4);
 FUNC_9(VAR_12, &VAR_9->regs->devinfo2);
}
