
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct fotg210_qh* qh; } ;
struct fotg210_qh {scalar_t__ qh_state; scalar_t__ xacterrs; TYPE_2__* hw; TYPE_1__ qh_next; int clearing_tt; int qh_dma; } ;
struct fotg210_hcd {struct fotg210_qh* async; } ;
typedef int __hc32 ;
struct TYPE_4__ {int hw_next; } ;


 int FUNC_0 (struct fotg210_hcd*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fotg210_hcd*) ;
 int FUNC_3 (struct fotg210_hcd*,struct fotg210_qh*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct fotg210_hcd *VAR_2, struct fotg210_qh *VAR_3)
{
 __hc32 VAR_4 = FUNC_0(VAR_2, VAR_3->qh_dma);
 struct fotg210_qh *VAR_5;


 if (FUNC_4(VAR_3->clearing_tt))
  return;

 FUNC_1(VAR_3->qh_state != VAR_0);


 FUNC_3(VAR_2, VAR_3);


 VAR_5 = VAR_2->async;
 VAR_3->qh_next = VAR_5->qh_next;
 VAR_3->hw->hw_next = VAR_5->hw->hw_next;
 FUNC_5();

 VAR_5->qh_next.qh = VAR_3;
 VAR_5->hw->hw_next = VAR_4;

 VAR_3->xacterrs = 0;
 VAR_3->qh_state = VAR_1;


 FUNC_2(VAR_2);
}
