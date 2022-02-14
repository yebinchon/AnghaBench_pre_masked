
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int subsystem_device; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1)
{
 u32 VAR_2;

 if (!(VAR_1->subsystem_device & 0x1000))
  return -VAR_0;


 FUNC_1(VAR_1, 0x44, &VAR_2);
 if (VAR_2 == 0x00001000L) {
  FUNC_0(&VAR_1->dev, "Local i960 firmware missing\n");
  return -VAR_0;
 }
 return 0;
}
