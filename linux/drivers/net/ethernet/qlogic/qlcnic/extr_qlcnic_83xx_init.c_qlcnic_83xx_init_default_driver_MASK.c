
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; int flags; } ;
struct TYPE_4__ {int msix_supported; int fw_hal_version; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_2(VAR_3);
 if (FUNC_3(VAR_3))
  return VAR_4;

 FUNC_1(VAR_3);
 VAR_3->ahw->msix_supported = !!VAR_2;
 VAR_3->flags |= VAR_1;

 FUNC_0(&VAR_3->pdev->dev, "HAL Version: %d\n",
   VAR_3->ahw->fw_hal_version);

 return 0;
}
