
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_0 (int ,int ,struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_3 (struct pci_dev*,int,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3 = ((void*)0);
 unsigned char VAR_4;





 while ((VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_3))) {
  FUNC_2(VAR_3, 0x82, &VAR_4);
  if (!(VAR_4 & 1<<1)) {
   FUNC_1(VAR_3, "PIIX3: Enabling Passive Release\n");
   VAR_4 |= 1<<1;
   FUNC_3(VAR_3, 0x82, VAR_4);
  }
 }
}
