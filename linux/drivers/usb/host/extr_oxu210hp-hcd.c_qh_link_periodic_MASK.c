
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union ehci_shadow {struct ehci_qh* qh; scalar_t__ ptr; } ;
struct oxu_hcd {unsigned int periodic_size; scalar_t__* periodic; int periodic_sched; union ehci_shadow* pshadow; } ;
struct ehci_qh {unsigned int period; unsigned int start; int usecs; int c_usecs; scalar_t__ hw_next; int qh_state; int qh_dma; union ehci_shadow qh_next; int hw_info2; TYPE_1__* dev; } ;
typedef scalar_t__ __le32 ;
struct TYPE_5__ {int bandwidth_allocated; } ;
struct TYPE_6__ {TYPE_2__ self; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*,unsigned int,int,struct ehci_qh*,unsigned int,int,int) ;
 int FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (struct oxu_hcd*) ;
 union ehci_shadow* FUNC_6 (union ehci_shadow*,scalar_t__) ;
 int FUNC_7 (struct ehci_qh*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct oxu_hcd *VAR_4, struct ehci_qh *VAR_5)
{
 unsigned VAR_6;
 unsigned VAR_7 = VAR_5->period;

 FUNC_2(&VAR_5->dev->dev,
  "link qh%d-%04x/%p start %d [%d/%d us]\n",
  VAR_7, FUNC_4(&VAR_5->hw_info2) & (VAR_0 | VAR_1),
  VAR_5, VAR_5->start, VAR_5->usecs, VAR_5->c_usecs);


 if (VAR_7 == 0)
  VAR_7 = 1;

 for (VAR_6 = VAR_5->start; VAR_6 < VAR_4->periodic_size; VAR_6 += VAR_7) {
  union ehci_shadow *VAR_8 = &VAR_4->pshadow[VAR_6];
  __le32 *VAR_9 = &VAR_4->periodic[VAR_6];
  union ehci_shadow VAR_10 = *VAR_8;
  __le32 VAR_11 = 0;


  while (VAR_10.ptr) {
   VAR_11 = FUNC_1(*VAR_9);
   if (VAR_11 == VAR_3)
    break;
   VAR_8 = FUNC_6(VAR_8, VAR_11);
   VAR_9 = &VAR_10.qh->hw_next;
   VAR_10 = *VAR_8;
  }




  while (VAR_10.ptr && VAR_5 != VAR_10.qh) {
   if (VAR_5->period > VAR_10.qh->period)
    break;
   VAR_8 = &VAR_10.qh->qh_next;
   VAR_9 = &VAR_10.qh->hw_next;
   VAR_10 = *VAR_8;
  }

  if (VAR_5 != VAR_10.qh) {
   VAR_5->qh_next = VAR_10;
   if (VAR_10.qh)
    VAR_5->hw_next = *VAR_9;
   FUNC_8();
   VAR_8->qh = VAR_5;
   *VAR_9 = FUNC_0(VAR_5->qh_dma);
  }
 }
 VAR_5->qh_state = VAR_2;
 FUNC_7(VAR_5);


 FUNC_5(VAR_4)->self.bandwidth_allocated += VAR_5->period
  ? ((VAR_5->usecs + VAR_5->c_usecs) / VAR_5->period)
  : (VAR_5->usecs * 8);


 if (!VAR_4->periodic_sched++)
  return FUNC_3(VAR_4);

 return 0;
}
