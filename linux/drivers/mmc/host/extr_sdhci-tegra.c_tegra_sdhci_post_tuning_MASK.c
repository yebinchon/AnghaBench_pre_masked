
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_tegra_soc_data {int min_tap_delay; int max_tap_delay; } ;
struct sdhci_tegra {int tuned_tap_delay; int curr_clk_rate; struct sdhci_tegra_soc_data* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int tuning_loop_count; int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 struct sdhci_tegra* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int) ;
 int FUNC_6 (struct sdhci_host*,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_7)
{
 struct sdhci_pltfm_host *VAR_8 = FUNC_3(VAR_7);
 struct sdhci_tegra *VAR_9 = FUNC_2(VAR_8);
 const struct sdhci_tegra_soc_data *VAR_10 = VAR_9->soc_data;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 u8 VAR_15, VAR_16, VAR_17, VAR_18;
 u8 VAR_19, VAR_20;
 u8 VAR_21;
 u32 VAR_22, VAR_23, VAR_24, VAR_25;


 VAR_12 = FUNC_4(VAR_7, VAR_2);
 VAR_9->tuned_tap_delay = (VAR_12 & VAR_0) >>
          VAR_1;
 if (VAR_10->min_tap_delay && VAR_10->max_tap_delay) {
  VAR_13 = VAR_10->min_tap_delay;
  VAR_14 = VAR_10->max_tap_delay;
  VAR_22 = VAR_9->curr_clk_rate / VAR_6;
  VAR_23 = VAR_6 / VAR_22;
  VAR_24 = VAR_23 / VAR_13;
  VAR_25 = VAR_23 / VAR_14;




  VAR_19 = (2 * VAR_25 + VAR_24) / 2;
  VAR_20 = VAR_25 / 4;




  VAR_11 = (VAR_23 * 2) / (VAR_13 + VAR_14);
  VAR_15 = VAR_11 / 2;

  VAR_12 = FUNC_4(VAR_7, VAR_3);
  VAR_16 = VAR_12 & VAR_5;
  VAR_17 = (VAR_12 >> VAR_4) &
     VAR_5;
  VAR_18 = VAR_17 - VAR_16;
  VAR_21 = VAR_7->tuning_loop_count;





  if (VAR_16 == 0 || (VAR_17 == (VAR_21 - 1)) ||
      (VAR_17 == VAR_21 - 2) || VAR_18 >= VAR_19) {
   FUNC_1("%s: Apply tuning correction\n",
     FUNC_0(VAR_7->mmc));
   FUNC_6(VAR_7, VAR_19, VAR_20,
         VAR_15);
  }
 }

 FUNC_5(VAR_7, VAR_9->tuned_tap_delay);
}
