
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct dpi_data {struct regulator* vdds_dsi_reg; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 struct regulator* FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dpi_data *VAR_2)
{
 struct regulator *VAR_3;

 if (!FUNC_4(VAR_1))
  return 0;

 if (VAR_2->vdds_dsi_reg)
  return 0;

 VAR_3 = FUNC_3(&VAR_2->pdev->dev, "vdds_dsi");
 if (FUNC_1(VAR_3)) {
  if (FUNC_2(VAR_3) != -VAR_0)
   FUNC_0("can't get VDDS_DSI regulator\n");
  return FUNC_2(VAR_3);
 }

 VAR_2->vdds_dsi_reg = VAR_3;

 return 0;
}
