
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {int app_cap_flags; } ;
struct octeon_device {scalar_t__ app_mode; TYPE_2__* pci_dev; TYPE_1__ fw_info; int octeon_id; scalar_t__ watchdog_task; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (struct octeon_device*) ;
 int FUNC_6 (struct octeon_device*) ;
 struct octeon_device* FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_2)
{
 struct octeon_device *VAR_3 = FUNC_7(VAR_2);

 FUNC_0(&VAR_3->pci_dev->dev, "Stopping device\n");

 if (VAR_3->watchdog_task)
  FUNC_2(VAR_3->watchdog_task);

 if (!VAR_3->octeon_id &&
     VAR_3->fw_info.app_cap_flags & VAR_1)
  FUNC_3();

 if (VAR_3->app_mode && (VAR_3->app_mode == VAR_0))
  FUNC_4(VAR_3);




 FUNC_5(VAR_3);

 FUNC_1(&VAR_3->pci_dev->dev, "Device removed\n");




 FUNC_6(VAR_3);
}
