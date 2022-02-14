
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {int dump_mba_loaded; int q6v5; int active_pd_count; int active_pds; int proxy_pd_count; int proxy_pds; int proxy_reg_count; int proxy_regs; int proxy_clk_count; int proxy_clks; int dev; int active_reg_count; int active_regs; int reset_clk_count; int reset_clks; int active_clk_count; int active_clks; int mba_size; int mba_phys; int mba_perm; int halt_nc; int halt_map; int halt_modem; int halt_q6; scalar_t__ rmb_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct q6v5*,int ,int ) ;
 int FUNC_4 (struct q6v5*,int ,int ) ;
 int FUNC_5 (struct q6v5*,int ,int ) ;
 int FUNC_6 (struct q6v5*,int ,int ) ;
 int FUNC_7 (struct q6v5*) ;
 int FUNC_8 (struct q6v5*) ;
 int FUNC_9 (struct q6v5*,int ,int) ;
 int FUNC_10 (struct q6v5*,int *,int,int ,int ) ;
 int FUNC_11 (struct q6v5*,int ,int ) ;
 int FUNC_12 (struct q6v5*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct q6v5 *VAR_5)
{
 int VAR_6;
 int VAR_7;

 FUNC_13(&VAR_5->q6v5);

 VAR_6 = FUNC_4(VAR_5, VAR_5->active_pds, VAR_5->active_pd_count);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5->dev, "failed to enable active power domains\n");
  goto disable_irqs;
 }

 VAR_6 = FUNC_4(VAR_5, VAR_5->proxy_pds, VAR_5->proxy_pd_count);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5->dev, "failed to enable proxy power domains\n");
  goto disable_active_pds;
 }

 VAR_6 = FUNC_6(VAR_5, VAR_5->proxy_regs,
        VAR_5->proxy_reg_count);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "failed to enable proxy supplies\n");
  goto disable_proxy_pds;
 }

 VAR_6 = FUNC_2(VAR_5->dev, VAR_5->proxy_clks,
         VAR_5->proxy_clk_count);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "failed to enable proxy clocks\n");
  goto disable_proxy_reg;
 }

 VAR_6 = FUNC_6(VAR_5, VAR_5->active_regs,
        VAR_5->active_reg_count);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "failed to enable supplies\n");
  goto disable_proxy_clk;
 }

 VAR_6 = FUNC_2(VAR_5->dev, VAR_5->reset_clks,
         VAR_5->reset_clk_count);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "failed to enable reset clocks\n");
  goto disable_vdd;
 }

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "failed to deassert mss restart\n");
  goto disable_reset_clks;
 }

 VAR_6 = FUNC_2(VAR_5->dev, VAR_5->active_clks,
         VAR_5->active_clk_count);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "failed to enable clocks\n");
  goto assert_reset;
 }


 VAR_6 = FUNC_10(VAR_5, &VAR_5->mba_perm, 1,
          VAR_5->mba_phys, VAR_5->mba_size);
 if (VAR_6) {
  FUNC_0(VAR_5->dev,
   "assigning Q6 access to mba memory failed: %d\n", VAR_6);
  goto disable_active_clks;
 }

 FUNC_15(VAR_5->mba_phys, VAR_5->rmb_base + VAR_2);

 VAR_6 = FUNC_12(VAR_5);
 if (VAR_6)
  goto reclaim_mba;

 VAR_6 = FUNC_9(VAR_5, 0, 5000);
 if (VAR_6 == -VAR_1) {
  FUNC_0(VAR_5->dev, "MBA boot timed out\n");
  goto halt_axi_ports;
 } else if (VAR_6 != VAR_3 &&
     VAR_6 != VAR_4) {
  FUNC_0(VAR_5->dev, "MBA returned unexpected status %d\n", VAR_6);
  VAR_6 = -VAR_0;
  goto halt_axi_ports;
 }

 VAR_5->dump_mba_loaded = 1;
 return 0;

halt_axi_ports:
 FUNC_11(VAR_5, VAR_5->halt_map, VAR_5->halt_q6);
 FUNC_11(VAR_5, VAR_5->halt_map, VAR_5->halt_modem);
 FUNC_11(VAR_5, VAR_5->halt_map, VAR_5->halt_nc);

reclaim_mba:
 VAR_7 = FUNC_10(VAR_5, &VAR_5->mba_perm, 0,
      VAR_5->mba_phys,
      VAR_5->mba_size);
 if (VAR_7) {
  FUNC_0(VAR_5->dev,
   "Failed to reclaim mba buffer, system may become unstable\n");
 }

disable_active_clks:
 FUNC_1(VAR_5->dev, VAR_5->active_clks,
    VAR_5->active_clk_count);
assert_reset:
 FUNC_7(VAR_5);
disable_reset_clks:
 FUNC_1(VAR_5->dev, VAR_5->reset_clks,
    VAR_5->reset_clk_count);
disable_vdd:
 FUNC_5(VAR_5, VAR_5->active_regs,
          VAR_5->active_reg_count);
disable_proxy_clk:
 FUNC_1(VAR_5->dev, VAR_5->proxy_clks,
    VAR_5->proxy_clk_count);
disable_proxy_reg:
 FUNC_5(VAR_5, VAR_5->proxy_regs,
          VAR_5->proxy_reg_count);
disable_proxy_pds:
 FUNC_3(VAR_5, VAR_5->proxy_pds, VAR_5->proxy_pd_count);
disable_active_pds:
 FUNC_3(VAR_5, VAR_5->active_pds, VAR_5->active_pd_count);
disable_irqs:
 FUNC_14(&VAR_5->q6v5);

 return VAR_6;
}
