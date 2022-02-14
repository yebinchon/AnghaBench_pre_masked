
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_5__ {int pll; } ;
struct TYPE_4__ {struct omap_overlay_manager* manager; } ;
struct TYPE_6__ {TYPE_2__ pll; int wp; TYPE_1__ output; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_overlay_manager*) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct omap_dss_device *VAR_2)
{
 struct omap_overlay_manager *VAR_3 = VAR_1.output.manager;

 FUNC_3(&VAR_1.wp, 0xffffffff);

 FUNC_0(VAR_3);

 FUNC_5(&VAR_1.wp);

 FUNC_4(&VAR_1.wp, VAR_0);

 FUNC_1(&VAR_1.pll.pll);

 FUNC_2(VAR_2);
}
