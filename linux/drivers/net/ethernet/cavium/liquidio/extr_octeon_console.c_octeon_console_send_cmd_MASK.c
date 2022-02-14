
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct octeon_device*,int ,int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct octeon_device*,int) ;
 int FUNC_6 (struct octeon_device*,int ,int) ;
 int FUNC_7 (char*) ;

int FUNC_8(struct octeon_device *VAR_5, char *VAR_6,
       u32 VAR_7)
{
 u32 VAR_8 = (u32)FUNC_7(VAR_6);

 FUNC_0(&VAR_5->pci_dev->dev, "sending \"%s\" to bootloader\n", VAR_6);

 if (VAR_8 > VAR_3 - 1) {
  FUNC_1(&VAR_5->pci_dev->dev, "Command string too long, max length is: %d\n",
   VAR_3 - 1);
  return -1;
 }

 if (FUNC_5(VAR_5, VAR_7) != 0) {
  FUNC_1(&VAR_5->pci_dev->dev, "Bootloader not ready for command.\n");
  return -1;
 }


 FUNC_3();
 FUNC_2(VAR_5, VAR_0,
      (u8 *)VAR_6, VAR_8);
 FUNC_6(VAR_5, VAR_1,
      VAR_8);
 FUNC_6(VAR_5, VAR_2,
      VAR_4);




 if (FUNC_5(VAR_5, 200) != 0) {
  FUNC_4();
  FUNC_1(&VAR_5->pci_dev->dev, "Bootloader did not accept command.\n");
  return -1;
 }
 FUNC_4();
 return 0;
}
