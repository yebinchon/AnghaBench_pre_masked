
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {int transfer_mode; scalar_t__ pwr_irq_flag; int use_cdr; } ;
struct sdhci_host {int pwr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int) ;


 int VAR_7 ;


 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (struct sdhci_host*,int) ;
 struct sdhci_msm_host* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_5(struct sdhci_host *VAR_9, u16 VAR_10, int VAR_11)
{
 struct sdhci_pltfm_host *VAR_12 = FUNC_4(VAR_9);
 struct sdhci_msm_host *VAR_13 = FUNC_3(VAR_12);
 u32 VAR_14 = 0;

 switch (VAR_11) {
 case 131:
  VAR_14 = (VAR_10 & VAR_6) ? VAR_5 :
   VAR_4;
  break;
 case 129:
  if (VAR_9->pwr && (VAR_10 & VAR_7))
   VAR_14 = VAR_2;
  break;
 case 130:
  VAR_14 = !VAR_10 ? VAR_2 : VAR_3;
  break;
 case 128:
  VAR_13->transfer_mode = VAR_10;
  break;
 case 132:
  if (!VAR_13->use_cdr)
   break;
  if ((VAR_13->transfer_mode & VAR_8) &&
      FUNC_0(VAR_10) != VAR_1 &&
      FUNC_0(VAR_10) != VAR_0)
   FUNC_2(VAR_9, 1);
  else
   FUNC_2(VAR_9, 0);
  break;
 }

 if (VAR_14) {
  VAR_13->pwr_irq_flag = 0;




  FUNC_1();
 }
 return VAR_14;
}
