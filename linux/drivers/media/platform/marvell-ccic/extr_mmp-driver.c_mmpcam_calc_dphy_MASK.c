
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmp_camera_platform_data {int dphy3_algo; int* dphy; int lane_clk; } ;
struct mmp_camera {int mipi_clk; TYPE_1__* pdev; } ;
struct mcam_camera {int dummy; } ;
struct device {struct mmp_camera_platform_data* platform_data; } ;
struct TYPE_2__ {struct device dev; } ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct mmp_camera* FUNC_5 (struct mcam_camera*) ;

__attribute__((used)) static void FUNC_6(struct mcam_camera *VAR_0)
{
 struct mmp_camera *VAR_1 = FUNC_5(VAR_0);
 struct mmp_camera_platform_data *VAR_2 = VAR_1->pdev->dev.platform_data;
 struct device *VAR_3 = &VAR_1->pdev->dev;
 unsigned long VAR_4;
 switch (VAR_2->dphy3_algo) {
 case 128:



  VAR_2->dphy[0] =
   (((1 + (VAR_2->lane_clk * 80) / 1000) & 0xff) << 8)
   | (1 + VAR_2->lane_clk * 35 / 1000);
  break;
 case 129:



  VAR_2->dphy[0] =
   (((2 + (VAR_2->lane_clk * 110) / 1000) & 0xff) << 8)
   | (1 + VAR_2->lane_clk * 35 / 1000);
  break;
 default:



  FUNC_4(VAR_3, "camera: use the default CSI2_DPHY3 value\n");
 }




 if (FUNC_0(VAR_1->mipi_clk))
  return;


 FUNC_3(VAR_1->mipi_clk);
 VAR_4 = (FUNC_2(VAR_1->mipi_clk) / 1000000) / 12;
 FUNC_1(VAR_1->mipi_clk);
 VAR_2->dphy[2] =
  ((((534 * VAR_4) / 2000 - 1) & 0xff) << 8)
  | (((38 * VAR_4) / 1000 - 1) & 0xff);

 FUNC_4(VAR_3, "camera: DPHY sets: dphy3=0x%x, dphy5=0x%x, dphy6=0x%x\n",
  VAR_2->dphy[0], VAR_2->dphy[1], VAR_2->dphy[2]);
}
