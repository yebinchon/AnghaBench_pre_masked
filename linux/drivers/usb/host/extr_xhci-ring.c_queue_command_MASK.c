
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {int cmd_ring_reserved_trbs; int xhc_state; TYPE_1__* cmd_ring; int cmd_list; struct xhci_command* current_cmd; } ;
struct xhci_command {int cmd_list; int command_trb; } ;
struct TYPE_3__ {int cycle_state; int enqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct xhci_hcd*,TYPE_1__*,int ,int,int ) ;
 int FUNC_3 (struct xhci_hcd*,TYPE_1__*,int,int,int,int,int) ;
 int FUNC_4 (struct xhci_hcd*,char*) ;
 int FUNC_5 (struct xhci_hcd*,char*) ;
 int FUNC_6 (struct xhci_hcd*,int ) ;

__attribute__((used)) static int FUNC_7(struct xhci_hcd *VAR_6, struct xhci_command *VAR_7,
    u32 VAR_8, u32 VAR_9,
    u32 VAR_10, u32 VAR_11, bool VAR_12)
{
 int VAR_13 = VAR_6->cmd_ring_reserved_trbs;
 int VAR_14;

 if ((VAR_6->xhc_state & VAR_4) ||
  (VAR_6->xhc_state & VAR_5)) {
  FUNC_4(VAR_6, "xHCI dying or halted, can't queue_command\n");
  return -VAR_1;
 }

 if (!VAR_12)
  VAR_13++;

 VAR_14 = FUNC_2(VAR_6, VAR_6->cmd_ring, VAR_0,
   VAR_13, VAR_2);
 if (VAR_14 < 0) {
  FUNC_5(VAR_6, "ERR: No room for command on command ring\n");
  if (VAR_12)
   FUNC_5(VAR_6, "ERR: Reserved TRB counting for "
     "unfailable commands failed.\n");
  return VAR_14;
 }

 VAR_7->command_trb = VAR_6->cmd_ring->enqueue;


 if (FUNC_1(&VAR_6->cmd_list)) {
  VAR_6->current_cmd = VAR_7;
  FUNC_6(VAR_6, VAR_3);
 }

 FUNC_0(&VAR_7->cmd_list, &VAR_6->cmd_list);

 FUNC_3(VAR_6, VAR_6->cmd_ring, 0, VAR_8, VAR_9, VAR_10,
   VAR_11 | VAR_6->cmd_ring->cycle_state);
 return 0;
}
