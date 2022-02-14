
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int id; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {struct omap_overlay_manager* manager; } ;
struct dpi_data {int lock; int vdds_dsi_reg; scalar_t__ pll; TYPE_1__ output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct dpi_data* FUNC_1 (struct omap_dss_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct omap_overlay_manager*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct omap_dss_device *VAR_2)
{
 struct dpi_data *VAR_3 = FUNC_1(VAR_2);
 struct omap_overlay_manager *VAR_4 = VAR_3->output.manager;

 FUNC_6(&VAR_3->lock);

 FUNC_3(VAR_4);

 if (VAR_3->pll) {
  FUNC_5(VAR_4->id, VAR_1);
  FUNC_4(VAR_3->pll);
 }

 FUNC_0();

 if (FUNC_2(VAR_0))
  FUNC_8(VAR_3->vdds_dsi_reg);

 FUNC_7(&VAR_3->lock);
}
