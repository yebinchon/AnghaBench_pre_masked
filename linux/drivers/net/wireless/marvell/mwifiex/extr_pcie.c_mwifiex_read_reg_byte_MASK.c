
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcie_service_card {scalar_t__ pci_mmap1; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_adapter *VAR_0,
     int VAR_1, u8 *VAR_2)
{
 struct pcie_service_card *VAR_3 = VAR_0->card;

 *VAR_2 = FUNC_0(VAR_3->pci_mmap1 + VAR_1);

 return 0;
}
