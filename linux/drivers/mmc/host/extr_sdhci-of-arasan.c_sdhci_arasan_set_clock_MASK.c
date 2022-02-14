
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {unsigned int max_clk; } ;
struct sdhci_arasan_data {int is_phy_on; int quirks; int phy; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sdhci_arasan_data* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_2, unsigned int VAR_3)
{
 struct sdhci_pltfm_host *VAR_4 = FUNC_5(VAR_2);
 struct sdhci_arasan_data *VAR_5 = FUNC_4(VAR_4);
 bool VAR_6 = 0;

 if (!FUNC_0(VAR_5->phy)) {
  if (!VAR_5->is_phy_on && VAR_3 <= VAR_0) {
   FUNC_6(VAR_2, VAR_2->max_clk);
   FUNC_3(VAR_5->phy);
   VAR_5->is_phy_on = 1;






  } else if (VAR_3 > VAR_0) {





   VAR_6 = 1;
  }
 }

 if (VAR_6 && VAR_5->is_phy_on) {
  FUNC_2(VAR_5->phy);
  VAR_5->is_phy_on = 0;
 }

 FUNC_6(VAR_2, VAR_3);

 if (VAR_5->quirks & VAR_1)







  FUNC_1(20);

 if (VAR_6) {
  FUNC_3(VAR_5->phy);
  VAR_5->is_phy_on = 1;
 }
}
