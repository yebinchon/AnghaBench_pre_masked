
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1)
{




 if ((VAR_1->subsystem_device & 0x00f0) >= 0x70) {
  FUNC_0(&VAR_1->dev,
   "ignoring Timedia subdevice %04x for parport_serial\n",
   VAR_1->subsystem_device);
  return -VAR_0;
 }

 return 0;
}
