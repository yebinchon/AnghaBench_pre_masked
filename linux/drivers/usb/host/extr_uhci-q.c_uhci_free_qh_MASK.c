
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhci_qh {scalar_t__ state; int dma_handle; scalar_t__ dummy_td; TYPE_1__* hep; scalar_t__ udev; int node; int queue; } ;
struct uhci_hcd {int qh_pool; } ;
struct TYPE_2__ {int * hcpriv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,struct uhci_qh*) ;
 int FUNC_2 (int ,struct uhci_qh*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uhci_hcd*) ;
 int FUNC_6 (struct uhci_hcd*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uhci_hcd *VAR_1, struct uhci_qh *VAR_2)
{
 FUNC_0(VAR_2->state != VAR_0 && VAR_2->udev);
 if (!FUNC_4(&VAR_2->queue))
  FUNC_1(FUNC_5(VAR_1), "qh %p list not empty!\n", VAR_2);

 FUNC_3(&VAR_2->node);
 if (VAR_2->udev) {
  VAR_2->hep->hcpriv = ((void*)0);
  if (VAR_2->dummy_td)
   FUNC_6(VAR_1, VAR_2->dummy_td);
 }
 FUNC_2(VAR_1->qh_pool, VAR_2, VAR_2->dma_handle);
}
