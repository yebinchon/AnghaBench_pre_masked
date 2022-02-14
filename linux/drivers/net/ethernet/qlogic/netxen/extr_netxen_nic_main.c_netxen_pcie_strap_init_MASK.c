
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int devfn; int dev; } ;
struct TYPE_2__ {scalar_t__ revision_id; } ;
struct netxen_adapter {TYPE_1__ ahw; struct pci_dev* pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct netxen_adapter*,int ) ;
 int FUNC_2 (struct netxen_adapter*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_7(struct netxen_adapter *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 int VAR_8, VAR_9;
 struct pci_dev *VAR_10;

 VAR_10 = VAR_3->pdev;

 VAR_6 = FUNC_1(VAR_3, FUNC_0(VAR_1));

 VAR_6 &= 0xFCFFFFFF;




 VAR_9 = FUNC_4(VAR_10, VAR_2);
 if (VAR_9 == 0xC0) {
  FUNC_5(VAR_10, VAR_9 + 0x10, &VAR_7);
  if ((VAR_7 & 0x000F0000) != 0x00020000) {

   VAR_6 |= 0x01000000;
  }
  FUNC_3(&VAR_3->pdev->dev, "Gen2 strapping detected\n");
  VAR_5 = 0xF1000;
 } else {

  VAR_6 |= 0x01000000;
  FUNC_3(&VAR_3->pdev->dev, "Gen1 strapping detected\n");
  if (VAR_3->ahw.revision_id == VAR_0)
   VAR_5 = 0xF1020;
  else
   VAR_5 = 0;
 }

 FUNC_2(VAR_3, FUNC_0(VAR_1), VAR_6);

 if (!VAR_5)
  return;

 VAR_4 = VAR_10->devfn;
 if (VAR_4 & 0x07)
  return;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  FUNC_5(VAR_10, VAR_9 + 8, &VAR_7);
  FUNC_5(VAR_10, VAR_9 + 8, &VAR_7);
  FUNC_6(VAR_10, VAR_9 + 8, VAR_5);
  VAR_10->devfn++;
 }
 VAR_10->devfn = VAR_4;
}
