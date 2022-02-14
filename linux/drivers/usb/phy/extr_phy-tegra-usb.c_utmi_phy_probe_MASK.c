
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tegra_utmip_config {int xcvr_setup; int xcvr_setup_use_fuses; int hsdiscon_level; int hssquelch_level; int xcvr_hsslew; int xcvr_lsrslew; int xcvr_lsfslew; int term_range_adj; int idle_wait_delay; int elastic_limit; int hssync_start_delay; } ;
struct tegra_usb_phy {int is_ulpi_phy; TYPE_1__* soc_config; struct tegra_utmip_config* config; int pad_regs; } ;
struct resource {int start; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {scalar_t__ requires_extra_tuning_parameters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 struct tegra_utmip_config* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int) ;
 int FUNC_5 (struct platform_device*,char*,int *) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int FUNC_7(struct tegra_usb_phy *VAR_4,
     struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 int VAR_7;
 struct tegra_utmip_config *VAR_8;

 VAR_4->is_ulpi_phy = 0;

 VAR_6 = FUNC_4(VAR_5, VAR_3, 1);
 if (!VAR_6) {
  FUNC_0(&VAR_5->dev, "Failed to get UTMI pad regs\n");
  return -VAR_1;
 }

 VAR_4->pad_regs = FUNC_1(&VAR_5->dev, VAR_6->start,
  FUNC_6(VAR_6));
 if (!VAR_4->pad_regs) {
  FUNC_0(&VAR_5->dev, "Failed to remap UTMI pad regs\n");
  return -VAR_0;
 }

 VAR_4->config = FUNC_2(&VAR_5->dev, sizeof(*VAR_8),
      VAR_2);
 if (!VAR_4->config)
  return -VAR_0;

 VAR_8 = VAR_4->config;

 VAR_7 = FUNC_5(VAR_5, "nvidia,hssync-start-delay",
  &VAR_8->hssync_start_delay);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_5, "nvidia,elastic-limit",
  &VAR_8->elastic_limit);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_5, "nvidia,idle-wait-delay",
  &VAR_8->idle_wait_delay);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_5, "nvidia,term-range-adj",
  &VAR_8->term_range_adj);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_5, "nvidia,xcvr-lsfslew",
  &VAR_8->xcvr_lsfslew);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_5, "nvidia,xcvr-lsrslew",
  &VAR_8->xcvr_lsrslew);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_4->soc_config->requires_extra_tuning_parameters) {
  VAR_7 = FUNC_5(VAR_5, "nvidia,xcvr-hsslew",
   &VAR_8->xcvr_hsslew);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_5(VAR_5, "nvidia,hssquelch-level",
   &VAR_8->hssquelch_level);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_5(VAR_5, "nvidia,hsdiscon-level",
   &VAR_8->hsdiscon_level);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_8->xcvr_setup_use_fuses = FUNC_3(
  VAR_5->dev.of_node, "nvidia,xcvr-setup-use-fuses");

 if (!VAR_8->xcvr_setup_use_fuses) {
  VAR_7 = FUNC_5(VAR_5, "nvidia,xcvr-setup",
   &VAR_8->xcvr_setup);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
