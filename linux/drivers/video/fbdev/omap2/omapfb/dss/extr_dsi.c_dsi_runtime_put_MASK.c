
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dsi_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 FUNC_0("dsi_runtime_put\n");

 VAR_3 = FUNC_3(&VAR_2->pdev->dev);
 FUNC_1(VAR_3 < 0 && VAR_3 != -VAR_0);
}
