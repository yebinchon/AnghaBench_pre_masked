
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pcie_port {int list; int base; struct mtk_pcie* pcie; } ;
struct mtk_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*,struct mtk_pcie_port*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mtk_pcie_port *VAR_0)
{
 struct mtk_pcie *VAR_1 = VAR_0->pcie;
 struct device *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2, VAR_0->base);
 FUNC_2(&VAR_0->list);
 FUNC_1(VAR_2, VAR_0);
}
