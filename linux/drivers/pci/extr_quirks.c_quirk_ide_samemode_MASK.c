
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int class; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 u8 VAR_2;

 FUNC_1(VAR_1, VAR_0, &VAR_2);

 if (((VAR_2 & 1) && !(VAR_2 & 4)) || ((VAR_2 & 4) && !(VAR_2 & 1))) {
  FUNC_0(VAR_1, "IDE mode mismatch; forcing legacy mode\n");
  VAR_2 &= ~5;
  VAR_1->class &= ~5;
  FUNC_2(VAR_1, VAR_0, VAR_2);
 }
}
