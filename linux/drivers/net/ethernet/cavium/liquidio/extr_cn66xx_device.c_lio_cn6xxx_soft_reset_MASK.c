
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (struct octeon_device*,int,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (struct octeon_device*,int ,int) ;

int FUNC_7(struct octeon_device *VAR_4)
{
 FUNC_6(VAR_4, VAR_3, 0xFF);

 FUNC_0(&VAR_4->pci_dev->dev, "BIST enabled for soft reset\n");

 FUNC_3(VAR_4, 1, VAR_0);
 FUNC_6(VAR_4, VAR_2, 0x1234ULL);

 FUNC_2(VAR_4, VAR_1);
 FUNC_3(VAR_4, 1, VAR_1);


 FUNC_4(100);

 if (FUNC_5(VAR_4, VAR_2)) {
  FUNC_1(&VAR_4->pci_dev->dev, "Soft reset failed\n");
  return 1;
 }

 FUNC_0(&VAR_4->pci_dev->dev, "Reset completed\n");
 FUNC_6(VAR_4, VAR_3, 0xFF);

 return 0;
}
