
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ehci_shadow {void* ptr; int * hw_next; } ;
struct oxu_hcd {int * periodic; union ehci_shadow* pshadow; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 union ehci_shadow* FUNC_1 (union ehci_shadow*,int ) ;

__attribute__((used)) static void FUNC_2(struct oxu_hcd *VAR_0, unsigned VAR_1, void *VAR_2)
{
 union ehci_shadow *VAR_3 = &VAR_0->pshadow[VAR_1];
 __le32 *VAR_4 = &VAR_0->periodic[VAR_1];
 union ehci_shadow VAR_5 = *VAR_3;


 while (VAR_5.ptr && VAR_5.ptr != VAR_2) {
  VAR_3 = FUNC_1(VAR_3, FUNC_0(*VAR_4));
  VAR_4 = VAR_5.hw_next;
  VAR_5 = *VAR_3;
 }

 if (!VAR_5.ptr)
  return;




 *VAR_3 = *FUNC_1(&VAR_5, FUNC_0(*VAR_4));
 *VAR_4 = *VAR_5.hw_next;
}
