
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sr_pcie_phy_core {int dev; int mhb; } ;
struct sr_pcie_phy {unsigned int index; struct sr_pcie_phy_core* core; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct sr_pcie_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_5)
{
 struct sr_pcie_phy *VAR_6 = FUNC_1(VAR_5);
 struct sr_pcie_phy_core *VAR_7 = VAR_6->core;
 unsigned int VAR_8 = VAR_6->index;
 u32 VAR_9;

 if (VAR_8 != VAR_4)
  return -VAR_0;

 FUNC_2(VAR_7->mhb, VAR_2, &VAR_9);
 if ((VAR_9 & VAR_3) != VAR_3) {
  FUNC_0(VAR_7->dev, "PAXC is not powered up\n");
  return -VAR_1;
 }

 return 0;
}
