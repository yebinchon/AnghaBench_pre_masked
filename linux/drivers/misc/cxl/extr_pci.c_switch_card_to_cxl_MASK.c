
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 int VAR_7;

 FUNC_3(&VAR_4->dev, "switch card to CXL\n");

 if (!(VAR_5 = FUNC_4(VAR_4))) {
  FUNC_2(&VAR_4->dev, "ABORTING: CXL VSEC not found!\n");
  return -VAR_3;
 }

 if ((VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_6))) {
  FUNC_2(&VAR_4->dev, "failed to read current mode control: %i", VAR_7);
  return VAR_7;
 }
 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_0 | VAR_1;
 if ((VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6))) {
  FUNC_2(&VAR_4->dev, "failed to enable CXL protocol: %i", VAR_7);
  return VAR_7;
 }





 FUNC_5(100);

 return 0;
}
