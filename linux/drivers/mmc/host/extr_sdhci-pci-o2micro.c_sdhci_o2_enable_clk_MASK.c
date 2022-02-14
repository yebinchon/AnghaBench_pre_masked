
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_host*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_3, u16 VAR_4)
{

 VAR_4 |= VAR_2;
 FUNC_2(VAR_3, VAR_4, VAR_1);

 FUNC_0(VAR_3);
 if (FUNC_1(VAR_3->mmc)) {
  VAR_4 |= VAR_0;
  FUNC_2(VAR_3, VAR_4, VAR_1);
 }
}
