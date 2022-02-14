
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union fotg210_shadow {TYPE_4__* itd; TYPE_2__* fstn; TYPE_1__* qh; scalar_t__ ptr; } ;
struct fotg210_qh_hw {int hw_info2; int hw_next; } ;
struct fotg210_hcd {unsigned int uframe_periodic_max; union fotg210_shadow* pshadow; int * periodic; } ;
typedef int __hc32 ;
struct TYPE_8__ {union fotg210_shadow itd_next; int hw_next; TYPE_3__* stream; int * hw_transaction; } ;
struct TYPE_7__ {unsigned int usecs; } ;
struct TYPE_6__ {union fotg210_shadow fstn_next; int hw_next; int hw_prev; } ;
struct TYPE_5__ {unsigned int usecs; unsigned int c_usecs; union fotg210_shadow qh_next; struct fotg210_qh_hw* hw; } ;


 int FUNC_0 (struct fotg210_hcd*) ;
 int FUNC_1 (struct fotg210_hcd*,int ) ;


 int FUNC_2 (struct fotg210_hcd*,int) ;
 int FUNC_3 (struct fotg210_hcd*,char*) ;
 int FUNC_4 (struct fotg210_hcd*,char*,unsigned int,unsigned int) ;
 int FUNC_5 (struct fotg210_hcd*,int ) ;

__attribute__((used)) static unsigned short FUNC_6(struct fotg210_hcd *VAR_0,
  unsigned VAR_1, unsigned VAR_2)
{
 __hc32 *VAR_3 = &VAR_0->periodic[VAR_1];
 union fotg210_shadow *VAR_4 = &VAR_0->pshadow[VAR_1];
 unsigned VAR_5 = 0;
 struct fotg210_qh_hw *VAR_6;

 while (VAR_4->ptr) {
  switch (FUNC_5(VAR_0, FUNC_1(VAR_0, *VAR_3))) {
  case 128:
   VAR_6 = VAR_4->qh->hw;

   if (VAR_6->hw_info2 & FUNC_2(VAR_0, 1 << VAR_2))
    VAR_5 += VAR_4->qh->usecs;

   if (VAR_6->hw_info2 & FUNC_2(VAR_0,
     1 << (8 + VAR_2)))
    VAR_5 += VAR_4->qh->c_usecs;
   VAR_3 = &VAR_6->hw_next;
   VAR_4 = &VAR_4->qh->qh_next;
   break;

  default:



   if (VAR_4->fstn->hw_prev != FUNC_0(VAR_0))
    FUNC_3(VAR_0, "ignoring FSTN cost ...\n");

   VAR_3 = &VAR_4->fstn->hw_next;
   VAR_4 = &VAR_4->fstn->fstn_next;
   break;
  case 129:
   if (VAR_4->itd->hw_transaction[VAR_2])
    VAR_5 += VAR_4->itd->stream->usecs;
   VAR_3 = &VAR_4->itd->hw_next;
   VAR_4 = &VAR_4->itd->itd_next;
   break;
  }
 }
 if (VAR_5 > VAR_0->uframe_periodic_max)
  FUNC_4(VAR_0, "uframe %d sched overrun: %d usecs\n",
    VAR_1 * 8 + VAR_2, VAR_5);
 return VAR_5;
}
