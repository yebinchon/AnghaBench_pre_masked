
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xhci_virt_device {TYPE_1__* eps; int out_ctx; int in_ctx; } ;
struct xhci_input_control_ctx {int drop_flags; int add_flags; } ;
struct xhci_hcd {int quirks; struct xhci_virt_device** devs; } ;
struct xhci_event_cmd {int dummy; } ;
struct xhci_ep_ctx {int dummy; } ;
struct TYPE_2__ {unsigned int ep_state; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_hcd*,int,unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (struct xhci_ep_ctx*) ;
 int FUNC_3 (struct xhci_hcd*,int ,char*,unsigned int,unsigned int) ;
 struct xhci_ep_ctx* FUNC_4 (struct xhci_hcd*,int ,unsigned int) ;
 struct xhci_input_control_ctx* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct xhci_hcd*,char*) ;

__attribute__((used)) static void FUNC_8(struct xhci_hcd *VAR_4, int VAR_5,
  struct xhci_event_cmd *VAR_6, u32 VAR_7)
{
 struct xhci_virt_device *VAR_8;
 struct xhci_input_control_ctx *VAR_9;
 struct xhci_ep_ctx *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 u32 VAR_13, VAR_14;
 VAR_8 = VAR_4->devs[VAR_5];
 VAR_9 = FUNC_5(VAR_8->in_ctx);
 if (!VAR_9) {
  FUNC_7(VAR_4, "Could not get input context, bad type.\n");
  return;
 }

 VAR_13 = FUNC_0(VAR_9->add_flags);
 VAR_14 = FUNC_0(VAR_9->drop_flags);

 VAR_11 = FUNC_6(VAR_13) - 1;

 VAR_10 = FUNC_4(VAR_4, VAR_8->out_ctx, VAR_11);
 FUNC_2(VAR_10);







 if (VAR_4->quirks & VAR_2 &&
   VAR_11 != (unsigned int) -1 &&
   VAR_13 - VAR_1 == VAR_14) {
  VAR_12 = VAR_8->eps[VAR_11].ep_state;
  if (!(VAR_12 & VAR_0))
   return;
  FUNC_3(VAR_4, VAR_3,
    "Completed config ep cmd - "
    "last ep index = %d, state = %d",
    VAR_11, VAR_12);

  VAR_8->eps[VAR_11].ep_state &= ~VAR_0;
  FUNC_1(VAR_4, VAR_5, VAR_11);
  return;
 }
 return;
}
