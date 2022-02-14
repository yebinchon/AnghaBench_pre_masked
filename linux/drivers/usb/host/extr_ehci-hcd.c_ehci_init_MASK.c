
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int sg_tablesize; } ;
struct usb_hcd {TYPE_5__ self; int localmem_pool; } ;
struct ehci_qh_hw {void* hw_info1; int hw_alt_next; int hw_qtd_next; void* hw_token; int hw_next; } ;
struct TYPE_12__ {int function; } ;
struct ehci_hcd {int need_io_watchdog; int uframe_periodic_max; int periodic_size; int has_ppcd; int command; int old_current; TYPE_4__* async; scalar_t__ i_thresh; int tt_list; int cached_sitd_list; int cached_itd_list; int intr_qh_list; int intr_unlink; int intr_unlink_wait; int async_idle; int async_unlink; TYPE_1__* caps; int next_hrtimer_event; TYPE_6__ hrtimer; int lock; } ;
struct TYPE_8__ {int * qh; } ;
struct TYPE_10__ {TYPE_3__* dummy; int qh_state; int qh_dma; struct ehci_qh_hw* hw; TYPE_2__ qh_next; } ;
struct TYPE_9__ {int qtd_dma; } ;
struct TYPE_7__ {int hcc_params; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ehci_hcd*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct ehci_hcd*,int ) ;
 int VAR_10 ;
 int FUNC_9 (struct ehci_hcd*,int ) ;
 int VAR_11 ;
 void* FUNC_10 (struct ehci_hcd*,int ) ;
 int FUNC_11 (struct ehci_hcd*,char*,...) ;
 int VAR_12 ;
 int FUNC_12 (struct ehci_hcd*,int ) ;
 int FUNC_13 (struct ehci_hcd*,int *) ;
 struct ehci_hcd* FUNC_14 (struct usb_hcd*) ;
 int FUNC_15 (TYPE_6__*,int ,int ) ;
 int VAR_13 ;
 int FUNC_16 (int,unsigned int) ;
 int VAR_14 ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct usb_hcd *VAR_15)
{
 struct ehci_hcd *VAR_16 = FUNC_14(VAR_15);
 u32 VAR_17;
 int VAR_18;
 u32 VAR_19;
 struct ehci_qh_hw *VAR_20;

 FUNC_17(&VAR_16->lock);




 VAR_16->need_io_watchdog = 1;

 FUNC_15(&VAR_16->hrtimer, VAR_0, VAR_7);
 VAR_16->hrtimer.function = VAR_12;
 VAR_16->next_hrtimer_event = VAR_4;

 VAR_19 = FUNC_13(VAR_16, &VAR_16->caps->hcc_params);





 VAR_16->uframe_periodic_max = 100;





 VAR_16->periodic_size = VAR_3;
 FUNC_7(&VAR_16->async_unlink);
 FUNC_7(&VAR_16->async_idle);
 FUNC_7(&VAR_16->intr_unlink_wait);
 FUNC_7(&VAR_16->intr_unlink);
 FUNC_7(&VAR_16->intr_qh_list);
 FUNC_7(&VAR_16->cached_itd_list);
 FUNC_7(&VAR_16->cached_sitd_list);
 FUNC_7(&VAR_16->tt_list);

 if (FUNC_6(VAR_19)) {

  switch (VAR_5) {
  case 0: VAR_16->periodic_size = 1024; break;
  case 1: VAR_16->periodic_size = 512; break;
  case 2: VAR_16->periodic_size = 256; break;
  default: FUNC_0();
  }
 }
 if ((VAR_18 = FUNC_12(VAR_16, VAR_6)) < 0)
  return VAR_18;


 if (FUNC_3(VAR_19))
  VAR_16->i_thresh = 0;
 else
  VAR_16->i_thresh = 2 + FUNC_4(VAR_19);
 VAR_16->async->qh_next.qh = ((void*)0);
 VAR_20 = VAR_16->async->hw;
 VAR_20->hw_next = FUNC_8(VAR_16, VAR_16->async->qh_dma);
 VAR_20->hw_info1 = FUNC_10(VAR_16, VAR_8);



 VAR_20->hw_token = FUNC_10(VAR_16, VAR_11);
 VAR_20->hw_qtd_next = FUNC_1(VAR_16);
 VAR_16->async->qh_state = VAR_10;
 VAR_20->hw_alt_next = FUNC_9(VAR_16, VAR_16->async->dummy->qtd_dma);


 if (VAR_13 < 0 || VAR_13 > 6)
  VAR_13 = 0;
 VAR_17 = 1 << (16 + VAR_13);
 if (FUNC_5(VAR_19)) {
  VAR_16->has_ppcd = 1;
  FUNC_11(VAR_16, "enable per-port change event\n");
  VAR_17 |= VAR_2;
 }
 if (FUNC_2(VAR_19)) {







  if (VAR_14) {
   VAR_14 = FUNC_16(VAR_14, (unsigned) 3);
   VAR_17 |= VAR_1;
   VAR_17 |= VAR_14 << 8;
  }
  FUNC_11(VAR_16, "park %d\n", VAR_14);
 }
 if (FUNC_6(VAR_19)) {

  VAR_17 &= ~(3 << 2);
  VAR_17 |= (VAR_5 << 2);
 }
 VAR_16->command = VAR_17;


 if (!VAR_15->localmem_pool)
  VAR_15->self.sg_tablesize = ~0;


 VAR_16->old_current = ~0;
 return 0;
}
