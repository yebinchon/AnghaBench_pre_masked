
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mt7621_pcie_port {int slot; int list; struct mt7621_pcie* pcie; int phy; int pcie_rst; int base; } ;
struct mt7621_pcie {int ports; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct mt7621_pcie_port* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct device_node*,int,struct resource*) ;
 int FUNC_10 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_11(struct mt7621_pcie *VAR_3,
      struct device_node *VAR_4,
      int VAR_5)
{
 struct mt7621_pcie_port *VAR_6;
 struct device *VAR_7 = VAR_3->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 struct resource VAR_9;
 char VAR_10[10];
 int VAR_11;

 VAR_6 = FUNC_5(VAR_7, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_11 = FUNC_9(VAR_8, VAR_5 + 1, &VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_7, "missing \"reg\" property\n");
  return VAR_11;
 }

 VAR_6->base = FUNC_4(VAR_7, &VAR_9);
 if (FUNC_1(VAR_6->base))
  return FUNC_2(VAR_6->base);

 FUNC_10(VAR_10, sizeof(VAR_10), "pcie%d", VAR_5);
 VAR_6->pcie_rst = FUNC_7(VAR_7, VAR_10);
 if (FUNC_2(VAR_6->pcie_rst) == -VAR_1) {
  FUNC_3(VAR_7, "failed to get pcie%d reset control\n", VAR_5);
  return FUNC_2(VAR_6->pcie_rst);
 }

 FUNC_10(VAR_10, sizeof(VAR_10), "pcie-phy%d", VAR_5);
 VAR_6->phy = FUNC_6(VAR_7, VAR_10);
 if (FUNC_1(VAR_6->phy))
  return FUNC_2(VAR_6->phy);

 VAR_6->slot = VAR_5;
 VAR_6->pcie = VAR_3;

 FUNC_0(&VAR_6->list);
 FUNC_8(&VAR_6->list, &VAR_3->ports);

 return 0;
}
