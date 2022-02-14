
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qtd {int qtd_list; void* hw_alt_next; void* hw_next; int hw_token; int qtd_dma; } ;
struct ehci_hcd {int dummy; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct ehci_hcd*,int ) ;
 int FUNC_3 (struct ehci_qtd*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct ehci_hcd *VAR_1, struct ehci_qtd *VAR_2,
      dma_addr_t VAR_3)
{
 FUNC_3 (VAR_2, 0, sizeof *VAR_2);
 VAR_2->qtd_dma = VAR_3;
 VAR_2->hw_token = FUNC_2(VAR_1, VAR_0);
 VAR_2->hw_next = FUNC_0(VAR_1);
 VAR_2->hw_alt_next = FUNC_0(VAR_1);
 FUNC_1 (&VAR_2->qtd_list);
}
