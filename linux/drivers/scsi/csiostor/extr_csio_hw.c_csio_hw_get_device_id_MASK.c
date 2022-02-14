
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vendor_id; int device_id; } ;
struct TYPE_4__ {TYPE_1__ pci; } ;
struct csio_hw {int chip_id; TYPE_2__ params; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*) ;
 scalar_t__ FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static void
FUNC_3(struct csio_hw *VAR_3)
{

 if (FUNC_1(VAR_3))
  return;


 FUNC_2(VAR_3->pdev, VAR_2,
        &VAR_3->params.pci.vendor_id);
 FUNC_2(VAR_3->pdev, VAR_1,
        &VAR_3->params.pci.device_id);

 FUNC_0(VAR_3);
 VAR_3->chip_id = (VAR_3->params.pci.device_id & VAR_0);

}
