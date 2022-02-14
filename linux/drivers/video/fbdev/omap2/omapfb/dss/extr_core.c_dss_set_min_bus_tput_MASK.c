
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_dss_board_info {int (* set_min_bus_tput ) (struct device*,unsigned long) ;} ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_4__ {struct omap_dss_board_info* platform_data; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct device*,unsigned long) ;

int FUNC_1(struct device *VAR_1, unsigned long VAR_2)
{
 struct omap_dss_board_info *VAR_3 = VAR_0.pdev->dev.platform_data;

 if (VAR_3->set_min_bus_tput)
  return VAR_3->set_min_bus_tput(VAR_1, VAR_2);
 else
  return 0;
}
