
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {int cmd_ring_state; int xhc_state; TYPE_1__* op_regs; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xhci_hcd*,int ,char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct xhci_hcd*) ;
 int FUNC_3 (struct xhci_hcd*,char*,int) ;

int FUNC_4(struct xhci_hcd *VAR_5)
{
 int VAR_6;
 FUNC_0(VAR_5, VAR_4, "// Halt the HC");
 FUNC_2(VAR_5);

 VAR_6 = FUNC_1(&VAR_5->op_regs->status,
   VAR_1, VAR_1, VAR_2);
 if (VAR_6) {
  FUNC_3(VAR_5, "Host halt failed, %d\n", VAR_6);
  return VAR_6;
 }
 VAR_5->xhc_state |= VAR_3;
 VAR_5->cmd_ring_state = VAR_0;
 return VAR_6;
}
