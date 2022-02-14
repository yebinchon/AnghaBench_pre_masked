
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dsi_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 int VAR_1;
 struct dsi_data *VAR_2 = FUNC_2(VAR_0);

 FUNC_0("dsi_runtime_get\n");

 VAR_1 = FUNC_3(&VAR_2->pdev->dev);
 FUNC_1(VAR_1 < 0);
 return VAR_1 < 0 ? VAR_1 : 0;
}
