
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_hcd {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {int sysdev; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 void* FUNC_0 (int ,size_t,int *,int ) ;
 TYPE_2__* FUNC_1 (struct xhci_hcd*) ;

__attribute__((used)) static inline void *
FUNC_2(struct xhci_hcd *VAR_0, size_t VAR_1,
         dma_addr_t *VAR_2, gfp_t VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_0)->self.sysdev,
       VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
