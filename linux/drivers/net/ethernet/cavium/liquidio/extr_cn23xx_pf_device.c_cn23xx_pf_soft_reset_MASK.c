
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {int octeon_id; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (struct octeon_device*,int,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (struct octeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct octeon_device *VAR_3)
{
 FUNC_6(VAR_3, VAR_2, 0xFF);

 FUNC_0(&VAR_3->pci_dev->dev, "OCTEON[%d]: BIST enabled for CN23XX soft reset\n",
  VAR_3->octeon_id);

 FUNC_6(VAR_3, VAR_1, 0x1234ULL);


 FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3, 1, VAR_0);


 FUNC_4(100);

 if (FUNC_5(VAR_3, VAR_1)) {
  FUNC_1(&VAR_3->pci_dev->dev, "OCTEON[%d]: Soft reset failed\n",
   VAR_3->octeon_id);
  return 1;
 }

 FUNC_0(&VAR_3->pci_dev->dev, "OCTEON[%d]: Reset completed\n",
  VAR_3->octeon_id);


 FUNC_6(VAR_3, VAR_2, 0xFF);

 return 0;
}
