
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int device; int dev; } ;
 int FUNC_0 (int *,char*,int) ;

bool FUNC_1(struct pci_dev *VAR_0)
{
 u32 VAR_1 = VAR_0->device;

 switch (VAR_1) {
 case 128:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 135:
  return 1;
 case 134:
 case 136:
  return 0;
 default:
  FUNC_0(&VAR_0->dev, "un-recognized pci device-id %d",
    VAR_1);
 }

 return 0;
}
