
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ehci_sitd {int dummy; } ;
struct ehci_qtd {int dummy; } ;
struct ehci_qh_hw {void* hw_alt_next; void* hw_qtd_next; void* hw_next; } ;
struct ehci_itd {int dummy; } ;
struct ehci_hcd {int periodic_size; int * pshadow; void** periodic; TYPE_2__* dummy; scalar_t__ use_dummy_qh; int periodic_dma; void* sitd_pool; void* itd_pool; void* async; void* qh_pool; void* qtd_pool; } ;
typedef int gfp_t ;
typedef void* __le32 ;
struct TYPE_4__ {int sysdev; } ;
struct TYPE_6__ {TYPE_1__ self; } ;
struct TYPE_5__ {int qh_dma; struct ehci_qh_hw* hw; } ;


 void* FUNC_0 (struct ehci_hcd*) ;
 int VAR_0 ;
 void* FUNC_1 (struct ehci_hcd*,int ) ;
 scalar_t__ FUNC_2 (int ,int,int *,int ) ;
 void* FUNC_3 (char*,int ,int,int,int) ;
 int FUNC_4 (struct ehci_hcd*,char*) ;
 int FUNC_5 (struct ehci_hcd*) ;
 void* FUNC_6 (struct ehci_hcd*,int ) ;
 TYPE_3__* FUNC_7 (struct ehci_hcd*) ;
 int * FUNC_8 (int,int,int ) ;

__attribute__((used)) static int FUNC_9 (struct ehci_hcd *VAR_1, gfp_t VAR_2)
{
 int VAR_3;


 VAR_1->qtd_pool = FUNC_3 ("ehci_qtd",
   FUNC_7(VAR_1)->self.sysdev,
   sizeof (struct ehci_qtd),
   32 ,
   4096 );
 if (!VAR_1->qtd_pool) {
  goto fail;
 }


 VAR_1->qh_pool = FUNC_3 ("ehci_qh",
   FUNC_7(VAR_1)->self.sysdev,
   sizeof(struct ehci_qh_hw),
   32 ,
   4096 );
 if (!VAR_1->qh_pool) {
  goto fail;
 }
 VAR_1->async = FUNC_6 (VAR_1, VAR_2);
 if (!VAR_1->async) {
  goto fail;
 }


 VAR_1->itd_pool = FUNC_3 ("ehci_itd",
   FUNC_7(VAR_1)->self.sysdev,
   sizeof (struct ehci_itd),
   32 ,
   4096 );
 if (!VAR_1->itd_pool) {
  goto fail;
 }


 VAR_1->sitd_pool = FUNC_3 ("ehci_sitd",
   FUNC_7(VAR_1)->self.sysdev,
   sizeof (struct ehci_sitd),
   32 ,
   4096 );
 if (!VAR_1->sitd_pool) {
  goto fail;
 }


 VAR_1->periodic = (__le32 *)
  FUNC_2(FUNC_7(VAR_1)->self.sysdev,
   VAR_1->periodic_size * sizeof(__le32),
   &VAR_1->periodic_dma, VAR_2);
 if (VAR_1->periodic == ((void*)0)) {
  goto fail;
 }

 if (VAR_1->use_dummy_qh) {
  struct ehci_qh_hw *VAR_4;
  VAR_1->dummy = FUNC_6(VAR_1, VAR_2);
  if (!VAR_1->dummy)
   goto fail;

  VAR_4 = VAR_1->dummy->hw;
  VAR_4->hw_next = FUNC_0(VAR_1);
  VAR_4->hw_qtd_next = FUNC_0(VAR_1);
  VAR_4->hw_alt_next = FUNC_0(VAR_1);
  VAR_1->dummy->hw = VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_1->periodic_size; VAR_3++)
   VAR_1->periodic[VAR_3] = FUNC_1(VAR_1,
     VAR_1->dummy->qh_dma);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_1->periodic_size; VAR_3++)
   VAR_1->periodic[VAR_3] = FUNC_0(VAR_1);
 }


 VAR_1->pshadow = FUNC_8(VAR_1->periodic_size, sizeof(void *), VAR_2);
 if (VAR_1->pshadow != ((void*)0))
  return 0;

fail:
 FUNC_4 (VAR_1, "couldn't init memory\n");
 FUNC_5 (VAR_1);
 return -VAR_0;
}
