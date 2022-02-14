
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* manager; int port_num; } ;
struct dpi_data {int lock; int vdds_dsi_reg; scalar_t__ pll; struct omap_dss_device output; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct dpi_data*) ;
 struct dpi_data* FUNC_4 (struct omap_dss_device*) ;
 int FUNC_5 (struct dpi_data*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct omap_dss_device *VAR_2)
{
 struct dpi_data *VAR_3 = FUNC_4(VAR_2);
 struct omap_dss_device *VAR_4 = &VAR_3->output;
 int VAR_5;

 FUNC_12(&VAR_3->lock);

 if (FUNC_7(VAR_1) && !VAR_3->vdds_dsi_reg) {
  FUNC_0("no VDSS_DSI regulator\n");
  VAR_5 = -VAR_0;
  goto err_no_reg;
 }

 if (VAR_4->manager == ((void*)0)) {
  FUNC_0("failed to enable display: no output/manager\n");
  VAR_5 = -VAR_0;
  goto err_no_out_mgr;
 }

 if (FUNC_7(VAR_1)) {
  VAR_5 = FUNC_15(VAR_3->vdds_dsi_reg);
  if (VAR_5)
   goto err_reg_enable;
 }

 VAR_5 = FUNC_1();
 if (VAR_5)
  goto err_get_dispc;

 VAR_5 = FUNC_6(VAR_4->port_num, VAR_4->manager->id);
 if (VAR_5)
  goto err_src_sel;

 if (VAR_3->pll) {
  VAR_5 = FUNC_10(VAR_3->pll);
  if (VAR_5)
   goto err_dsi_pll_init;
 }

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  goto err_set_mode;

 FUNC_3(VAR_3);

 FUNC_11(2);

 VAR_5 = FUNC_8(VAR_4->manager);
 if (VAR_5)
  goto err_mgr_enable;

 FUNC_13(&VAR_3->lock);

 return 0;

err_mgr_enable:
err_set_mode:
 if (VAR_3->pll)
  FUNC_9(VAR_3->pll);
err_dsi_pll_init:
err_src_sel:
 FUNC_2();
err_get_dispc:
 if (FUNC_7(VAR_1))
  FUNC_14(VAR_3->vdds_dsi_reg);
err_reg_enable:
err_no_out_mgr:
err_no_reg:
 FUNC_13(&VAR_3->lock);
 return VAR_5;
}
