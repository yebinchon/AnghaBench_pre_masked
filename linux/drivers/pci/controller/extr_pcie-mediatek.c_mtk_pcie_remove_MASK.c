
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pci_host_bridge {int bus; } ;
struct mtk_pcie {int dummy; } ;


 int FUNC_0 (struct mtk_pcie*) ;
 int FUNC_1 (struct mtk_pcie*) ;
 int FUNC_2 (struct mtk_pcie*) ;
 struct pci_host_bridge* FUNC_3 (struct mtk_pcie*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct mtk_pcie* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct mtk_pcie *VAR_1 = FUNC_6(VAR_0);
 struct pci_host_bridge *VAR_2 = FUNC_3(VAR_1);

 FUNC_5(VAR_2->bus);
 FUNC_4(VAR_2->bus);
 FUNC_0(VAR_1);

 FUNC_1(VAR_1);

 FUNC_2(VAR_1);

 return 0;
}
