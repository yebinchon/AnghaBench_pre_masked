
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2)
{
 u32 VAR_3;







 FUNC_1(VAR_2, VAR_0, &VAR_3);
 if (!(VAR_3 & VAR_1)) {
  FUNC_0(VAR_2, "Enabling MPC IRBNCE\n");
  VAR_3 |= VAR_1;
  FUNC_2(VAR_2, VAR_0, VAR_3);
 }
}
