
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qtd {int dummy; } ;
struct ehci_hcd {int qtd_pool; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 struct ehci_qtd* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct ehci_hcd*,struct ehci_qtd*,int ) ;

__attribute__((used)) static struct ehci_qtd *FUNC_2 (struct ehci_hcd *VAR_0, gfp_t VAR_1)
{
 struct ehci_qtd *VAR_2;
 dma_addr_t VAR_3;

 VAR_2 = FUNC_0 (VAR_0->qtd_pool, VAR_1, &VAR_3);
 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_0, VAR_2, VAR_3);
 }
 return VAR_2;
}
