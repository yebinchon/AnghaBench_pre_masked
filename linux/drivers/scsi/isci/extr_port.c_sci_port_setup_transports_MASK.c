
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct isci_port {int active_phy_mask; int * phy_table; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct isci_port *VAR_1, u32 VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->active_phy_mask & (1 << VAR_3))
   FUNC_0(VAR_1->phy_table[VAR_3], VAR_2);
 }
}
