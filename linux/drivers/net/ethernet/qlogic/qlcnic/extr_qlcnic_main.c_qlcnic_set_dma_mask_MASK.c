
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_1, int *VAR_2)
{
 if (!FUNC_3(VAR_1, FUNC_0(64)) &&
   !FUNC_2(VAR_1, FUNC_0(64)))
  *VAR_2 = 1;
 else if (!FUNC_3(VAR_1, FUNC_0(32)) &&
   !FUNC_2(VAR_1, FUNC_0(32)))
  *VAR_2 = 0;
 else {
  FUNC_1(&VAR_1->dev, "Unable to set DMA mask, aborting\n");
  return -VAR_0;
 }

 return 0;
}
