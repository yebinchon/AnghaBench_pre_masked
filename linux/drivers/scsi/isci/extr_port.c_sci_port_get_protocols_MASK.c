
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sci_phy_proto {scalar_t__ all; } ;
struct isci_port {struct isci_phy** phy_table; } ;
struct isci_phy {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct isci_phy*,struct sci_phy_proto*) ;

__attribute__((used)) static void FUNC_1(struct isci_port *VAR_1, struct sci_phy_proto *VAR_2)
{
 u8 VAR_3;

 VAR_2->all = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct isci_phy *VAR_4 = VAR_1->phy_table[VAR_3];

  if (!VAR_4)
   continue;
  FUNC_0(VAR_4, VAR_2);
 }
}
