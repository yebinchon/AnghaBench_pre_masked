
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_bar {int index; int barcfg; } ;
struct TYPE_2__ {scalar_t__ csr; } ;
struct nfp6000_pcie {int pdev; TYPE_1__ iomem; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct nfp6000_pcie *VAR_0, struct nfp_bar *VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->index >> 3;
 VAR_4 = VAR_1->index & 7;

 if (VAR_0->iomem.csr) {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  FUNC_4(VAR_2, VAR_0->iomem.csr + VAR_5);

  FUNC_3(VAR_0->iomem.csr + VAR_5);
 } else {
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  FUNC_2(VAR_0->pdev, VAR_5, VAR_2);
 }

 VAR_1->barcfg = VAR_2;

 return 0;
}
