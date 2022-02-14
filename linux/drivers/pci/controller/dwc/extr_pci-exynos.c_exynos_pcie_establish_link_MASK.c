
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_port {int dummy; } ;
struct exynos_pcie {int phy; TYPE_1__* mem_res; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; struct pcie_port pp; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int elbi_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct pcie_port*) ;
 int FUNC_3 (struct dw_pcie*) ;
 int FUNC_4 (struct exynos_pcie*) ;
 int FUNC_5 (struct exynos_pcie*) ;
 int FUNC_6 (struct exynos_pcie*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct exynos_pcie *VAR_4)
{
 struct dw_pcie *VAR_5 = VAR_4->pci;
 struct pcie_port *VAR_6 = &VAR_5->pp;
 struct device *VAR_7 = VAR_5->dev;

 if (FUNC_1(VAR_5)) {
  FUNC_0(VAR_7, "Link already up\n");
  return 0;
 }

 FUNC_4(VAR_4);

 FUNC_11(VAR_4->phy);

 FUNC_7(VAR_4->mem_res->elbi_base, 1,
   VAR_3);

 FUNC_10(VAR_4->phy);
 FUNC_8(VAR_4->phy);

 FUNC_6(VAR_4);
 FUNC_2(VAR_6);
 FUNC_5(VAR_4);


 FUNC_7(VAR_4->mem_res->elbi_base, VAR_2,
     VAR_1);


 if (!FUNC_3(VAR_5))
  return 0;

 FUNC_9(VAR_4->phy);
 return -VAR_0;
}
