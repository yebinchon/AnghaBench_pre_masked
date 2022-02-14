
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {unsigned int class; scalar_t__ device; int subsystem_device; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1)
{
 unsigned int VAR_2 = VAR_1->class;
 unsigned int VAR_3;
 unsigned short VAR_4;

 VAR_3 = VAR_2 & 0xff;

 if (VAR_3 == 2)
  return 1;

 if ((VAR_3 == 0) && (VAR_1->device == VAR_0)) {






  VAR_4 = VAR_1->subsystem_device & 0xf;
  if (VAR_4 > 0)
   return VAR_4;

  FUNC_0(&VAR_1->dev,
   "NetMos/Mostech serial driver ignoring port on ambiguous config.\n");
  return 0;
 }

 FUNC_1("unknown NetMos/Mostech program interface", VAR_1);
 return 0;
}
