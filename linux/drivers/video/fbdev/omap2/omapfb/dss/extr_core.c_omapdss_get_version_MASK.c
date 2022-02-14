
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_dss_board_info {int version; } ;
typedef enum omapdss_version { ____Placeholder_omapdss_version } omapdss_version ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_4__ {struct omap_dss_board_info* platform_data; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 TYPE_3__ VAR_0 ;

enum omapdss_version FUNC_0(void)
{
 struct omap_dss_board_info *VAR_1 = VAR_0.pdev->dev.platform_data;
 return VAR_1->version;
}
