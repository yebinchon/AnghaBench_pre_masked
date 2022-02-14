
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_cpp_area {int dummy; } ;
struct nfp6000_pcie {int dummy; } ;
struct nfp6000_area_priv {int * iomem; TYPE_1__* bar; } ;
struct TYPE_2__ {int iomem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp6000_pcie*,TYPE_1__*) ;
 int FUNC_2 (struct nfp_cpp_area*) ;
 struct nfp6000_area_priv* FUNC_3 (struct nfp_cpp_area*) ;
 struct nfp6000_pcie* FUNC_4 (int ) ;
 int FUNC_5 (struct nfp_cpp_area*) ;

__attribute__((used)) static void FUNC_6(struct nfp_cpp_area *VAR_0)
{
 struct nfp6000_pcie *VAR_1 = FUNC_4(FUNC_2(VAR_0));
 struct nfp6000_area_priv *VAR_2 = FUNC_3(VAR_0);

 if (!FUNC_5(VAR_0))
  return;

 if (!VAR_2->bar->iomem)
  FUNC_0(VAR_2->iomem);

 FUNC_1(VAR_1, VAR_2->bar);

 VAR_2->bar = ((void*)0);
 VAR_2->iomem = ((void*)0);
}
