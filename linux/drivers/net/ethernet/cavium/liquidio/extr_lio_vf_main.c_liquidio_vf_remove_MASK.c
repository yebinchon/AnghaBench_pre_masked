
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct octeon_device {scalar_t__ app_mode; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct octeon_device*) ;
 int FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (struct octeon_device*) ;
 struct octeon_device* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct octeon_device *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(&VAR_2->pci_dev->dev, "Stopping device\n");

 if (VAR_2->app_mode == VAR_0)
  FUNC_2(VAR_2);




 FUNC_3(VAR_2);

 FUNC_1(&VAR_2->pci_dev->dev, "Device removed\n");




 FUNC_4(VAR_2);
}
