
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pcie_link_state {struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ clear_retrain_link; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct pcie_link_state *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pdev;
 unsigned long VAR_8;
 u16 VAR_9;

 FUNC_1(VAR_7, VAR_1, &VAR_9);
 VAR_9 |= VAR_2;
 FUNC_2(VAR_7, VAR_1, VAR_9);
 if (VAR_7->clear_retrain_link) {





  VAR_9 &= ~VAR_2;
  FUNC_2(VAR_7, VAR_1, VAR_9);
 }


 VAR_8 = VAR_5 + VAR_0;
 do {
  FUNC_1(VAR_7, VAR_3, &VAR_9);
  if (!(VAR_9 & VAR_4))
   break;
  FUNC_0(1);
 } while (FUNC_3(VAR_5, VAR_8));
 return !(VAR_9 & VAR_4);
}
