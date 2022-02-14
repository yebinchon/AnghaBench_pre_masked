
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sr_pcie_phy_core {size_t pipemux; } ;
struct sr_pcie_phy {unsigned int index; struct sr_pcie_phy_core* core; } ;


 unsigned int* VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct sr_pcie_phy *VAR_1)
{
 struct sr_pcie_phy_core *VAR_2 = VAR_1->core;
 unsigned int VAR_3 = VAR_1->index;

 return !!((VAR_0[VAR_2->pipemux] >> VAR_3) & 0x1);
}
