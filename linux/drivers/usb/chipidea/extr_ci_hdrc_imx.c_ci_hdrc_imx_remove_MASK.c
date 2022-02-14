
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct ci_hdrc_imx_data {scalar_t__ hsic_pad_regulator; int pm_qos_req; TYPE_1__* plat_data; scalar_t__ ci_pdev; int phy; scalar_t__ override_phy_control; scalar_t__ supports_runtime_pm; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 struct ci_hdrc_imx_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct ci_hdrc_imx_data *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->supports_runtime_pm) {
  FUNC_5(&VAR_1->dev);
  FUNC_4(&VAR_1->dev);
  FUNC_6(&VAR_1->dev);
 }
 if (VAR_2->ci_pdev)
  FUNC_0(VAR_2->ci_pdev);
 if (VAR_2->override_phy_control)
  FUNC_8(VAR_2->phy);
 if (VAR_2->ci_pdev) {
  FUNC_1(&VAR_1->dev);
  if (VAR_2->plat_data->flags & VAR_0)
   FUNC_3(&VAR_2->pm_qos_req);
  if (VAR_2->hsic_pad_regulator)
   FUNC_7(VAR_2->hsic_pad_regulator);
 }

 return 0;
}
