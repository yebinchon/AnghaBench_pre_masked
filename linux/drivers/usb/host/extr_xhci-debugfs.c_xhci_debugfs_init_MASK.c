
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xhci_hcd {void* debugfs_root; void* debugfs_slots; int event_ring; int cmd_ring; TYPE_2__* cap_regs; int regset_list; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* controller; } ;
struct TYPE_6__ {TYPE_1__ self; } ;
struct TYPE_5__ {int run_regs_off; int hc_capbase; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (char*,void*) ;
 char* FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (struct xhci_hcd*,void*) ;
 int FUNC_7 (struct xhci_hcd*,int *,char*,void*) ;
 int FUNC_8 (struct xhci_hcd*,int ,int ,int ,char*) ;
 int FUNC_9 (struct xhci_hcd*,int,int ,int ,void*,char*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_10 (struct xhci_hcd*) ;

void FUNC_11(struct xhci_hcd *VAR_11)
{
 struct device *VAR_12 = FUNC_10(VAR_11)->self.controller;

 VAR_11->debugfs_root = FUNC_3(FUNC_4(VAR_12),
      VAR_5);

 FUNC_2(&VAR_11->regset_list);

 FUNC_9(VAR_11,
       0,
       VAR_4, FUNC_0(VAR_4),
       VAR_11->debugfs_root, "reg-cap");

 FUNC_9(VAR_11,
       FUNC_1(FUNC_5(&VAR_11->cap_regs->hc_capbase)),
       VAR_9, FUNC_0(VAR_9),
       VAR_11->debugfs_root, "reg-op");

 FUNC_9(VAR_11,
       FUNC_5(&VAR_11->cap_regs->run_regs_off) & VAR_0,
       VAR_10, FUNC_0(VAR_10),
       VAR_11->debugfs_root, "reg-runtime");

 FUNC_8(VAR_11, VAR_2,
       VAR_7,
       FUNC_0(VAR_7),
       "reg-ext-legsup");

 FUNC_8(VAR_11, VAR_3,
       VAR_8,
       FUNC_0(VAR_8),
       "reg-ext-protocol");

 FUNC_8(VAR_11, VAR_1,
       VAR_6,
       FUNC_0(VAR_6),
       "reg-ext-dbc");

 FUNC_7(VAR_11, &VAR_11->cmd_ring,
         "command-ring",
         VAR_11->debugfs_root);

 FUNC_7(VAR_11, &VAR_11->event_ring,
         "event-ring",
         VAR_11->debugfs_root);

 VAR_11->debugfs_slots = FUNC_3("devices", VAR_11->debugfs_root);

 FUNC_6(VAR_11, VAR_11->debugfs_root);
}
