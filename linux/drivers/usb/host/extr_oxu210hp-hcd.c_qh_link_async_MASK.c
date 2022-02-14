
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct oxu_hcd {TYPE_1__* regs; struct ehci_qh* async; } ;
struct TYPE_5__ {struct ehci_qh* qh; } ;
struct ehci_qh {scalar_t__ qh_state; int hw_next; TYPE_2__ qh_next; int qh_dma; } ;
typedef int __le32 ;
struct TYPE_6__ {int state; } ;
struct TYPE_4__ {int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct oxu_hcd*,int *,int ,int ,int) ;
 TYPE_3__* FUNC_2 (struct oxu_hcd*) ;
 int FUNC_3 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct oxu_hcd*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static void FUNC_8(struct oxu_hcd *VAR_7, struct ehci_qh *VAR_8)
{
 __le32 VAR_9 = FUNC_0(VAR_8->qh_dma);
 struct ehci_qh *VAR_10;


 VAR_10 = VAR_7->async;
 FUNC_5(VAR_7, VAR_6);
 if (!VAR_10->qh_next.qh) {
  u32 VAR_11 = FUNC_4(&VAR_7->regs->command);

  if (!(VAR_11 & VAR_0)) {

   (void)FUNC_1(VAR_7, &VAR_7->regs->status,
     VAR_5, 0, 150);
   VAR_11 |= VAR_0 | VAR_1;
   FUNC_7(VAR_11, &VAR_7->regs->command);
   FUNC_2(VAR_7)->state = VAR_2;

  }
 }


 if (VAR_8->qh_state == VAR_3)
  FUNC_3(VAR_7, VAR_8);


 VAR_8->qh_next = VAR_10->qh_next;
 VAR_8->hw_next = VAR_10->hw_next;
 FUNC_6();

 VAR_10->qh_next.qh = VAR_8;
 VAR_10->hw_next = VAR_9;

 VAR_8->qh_state = VAR_4;

}
