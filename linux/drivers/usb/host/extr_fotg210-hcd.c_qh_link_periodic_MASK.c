
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union fotg210_shadow {struct fotg210_qh* qh; scalar_t__ ptr; } ;
struct fotg210_qh {unsigned int period; unsigned int start; int usecs; int c_usecs; int intr_node; scalar_t__ xacterrs; int qh_state; int qh_dma; TYPE_2__* hw; union fotg210_shadow qh_next; TYPE_1__* dev; } ;
struct fotg210_hcd {unsigned int periodic_size; scalar_t__* periodic; int intr_count; int intr_qh_list; union fotg210_shadow* pshadow; } ;
typedef scalar_t__ __hc32 ;
struct TYPE_7__ {int bandwidth_allocated; } ;
struct TYPE_8__ {TYPE_3__ self; } ;
struct TYPE_6__ {scalar_t__ hw_next; int hw_info2; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fotg210_hcd*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fotg210_hcd*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct fotg210_hcd*,int ) ;
 int FUNC_3 (int *,char*,unsigned int,int,struct fotg210_qh*,unsigned int,int,int) ;
 int FUNC_4 (struct fotg210_hcd*) ;
 TYPE_4__* FUNC_5 (struct fotg210_hcd*) ;
 int FUNC_6 (struct fotg210_hcd*,int *) ;
 int FUNC_7 (int *,int *) ;
 union fotg210_shadow* FUNC_8 (struct fotg210_hcd*,union fotg210_shadow*,scalar_t__) ;
 scalar_t__* FUNC_9 (struct fotg210_hcd*,union fotg210_shadow*,scalar_t__) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct fotg210_hcd *VAR_4, struct fotg210_qh *VAR_5)
{
 unsigned VAR_6;
 unsigned VAR_7 = VAR_5->period;

 FUNC_3(&VAR_5->dev->dev,
   "link qh%d-%04x/%p start %d [%d/%d us]\n", VAR_7,
   FUNC_6(VAR_4, &VAR_5->hw->hw_info2) &
   (VAR_0 | VAR_1), VAR_5, VAR_5->start, VAR_5->usecs,
   VAR_5->c_usecs);


 if (VAR_7 == 0)
  VAR_7 = 1;

 for (VAR_6 = VAR_5->start; VAR_6 < VAR_4->periodic_size; VAR_6 += VAR_7) {
  union fotg210_shadow *VAR_8 = &VAR_4->pshadow[VAR_6];
  __hc32 *VAR_9 = &VAR_4->periodic[VAR_6];
  union fotg210_shadow VAR_10 = *VAR_8;
  __hc32 VAR_11 = 0;


  while (VAR_10.ptr) {
   VAR_11 = FUNC_1(VAR_4, *VAR_9);
   if (VAR_11 == FUNC_2(VAR_4, VAR_3))
    break;
   VAR_8 = FUNC_8(VAR_4, VAR_8, VAR_11);
   VAR_9 = FUNC_9(VAR_4, &VAR_10, VAR_11);
   VAR_10 = *VAR_8;
  }




  while (VAR_10.ptr && VAR_5 != VAR_10.qh) {
   if (VAR_5->period > VAR_10.qh->period)
    break;
   VAR_8 = &VAR_10.qh->qh_next;
   VAR_9 = &VAR_10.qh->hw->hw_next;
   VAR_10 = *VAR_8;
  }

  if (VAR_5 != VAR_10.qh) {
   VAR_5->qh_next = VAR_10;
   if (VAR_10.qh)
    VAR_5->hw->hw_next = *VAR_9;
   FUNC_10();
   VAR_8->qh = VAR_5;
   *VAR_9 = FUNC_0(VAR_4, VAR_5->qh_dma);
  }
 }
 VAR_5->qh_state = VAR_2;
 VAR_5->xacterrs = 0;


 FUNC_5(VAR_4)->self.bandwidth_allocated += VAR_5->period
  ? ((VAR_5->usecs + VAR_5->c_usecs) / VAR_5->period)
  : (VAR_5->usecs * 8);

 FUNC_7(&VAR_5->intr_node, &VAR_4->intr_qh_list);


 ++VAR_4->intr_count;
 FUNC_4(VAR_4);
}
