
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_mdiobus_nexus {struct cavium_mdiobus** buses; } ;
struct pci_dev {int dummy; } ;
struct cavium_mdiobus {scalar_t__ register_base; int mii_bus; } ;


 int FUNC_0 (struct cavium_mdiobus**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 struct thunder_mdiobus_nexus* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 int VAR_2;
 struct thunder_mdiobus_nexus *VAR_3 = FUNC_4(VAR_1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3->buses); VAR_2++) {
  struct cavium_mdiobus *VAR_4 = VAR_3->buses[VAR_2];

  if (!VAR_4)
   continue;

  FUNC_2(VAR_4->mii_bus);
  FUNC_1(VAR_4->mii_bus);
  FUNC_3(0, VAR_4->register_base + VAR_0);
 }
 FUNC_5(VAR_1, ((void*)0));
}
