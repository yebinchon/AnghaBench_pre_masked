
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned char*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_5, int VAR_6)
{
 unsigned char VAR_7;

 FUNC_1(VAR_5, VAR_1, &VAR_7);
 if (VAR_6)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~VAR_3;
 FUNC_3(VAR_5, VAR_1, VAR_7);
 FUNC_0(&VAR_5->dev, "JMB38x: set PMOS0 val 0x%x\n", VAR_7);

 if (FUNC_2(VAR_5, 1)) {
  FUNC_1(VAR_5, VAR_2, &VAR_7);
  if (VAR_6)
   VAR_7 |= VAR_4;
  else
   VAR_7 &= ~VAR_4;
  FUNC_3(VAR_5, VAR_2, VAR_7);
  FUNC_0(&VAR_5->dev, "JMB38x: set PMOS1 val 0x%x\n", VAR_7);
 }

 FUNC_1(VAR_5, VAR_0, &VAR_7);
 FUNC_3(VAR_5, VAR_0, VAR_7 & ~0x0f);
 FUNC_3(VAR_5, VAR_0, VAR_7 | 0x01);
 FUNC_0(&VAR_5->dev, "Clock Control by PCI config is disabled!\n");

        return 0;
}
