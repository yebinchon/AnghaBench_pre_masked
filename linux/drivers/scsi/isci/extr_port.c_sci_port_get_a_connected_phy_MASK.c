
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct isci_port {struct isci_phy** phy_table; } ;
struct isci_phy {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct isci_port*,struct isci_phy*) ;

__attribute__((used)) static struct isci_phy *FUNC_1(struct isci_port *VAR_1)
{
 u32 VAR_2;
 struct isci_phy *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {



  VAR_3 = VAR_1->phy_table[VAR_2];
  if (VAR_3 && FUNC_0(VAR_1, VAR_3))
   return VAR_3;
 }

 return ((void*)0);
}
