
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_omap_host {int flags; struct pinctrl_state** pinctrl_state; struct pinctrl_state* pinctrl; struct device* dev; struct sdhci_host* host; } ;
struct sdhci_host {struct mmc_host* mmc; } ;
struct pinctrl_state {int dummy; } ;
struct mmc_host {int caps2; int caps; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pinctrl_state*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int FUNC_1 (struct pinctrl_state*) ;
 int VAR_22 ;
 int FUNC_2 (struct device*,char*) ;
 struct pinctrl_state** FUNC_3 (struct device*,int,int,int ) ;
 struct pinctrl_state* FUNC_4 (struct device*) ;
 struct pinctrl_state* FUNC_5 (struct pinctrl_state*,char*) ;
 struct pinctrl_state* FUNC_6 (struct sdhci_omap_host*,char*,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct sdhci_omap_host
         *VAR_23)
{
 struct device *VAR_24 = VAR_23->dev;
 struct sdhci_host *VAR_25 = VAR_23->host;
 struct mmc_host *VAR_26 = VAR_25->mmc;
 u32 *VAR_27 = &VAR_26->caps;
 u32 *VAR_28 = &VAR_26->caps2;
 struct pinctrl_state *VAR_29;
 struct pinctrl_state **VAR_30;

 if (!(VAR_23->flags & VAR_22))
  return 0;

 VAR_30 = FUNC_3(VAR_24,
         VAR_15 + 1,
         sizeof(*VAR_30),
         VAR_1);
 if (!VAR_30)
  return -VAR_0;

 VAR_23->pinctrl = FUNC_4(VAR_23->dev);
 if (FUNC_0(VAR_23->pinctrl)) {
  FUNC_2(VAR_24, "Cannot get pinctrl\n");
  return FUNC_1(VAR_23->pinctrl);
 }

 VAR_29 = FUNC_5(VAR_23->pinctrl, "default");
 if (FUNC_0(VAR_29)) {
  FUNC_2(VAR_24, "no pinctrl state for default mode\n");
  return FUNC_1(VAR_29);
 }
 VAR_30[VAR_12] = VAR_29;

 VAR_29 = FUNC_6(VAR_23, "sdr104", VAR_27,
       VAR_8);
 if (!FUNC_0(VAR_29))
  VAR_30[VAR_18] = VAR_29;

 VAR_29 = FUNC_6(VAR_23, "ddr50", VAR_27,
       VAR_7);
 if (!FUNC_0(VAR_29))
  VAR_30[VAR_17] = VAR_29;

 VAR_29 = FUNC_6(VAR_23, "sdr50", VAR_27,
       VAR_11);
 if (!FUNC_0(VAR_29))
  VAR_30[VAR_21] = VAR_29;

 VAR_29 = FUNC_6(VAR_23, "sdr25", VAR_27,
       VAR_10);
 if (!FUNC_0(VAR_29))
  VAR_30[VAR_20] = VAR_29;

 VAR_29 = FUNC_6(VAR_23, "sdr12", VAR_27,
       VAR_9);
 if (!FUNC_0(VAR_29))
  VAR_30[VAR_19] = VAR_29;

 VAR_29 = FUNC_6(VAR_23, "ddr_1_8v", VAR_27,
       VAR_3);
 if (!FUNC_0(VAR_29)) {
  VAR_30[VAR_13] = VAR_29;
 } else {
  VAR_29 = FUNC_6(VAR_23, "ddr_3_3v",
        VAR_27,
        VAR_4);
  if (!FUNC_0(VAR_29))
   VAR_30[VAR_13] = VAR_29;
 }

 VAR_29 = FUNC_6(VAR_23, "hs", VAR_27,
       VAR_6);
 if (!FUNC_0(VAR_29))
  VAR_30[VAR_16] = VAR_29;

 VAR_29 = FUNC_6(VAR_23, "hs", VAR_27,
       VAR_5);
 if (!FUNC_0(VAR_29))
  VAR_30[VAR_14] = VAR_29;

 VAR_29 = FUNC_6(VAR_23, "hs200_1_8v", VAR_28,
       VAR_2);
 if (!FUNC_0(VAR_29))
  VAR_30[VAR_15] = VAR_29;

 VAR_23->pinctrl_state = VAR_30;

 return 0;
}
