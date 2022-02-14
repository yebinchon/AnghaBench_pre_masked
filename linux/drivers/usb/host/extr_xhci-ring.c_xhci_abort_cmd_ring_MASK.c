
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xhci_hcd {int lock; int cmd_ring_stop_completion; TYPE_1__* op_regs; } ;
struct TYPE_2__ {int cmd_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct xhci_hcd*) ;
 int FUNC_6 (struct xhci_hcd*,char*) ;
 int FUNC_7 (struct xhci_hcd*,char*,int) ;
 int FUNC_8 (struct xhci_hcd*) ;
 int FUNC_9 (struct xhci_hcd*,int ) ;
 int FUNC_10 (int *,int ,int ,int) ;
 int FUNC_11 (struct xhci_hcd*) ;
 int FUNC_12 (struct xhci_hcd*) ;
 int FUNC_13 (struct xhci_hcd*,int *) ;
 int FUNC_14 (struct xhci_hcd*,int,int *) ;

__attribute__((used)) static int FUNC_15(struct xhci_hcd *VAR_2, unsigned long VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 FUNC_6(VAR_2, "Abort command ring\n");

 FUNC_1(&VAR_2->cmd_ring_stop_completion);

 VAR_4 = FUNC_13(VAR_2, &VAR_2->op_regs->cmd_ring);
 FUNC_14(VAR_2, VAR_4 | VAR_0,
   &VAR_2->op_regs->cmd_ring);







 VAR_5 = FUNC_10(&VAR_2->op_regs->cmd_ring,
   VAR_1, 0, 5 * 1000 * 1000);
 if (VAR_5 < 0) {
  FUNC_7(VAR_2, "Abort failed to stop command ring: %d\n", VAR_5);
  FUNC_8(VAR_2);
  FUNC_11(VAR_2);
  return VAR_5;
 }






 FUNC_3(&VAR_2->lock, VAR_3);
 VAR_5 = FUNC_4(&VAR_2->cmd_ring_stop_completion,
       FUNC_0(2000));
 FUNC_2(&VAR_2->lock, VAR_3);
 if (!VAR_5) {
  FUNC_6(VAR_2, "No stop event for abort, ring start fail?\n");
  FUNC_5(VAR_2);
 } else {
  FUNC_9(VAR_2, FUNC_12(VAR_2));
 }
 return 0;
}
