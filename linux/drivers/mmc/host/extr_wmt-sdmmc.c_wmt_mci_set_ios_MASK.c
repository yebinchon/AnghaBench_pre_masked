
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmt_mci_priv {scalar_t__ sdmmc_base; int clk_sdmmc; } ;
struct mmc_ios {scalar_t__ power_mode; int bus_width; int clock; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 struct wmt_mci_priv* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct wmt_mci_priv*,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_9, struct mmc_ios *VAR_10)
{
 struct wmt_mci_priv *VAR_11;
 u32 VAR_12, VAR_13;

 VAR_11 = FUNC_1(VAR_9);

 if (VAR_10->power_mode == VAR_4) {
  FUNC_3(VAR_9);

  FUNC_4(VAR_11, VAR_8);
 }
 if (VAR_10->power_mode == VAR_3)
  FUNC_4(VAR_11, VAR_7);

 if (VAR_10->clock != 0)
  FUNC_0(VAR_11->clk_sdmmc, VAR_10->clock);

 VAR_12 = FUNC_2(VAR_11->sdmmc_base + VAR_5);
 VAR_13 = FUNC_2(VAR_11->sdmmc_base + VAR_6);

 VAR_12 &= ~(VAR_0 | VAR_1);
 VAR_13 &= ~VAR_2;

 switch (VAR_10->bus_width) {
 case 128:
  VAR_12 |= VAR_0;
  VAR_13 |= VAR_2;
  break;
 case 129:
  VAR_12 |= VAR_1;
  break;
 case 130:
  break;
 }

 FUNC_5(VAR_12, VAR_11->sdmmc_base + VAR_5);
 FUNC_5(VAR_13, VAR_11->sdmmc_base + VAR_6);
}
