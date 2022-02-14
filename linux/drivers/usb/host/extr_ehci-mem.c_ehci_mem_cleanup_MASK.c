
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {int periodic_size; int * pshadow; int * periodic; int periodic_dma; int * sitd_pool; int * itd_pool; int * qh_pool; int * qtd_pool; int * dummy; int * async; } ;
struct TYPE_3__ {int sysdev; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct ehci_hcd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ehci_hcd*,int *) ;

__attribute__((used)) static void FUNC_5 (struct ehci_hcd *VAR_0)
{
 if (VAR_0->async)
  FUNC_4(VAR_0, VAR_0->async);
 VAR_0->async = ((void*)0);

 if (VAR_0->dummy)
  FUNC_4(VAR_0, VAR_0->dummy);
 VAR_0->dummy = ((void*)0);


 FUNC_1(VAR_0->qtd_pool);
 VAR_0->qtd_pool = ((void*)0);
 FUNC_1(VAR_0->qh_pool);
 VAR_0->qh_pool = ((void*)0);
 FUNC_1(VAR_0->itd_pool);
 VAR_0->itd_pool = ((void*)0);
 FUNC_1(VAR_0->sitd_pool);
 VAR_0->sitd_pool = ((void*)0);

 if (VAR_0->periodic)
  FUNC_0(FUNC_2(VAR_0)->self.sysdev,
   VAR_0->periodic_size * sizeof (u32),
   VAR_0->periodic, VAR_0->periodic_dma);
 VAR_0->periodic = ((void*)0);


 FUNC_3(VAR_0->pshadow);
 VAR_0->pshadow = ((void*)0);
}
