
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pcie_device {struct pci_dev* port; } ;
struct pci_dev {int subordinate; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct pcie_device *VAR_7 = VAR_6;
 struct pci_dev *VAR_8 = VAR_7->port;
 u16 VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_8, VAR_3, &VAR_9);
 VAR_10 = VAR_9 & VAR_4;

 if (VAR_11 != VAR_2 || !VAR_10)
  return VAR_0;

 FUNC_1(VAR_8, VAR_3, VAR_10);
 FUNC_2(VAR_8->subordinate, VAR_9);
 return VAR_1;
}
