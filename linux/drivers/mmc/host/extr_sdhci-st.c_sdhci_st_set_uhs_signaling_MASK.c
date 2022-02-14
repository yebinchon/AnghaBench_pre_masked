
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct st_mmc_platform_data {int top_ioaddr; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ) ;
 struct st_mmc_platform_data* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*,int,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct sdhci_host *VAR_8,
     unsigned int VAR_9)
{
 struct sdhci_pltfm_host *VAR_10 = FUNC_4(VAR_8);
 struct st_mmc_platform_data *VAR_11 = FUNC_3(VAR_10);
 u16 VAR_12 = FUNC_5(VAR_8, VAR_7);
 int VAR_13 = 0;


 VAR_12 &= ~VAR_1;
 switch (VAR_9) {





 case 130:
  FUNC_8(VAR_11->top_ioaddr);
  VAR_12 |= VAR_3 | VAR_6;
  break;
 case 129:
  FUNC_8(VAR_11->top_ioaddr);
  VAR_12 |= VAR_4 | VAR_6;
  break;
 case 128:
  FUNC_8(VAR_11->top_ioaddr);
  VAR_12 |= VAR_5 | VAR_6;
  VAR_13 = FUNC_6(VAR_8);
  break;
 case 131:
 case 133:
  FUNC_8(VAR_11->top_ioaddr);
  VAR_12 |= VAR_2 | VAR_6;
  VAR_13 = FUNC_6(VAR_8);
  break;
 case 132:
 case 134:
  FUNC_8(VAR_11->top_ioaddr);
  VAR_12 |= VAR_0 | VAR_6;
  break;
 }

 if (VAR_13)
  FUNC_1(FUNC_2(VAR_8->mmc), "Error setting dll for clock "
      "(uhs %d)\n", VAR_9);

 FUNC_0(FUNC_2(VAR_8->mmc), "uhs %d, ctrl_2 %04X\n", VAR_9, VAR_12);

 FUNC_7(VAR_8, VAR_12, VAR_7);
}
