
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_dss_board_info {void (* dsi_disable_pads ) (int,unsigned int) ;} ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_4__ {struct omap_dss_board_info* platform_data; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 TYPE_3__ VAR_0 ;
 void FUNC_0 (int,unsigned int) ;

void FUNC_1(int VAR_1, unsigned VAR_2)
{
 struct omap_dss_board_info *VAR_3 = VAR_0.pdev->dev.platform_data;

 if (!VAR_3->dsi_disable_pads)
  return;

 return VAR_3->dsi_disable_pads(VAR_1, VAR_2);
}
