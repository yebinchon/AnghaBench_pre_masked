
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fimc_md {struct clk** wbclk; int v4l2_dev; int use_isp; TYPE_2__* camclk; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;
typedef int clk_name ;
struct TYPE_4__ {struct clk* clock; } ;
struct TYPE_3__ {struct device dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,char*) ;
 int FUNC_5 (struct fimc_md*) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_8(struct fimc_md *VAR_5)
{
 struct device *VAR_6 = &VAR_5->pdev->dev;
 char VAR_7[32];
 struct clk *VAR_8;
 int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  VAR_5->camclk[VAR_9].clock = FUNC_0(-VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  FUNC_6(VAR_7, sizeof(VAR_7), "sclk_cam%u", VAR_9);
  VAR_8 = FUNC_3(VAR_6, VAR_7);

  if (FUNC_1(VAR_8)) {
   FUNC_4(VAR_6, "Failed to get clock: %s\n", VAR_7);
   VAR_10 = FUNC_2(VAR_8);
   break;
  }
  VAR_5->camclk[VAR_9].clock = VAR_8;
 }
 if (VAR_10)
  FUNC_5(VAR_5);

 if (!VAR_5->use_isp)
  return 0;




 VAR_5->wbclk[VAR_0] = FUNC_0(-VAR_2);

 for (VAR_9 = VAR_1; VAR_9 < VAR_4; VAR_9++) {
  FUNC_6(VAR_7, sizeof(VAR_7), "pxl_async%u", VAR_9);
  VAR_8 = FUNC_3(VAR_6, VAR_7);
  if (FUNC_1(VAR_8)) {
   FUNC_7(&VAR_5->v4l2_dev, "Failed to get clock: %s\n",
      VAR_7);
   VAR_10 = FUNC_2(VAR_8);
   break;
  }
  VAR_5->wbclk[VAR_9] = VAR_8;
 }
 if (VAR_10)
  FUNC_5(VAR_5);

 return VAR_10;
}
