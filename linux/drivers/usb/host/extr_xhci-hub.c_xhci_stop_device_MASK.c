
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_virt_device {int out_ctx; TYPE_2__* eps; } ;
struct xhci_hcd {int lock; struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct xhci_command {scalar_t__ status; int completion; } ;
struct TYPE_4__ {TYPE_1__* ring; } ;
struct TYPE_3__ {scalar_t__ dequeue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct xhci_ep_ctx*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct xhci_virt_device*) ;
 int FUNC_4 (int ) ;
 struct xhci_command* FUNC_5 (struct xhci_hcd*,int,int ) ;
 int FUNC_6 (struct xhci_hcd*,struct xhci_command*) ;
 struct xhci_ep_ctx* FUNC_7 (struct xhci_hcd*,int ,int) ;
 int FUNC_8 (struct xhci_hcd*,struct xhci_command*,int,int,int) ;
 int FUNC_9 (struct xhci_hcd*) ;
 int FUNC_10 (struct xhci_hcd*,char*) ;

__attribute__((used)) static int FUNC_11(struct xhci_hcd *VAR_9, int VAR_10, int VAR_11)
{
 struct xhci_virt_device *VAR_12;
 struct xhci_command *VAR_13;
 unsigned long VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = 0;
 VAR_12 = VAR_9->devs[VAR_10];
 if (!VAR_12)
  return -VAR_2;

 FUNC_3(VAR_12);

 VAR_13 = FUNC_5(VAR_9, 1, VAR_6);
 if (!VAR_13)
  return -VAR_3;

 FUNC_1(&VAR_9->lock, VAR_14);
 for (VAR_16 = VAR_8; VAR_16 > 0; VAR_16--) {
  if (VAR_12->eps[VAR_16].ring && VAR_12->eps[VAR_16].ring->dequeue) {
   struct xhci_ep_ctx *VAR_17;
   struct xhci_command *VAR_18;

   VAR_17 = FUNC_7(VAR_9, VAR_12->out_ctx, VAR_16);


   if (FUNC_0(VAR_17) != VAR_4)
    continue;

   VAR_18 = FUNC_5(VAR_9, 0, VAR_7);
   if (!VAR_18) {
    FUNC_2(&VAR_9->lock, VAR_14);
    VAR_15 = -VAR_3;
    goto cmd_cleanup;
   }

   VAR_15 = FUNC_8(VAR_9, VAR_18, VAR_10,
             VAR_16, VAR_11);
   if (VAR_15) {
    FUNC_2(&VAR_9->lock, VAR_14);
    FUNC_6(VAR_9, VAR_18);
    goto cmd_cleanup;
   }
  }
 }
 VAR_15 = FUNC_8(VAR_9, VAR_13, VAR_10, 0, VAR_11);
 if (VAR_15) {
  FUNC_2(&VAR_9->lock, VAR_14);
  goto cmd_cleanup;
 }

 FUNC_9(VAR_9);
 FUNC_2(&VAR_9->lock, VAR_14);


 FUNC_4(VAR_13->completion);

 if (VAR_13->status == VAR_0 ||
     VAR_13->status == VAR_1) {
  FUNC_10(VAR_9, "Timeout while waiting for stop endpoint command\n");
  VAR_15 = -VAR_5;
 }

cmd_cleanup:
 FUNC_6(VAR_9, VAR_13);
 return VAR_15;
}
