
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct rproc_hexagon_res {char* hexagon_mba_image; scalar_t__ need_mem_protection; int version; int has_alt_reset; int proxy_pd_names; int active_pd_names; int active_supply; int proxy_supply; int active_clk_names; int reset_clk_names; int proxy_clk_names; } ;
struct rproc {int auto_boot; scalar_t__ priv; } ;
struct q6v5 {char* hexagon_mdt_image; int proxy_clk_count; int reset_clk_count; int active_clk_count; int proxy_reg_count; int active_reg_count; int active_pd_count; int proxy_pd_count; int active_pds; int proxy_pds; int sysmon; int ssr_subdev; int smd_subdev; int glink_subdev; void* mba_perm; void* mpss_perm; int q6v5; scalar_t__ need_mem_protection; int version; int has_alt_reset; int active_regs; int proxy_regs; int active_clks; int reset_clks; int proxy_clks; struct rproc* rproc; TYPE_1__* dev; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; int name; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct rproc_hexagon_res* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,int,char const**) ;
 int FUNC_6 (struct platform_device*,struct q6v5*) ;
 int FUNC_7 (struct q6v5*) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (struct q6v5*,struct platform_device*) ;
 int FUNC_10 (struct q6v5*) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (struct q6v5*,int ,int) ;
 int FUNC_13 (TYPE_1__*,int ,int ) ;
 int FUNC_14 (struct rproc*,int *) ;
 int FUNC_15 (struct rproc*,int *) ;
 int FUNC_16 (struct rproc*,int *,char*) ;
 int FUNC_17 (struct rproc*,char*,int) ;
 int VAR_6 ;
 int FUNC_18 (int *,struct platform_device*,struct rproc*,int ,int ) ;
 int FUNC_19 () ;
 int FUNC_20 (struct rproc*) ;
 struct rproc* FUNC_21 (TYPE_1__*,int ,int *,char const*,int) ;
 int FUNC_22 (struct rproc*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_7)
{
 const struct rproc_hexagon_res *VAR_8;
 struct q6v5 *VAR_9;
 struct rproc *VAR_10;
 const char *VAR_11;
 int VAR_12;

 VAR_8 = FUNC_4(&VAR_7->dev);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_8->need_mem_protection && !FUNC_19())
  return -VAR_2;

 VAR_11 = VAR_8->hexagon_mba_image;
 VAR_12 = FUNC_5(VAR_7->dev.of_node, "firmware-name",
         0, &VAR_11);
 if (VAR_12 < 0 && VAR_12 != -VAR_0)
  return VAR_12;

 VAR_10 = FUNC_21(&VAR_7->dev, VAR_7->name, &VAR_5,
       VAR_11, sizeof(*VAR_9));
 if (!VAR_10) {
  FUNC_3(&VAR_7->dev, "failed to allocate rproc\n");
  return -VAR_1;
 }

 VAR_10->auto_boot = 0;

 VAR_9 = (struct q6v5 *)VAR_10->priv;
 VAR_9->dev = &VAR_7->dev;
 VAR_9->rproc = VAR_10;
 VAR_9->hexagon_mdt_image = "modem.mdt";
 VAR_12 = FUNC_5(VAR_7->dev.of_node, "firmware-name",
         1, &VAR_9->hexagon_mdt_image);
 if (VAR_12 < 0 && VAR_12 != -VAR_0)
  return VAR_12;

 FUNC_6(VAR_7, VAR_9);

 VAR_12 = FUNC_9(VAR_9, VAR_7);
 if (VAR_12)
  goto free_rproc;

 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12)
  goto free_rproc;

 VAR_12 = FUNC_8(&VAR_7->dev, VAR_9->proxy_clks,
          VAR_8->proxy_clk_names);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to get proxy clocks.\n");
  goto free_rproc;
 }
 VAR_9->proxy_clk_count = VAR_12;

 VAR_12 = FUNC_8(&VAR_7->dev, VAR_9->reset_clks,
          VAR_8->reset_clk_names);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to get reset clocks.\n");
  goto free_rproc;
 }
 VAR_9->reset_clk_count = VAR_12;

 VAR_12 = FUNC_8(&VAR_7->dev, VAR_9->active_clks,
          VAR_8->active_clk_names);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to get active clocks.\n");
  goto free_rproc;
 }
 VAR_9->active_clk_count = VAR_12;

 VAR_12 = FUNC_13(&VAR_7->dev, VAR_9->proxy_regs,
      VAR_8->proxy_supply);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to get proxy regulators.\n");
  goto free_rproc;
 }
 VAR_9->proxy_reg_count = VAR_12;

 VAR_12 = FUNC_13(&VAR_7->dev, VAR_9->active_regs,
      VAR_8->active_supply);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to get active regulators.\n");
  goto free_rproc;
 }
 VAR_9->active_reg_count = VAR_12;

 VAR_12 = FUNC_11(&VAR_7->dev, VAR_9->active_pds,
         VAR_8->active_pd_names);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to attach active power domains\n");
  goto free_rproc;
 }
 VAR_9->active_pd_count = VAR_12;

 VAR_12 = FUNC_11(&VAR_7->dev, VAR_9->proxy_pds,
         VAR_8->proxy_pd_names);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to init power domains\n");
  goto detach_active_pds;
 }
 VAR_9->proxy_pd_count = VAR_12;

 VAR_9->has_alt_reset = VAR_8->has_alt_reset;
 VAR_12 = FUNC_10(VAR_9);
 if (VAR_12)
  goto detach_proxy_pds;

 VAR_9->version = VAR_8->version;
 VAR_9->need_mem_protection = VAR_8->need_mem_protection;

 VAR_12 = FUNC_18(&VAR_9->q6v5, VAR_7, VAR_10, VAR_3,
        VAR_6);
 if (VAR_12)
  goto detach_proxy_pds;

 VAR_9->mpss_perm = FUNC_0(VAR_4);
 VAR_9->mba_perm = FUNC_0(VAR_4);
 FUNC_14(VAR_10, &VAR_9->glink_subdev);
 FUNC_15(VAR_10, &VAR_9->smd_subdev);
 FUNC_16(VAR_10, &VAR_9->ssr_subdev, "mpss");
 VAR_9->sysmon = FUNC_17(VAR_10, "modem", 0x12);
 if (FUNC_1(VAR_9->sysmon)) {
  VAR_12 = FUNC_2(VAR_9->sysmon);
  goto detach_proxy_pds;
 }

 VAR_12 = FUNC_20(VAR_10);
 if (VAR_12)
  goto detach_proxy_pds;

 return 0;

detach_proxy_pds:
 FUNC_12(VAR_9, VAR_9->proxy_pds, VAR_9->proxy_pd_count);
detach_active_pds:
 FUNC_12(VAR_9, VAR_9->active_pds, VAR_9->active_pd_count);
free_rproc:
 FUNC_22(VAR_10);

 return VAR_12;
}
