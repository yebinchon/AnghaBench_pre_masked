
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pci_dev*,int *,int *,int *) ;

int FUNC_2(struct pci_dev *VAR_0, u16 *VAR_1, u16 *VAR_2,
   u16 *VAR_3)
{
 int VAR_4;






 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_0->dev, "Can't get actag for device: %d\n", VAR_4);
  return VAR_4;
 }
 return 0;
}
