
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_dss_board_info {int (* dsi_enable_pads ) (int,unsigned int) ;} ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_4__ {struct omap_dss_board_info* platform_data; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int,unsigned int) ;

int FUNC_1(int VAR_2, unsigned VAR_3)
{
 struct omap_dss_board_info *VAR_4 = VAR_1.pdev->dev.platform_data;

 if (!VAR_4->dsi_enable_pads)
  return -VAR_0;

 return VAR_4->dsi_enable_pads(VAR_2, VAR_3);
}
