
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {int dummy; } ;
struct f_sdhost_priv {scalar_t__ enable_cmd_dat_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct f_sdhost_priv* FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 scalar_t__ FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_3, u8 VAR_4)
{
 struct f_sdhost_priv *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 if (FUNC_2(VAR_3, VAR_2) == 0)
  FUNC_5(VAR_3, 0xBC01, VAR_2);

 FUNC_3(VAR_3, VAR_4);

 if (VAR_5->enable_cmd_dat_delay) {
  VAR_6 = FUNC_1(VAR_3, VAR_1);
  VAR_6 |= VAR_0;
  FUNC_4(VAR_3, VAR_6, VAR_1);
 }
}
