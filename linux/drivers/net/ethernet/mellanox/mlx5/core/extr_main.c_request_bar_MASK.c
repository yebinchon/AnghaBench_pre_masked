
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3)
{
 int VAR_4 = 0;

 if (!(FUNC_2(VAR_3, 0) & VAR_2)) {
  FUNC_0(&VAR_3->dev, "Missing registers BAR, aborting\n");
  return -VAR_1;
 }

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4)
  FUNC_0(&VAR_3->dev, "Couldn't get PCI resources, aborting\n");

 return VAR_4;
}
