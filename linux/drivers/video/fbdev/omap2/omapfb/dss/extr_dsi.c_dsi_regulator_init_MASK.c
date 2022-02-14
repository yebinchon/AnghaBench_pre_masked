
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct platform_device {int dummy; } ;
struct dsi_data {struct regulator* vdds_dsi_reg; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 struct regulator* FUNC_3 (int *,char*) ;
 struct dsi_data* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_4(VAR_1);
 struct regulator *VAR_3;

 if (VAR_2->vdds_dsi_reg != ((void*)0))
  return 0;

 VAR_3 = FUNC_3(&VAR_2->pdev->dev, "vdd");

 if (FUNC_1(VAR_3)) {
  if (FUNC_2(VAR_3) != -VAR_0)
   FUNC_0("can't get DSI VDD regulator\n");
  return FUNC_2(VAR_3);
 }

 VAR_2->vdds_dsi_reg = VAR_3;

 return 0;
}
