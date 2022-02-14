
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; int device; scalar_t__ subsystem_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct pci_dev*) ;
 unsigned int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_4)
{

 unsigned int VAR_5 = VAR_4->subsystem_device & 0xf;

 if ((VAR_4->device == VAR_2) ||
  (VAR_4->device == VAR_1))
  return 0;

 if (VAR_4->subsystem_vendor == VAR_3 &&
   VAR_4->subsystem_device == 0x0299)
  return 0;

 switch (VAR_4->device) {
 case 130:
 case 129:
 case 128:
 case 131:
  VAR_5 = FUNC_1(VAR_4);
  break;

 default:
  break;
 }

 if (VAR_5 == 0) {
  FUNC_0("unknown NetMos/Mostech device", VAR_4);
  return -VAR_0;
 }

 return VAR_5;
}
