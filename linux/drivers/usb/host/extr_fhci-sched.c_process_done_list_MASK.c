
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb_priv {scalar_t__ tds_cnt; scalar_t__ num_of_tds; scalar_t__ state; } ;
struct urb {struct urb_priv* hcpriv; } ;
struct td {struct ed* ed; struct urb* urb; } ;
struct fhci_hcd {TYPE_1__* timer; int lock; int hc_list; } ;
struct ed {scalar_t__ state; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int irq; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fhci_hcd*,struct ed*) ;
 int FUNC_3 (struct urb*,struct td*) ;
 struct td* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (struct fhci_hcd*) ;
 int FUNC_6 (struct fhci_hcd*,struct urb*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_5)
{
 struct urb *VAR_6;
 struct ed *VAR_7;
 struct td *VAR_8;
 struct urb_priv *VAR_9;
 struct fhci_hcd *VAR_10 = (struct fhci_hcd *)VAR_5;

 FUNC_0(VAR_10->timer->irq);
 FUNC_0(FUNC_5(VAR_10)->irq);
 FUNC_7(&VAR_10->lock);

 VAR_8 = FUNC_4(VAR_10->hc_list);
 while (VAR_8 != ((void*)0)) {
  VAR_6 = VAR_8->urb;
  VAR_9 = VAR_6->hcpriv;
  VAR_7 = VAR_8->ed;


  FUNC_3(VAR_6, VAR_8);
  VAR_9->tds_cnt++;







  if (VAR_9->tds_cnt == VAR_9->num_of_tds) {
   FUNC_6(VAR_10, VAR_6);
  } else if (VAR_9->state == VAR_4 &&
    VAR_7->state == VAR_2) {
   FUNC_2(VAR_10, VAR_7);
   VAR_7->state = VAR_1;
  } else if (VAR_7->state == VAR_0) {
   VAR_9->state = VAR_4;
   VAR_7->state = VAR_3;
   FUNC_2(VAR_10, VAR_7);
   VAR_7->state = VAR_1;
  }

  VAR_8 = FUNC_4(VAR_10->hc_list);
 }

 FUNC_8(&VAR_10->lock);
 FUNC_1(VAR_10->timer->irq);
 FUNC_1(FUNC_5(VAR_10)->irq);
}
