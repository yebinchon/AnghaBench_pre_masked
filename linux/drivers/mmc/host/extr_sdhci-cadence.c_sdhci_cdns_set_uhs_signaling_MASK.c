
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdhci_host {int dummy; } ;
struct sdhci_cdns_priv {int enhanced_strobe; } ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sdhci_cdns_priv* FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_cdns_priv*,scalar_t__) ;
 int FUNC_2 (struct sdhci_host*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_6,
      unsigned int VAR_7)
{
 struct sdhci_cdns_priv *VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9;

 switch (VAR_7) {
 case 130:
  VAR_9 = VAR_4;
  break;
 case 131:
  VAR_9 = VAR_0;
  break;
 case 129:
  VAR_9 = VAR_1;
  break;
 case 128:
  if (VAR_8->enhanced_strobe)
   VAR_9 = VAR_3;
  else
   VAR_9 = VAR_2;
  break;
 default:
  VAR_9 = VAR_5;
  break;
 }

 FUNC_1(VAR_8, VAR_9);


 if (VAR_9 == VAR_5)
  FUNC_2(VAR_6, VAR_7);
}
