
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7621_pcie_port {int enabled; int phy; int slot; struct mt7621_pcie* pcie; } ;
struct mt7621_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct mt7621_pcie_port*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mt7621_pcie_port *VAR_0)
{
 struct mt7621_pcie *VAR_1 = VAR_0->pcie;
 struct device *VAR_2 = VAR_1->dev;
 u32 VAR_3 = VAR_0->slot;
 int VAR_4;





 FUNC_1(VAR_0);

 VAR_4 = FUNC_3(VAR_0->phy);
 if (VAR_4) {
  FUNC_0(VAR_2, "failed to initialize port%d phy\n", VAR_3);
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_0->phy);
 if (VAR_4) {
  FUNC_0(VAR_2, "failed to power on port%d phy\n", VAR_3);
  FUNC_2(VAR_0->phy);
  return VAR_4;
 }

 VAR_0->enabled = 1;

 return 0;
}
