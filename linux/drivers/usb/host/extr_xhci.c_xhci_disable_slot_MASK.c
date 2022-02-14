
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {int xhc_state; int lock; TYPE_1__* op_regs; } ;
struct xhci_command {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xhci_command*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct xhci_command* FUNC_4 (struct xhci_hcd*,int,int ) ;
 int FUNC_5 (struct xhci_hcd*,int) ;
 int FUNC_6 (struct xhci_hcd*,struct xhci_command*,int ,int) ;
 int FUNC_7 (struct xhci_hcd*) ;

int FUNC_8(struct xhci_hcd *VAR_6, u32 VAR_7)
{
 struct xhci_command *VAR_8;
 unsigned long VAR_9;
 u32 VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_4(VAR_6, 0, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_5(VAR_6, VAR_7);

 FUNC_2(&VAR_6->lock, VAR_9);

 VAR_10 = FUNC_1(&VAR_6->op_regs->status);
 if (VAR_10 == 0xffffffff || (VAR_6->xhc_state & VAR_4) ||
   (VAR_6->xhc_state & VAR_5)) {
  FUNC_3(&VAR_6->lock, VAR_9);
  FUNC_0(VAR_8);
  return -VAR_0;
 }

 VAR_11 = FUNC_6(VAR_6, VAR_8, VAR_3,
    VAR_7);
 if (VAR_11) {
  FUNC_3(&VAR_6->lock, VAR_9);
  FUNC_0(VAR_8);
  return VAR_11;
 }
 FUNC_7(VAR_6);
 FUNC_3(&VAR_6->lock, VAR_9);
 return VAR_11;
}
