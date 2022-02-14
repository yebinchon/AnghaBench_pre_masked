
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_bar {int * iomem; } ;
struct nfp6000_pcie {int bars; struct nfp_bar* bar; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nfp6000_pcie *VAR_0)
{
 struct nfp_bar *VAR_1 = &VAR_0->bar[0];
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->bars; VAR_2++, VAR_1++) {
  if (VAR_1->iomem) {
   FUNC_0(VAR_1->iomem);
   VAR_1->iomem = ((void*)0);
  }
 }
}
