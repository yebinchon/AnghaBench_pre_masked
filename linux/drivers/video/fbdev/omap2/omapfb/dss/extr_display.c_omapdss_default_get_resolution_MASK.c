
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int y_res; int x_res; } ;
struct TYPE_4__ {TYPE_1__ timings; } ;
struct omap_dss_device {TYPE_2__ panel; } ;



void FUNC_0(struct omap_dss_device *VAR_0,
   u16 *VAR_1, u16 *VAR_2)
{
 *VAR_1 = VAR_0->panel.timings.x_res;
 *VAR_2 = VAR_0->panel.timings.y_res;
}
