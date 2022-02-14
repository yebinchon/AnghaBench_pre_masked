
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int dev; } ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,struct rtw_dev*) ;
 int FUNC_1 (struct pci_dev*,int,int,unsigned int) ;
 int FUNC_2 (struct pci_dev*) ;
 int VAR_4 ;
 int FUNC_3 (struct rtw_dev*,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct rtw_dev *VAR_7, struct pci_dev *VAR_8)
{
 unsigned int VAR_9 = VAR_2;
 int VAR_10;

 if (!VAR_4)
  VAR_9 |= VAR_3;

 VAR_10 = FUNC_1(VAR_8, 1, 1, VAR_9);
 if (VAR_10 < 0) {
  FUNC_3(VAR_7, "failed to alloc PCI irq vectors\n");
  return VAR_10;
 }

 VAR_10 = FUNC_0(VAR_7->dev, VAR_8->irq,
     VAR_5,
     VAR_6,
     VAR_0, VAR_1, VAR_7);
 if (VAR_10) {
  FUNC_3(VAR_7, "failed to request irq %d\n", VAR_10);
  FUNC_2(VAR_8);
 }

 return VAR_10;
}
