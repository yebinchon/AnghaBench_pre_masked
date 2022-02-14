
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pad_type; int reg; int set_soc_pad; } ;
struct xenon_emmc_phy_params {TYPE_1__ pad_ctrl; } ;
struct sdhci_host {int mmc; } ;
struct resource {int dummy; } ;
typedef char const device_node ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,struct resource*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,int,struct resource*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,char*,char const**) ;
 int FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(struct sdhci_host *VAR_4,
    struct device_node *VAR_5,
    struct xenon_emmc_phy_params *VAR_6)
{
 int VAR_7 = 0;
 const char *VAR_8;
 struct resource VAR_9;

 if (FUNC_6(VAR_5, "marvell,armada-3700-sdhci"))
  VAR_6->pad_ctrl.set_soc_pad = VAR_3;
 else
  return 0;

 if (FUNC_5(VAR_5, 1, &VAR_9)) {
  FUNC_2(FUNC_4(VAR_4->mmc), "Unable to find SoC PAD ctrl register address for %pOFn\n",
   VAR_5);
  return -VAR_0;
 }

 VAR_6->pad_ctrl.reg = FUNC_3(FUNC_4(VAR_4->mmc),
           &VAR_9);
 if (FUNC_0(VAR_6->pad_ctrl.reg))
  return FUNC_1(VAR_6->pad_ctrl.reg);

 VAR_7 = FUNC_7(VAR_5, "marvell,pad-type", &VAR_8);
 if (VAR_7) {
  FUNC_2(FUNC_4(VAR_4->mmc), "Unable to determine SoC PHY PAD ctrl type\n");
  return VAR_7;
 }
 if (!FUNC_8(VAR_8, "sd")) {
  VAR_6->pad_ctrl.pad_type = VAR_2;
 } else if (!FUNC_8(VAR_8, "fixed-1-8v")) {
  VAR_6->pad_ctrl.pad_type = VAR_1;
 } else {
  FUNC_2(FUNC_4(VAR_4->mmc), "Unsupported SoC PHY PAD ctrl type %s\n",
   VAR_8);
  return -VAR_0;
 }

 return VAR_7;
}
