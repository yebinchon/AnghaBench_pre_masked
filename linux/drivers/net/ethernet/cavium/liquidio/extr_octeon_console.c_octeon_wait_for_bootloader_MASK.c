
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct octeon_device *VAR_3,
          u32 VAR_4)
{
 FUNC_0(&VAR_3->pci_dev->dev, "waiting %d0 ms for bootloader\n",
  VAR_4);

 if (FUNC_1(VAR_3))
  return -1;

 while (VAR_4 > 0 &&
        FUNC_2(VAR_3,
     VAR_0)
        != VAR_2) {
  if (--VAR_4 <= 0)
   return -1;
  FUNC_3(VAR_1 / 100);
 }
 return 0;
}
