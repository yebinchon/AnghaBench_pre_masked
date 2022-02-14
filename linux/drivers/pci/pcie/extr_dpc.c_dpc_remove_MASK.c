
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pcie_device {struct pci_dev* port; } ;
struct pci_dev {int dummy; } ;
struct dpc_dev {scalar_t__ cap_pos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dpc_dev* FUNC_0 (struct pcie_device*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct pcie_device *VAR_3)
{
 struct dpc_dev *VAR_4 = FUNC_0(VAR_3);
 struct pci_dev *VAR_5 = VAR_3->port;
 u16 VAR_6;

 FUNC_1(VAR_5, VAR_4->cap_pos + VAR_0, &VAR_6);
 VAR_6 &= ~(VAR_1 | VAR_2);
 FUNC_2(VAR_5, VAR_4->cap_pos + VAR_0, VAR_6);
}
