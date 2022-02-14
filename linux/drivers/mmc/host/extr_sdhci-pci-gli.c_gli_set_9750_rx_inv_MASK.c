
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_4, bool VAR_5)
{
 u32 VAR_6;

 FUNC_2(VAR_4);

 VAR_6 = FUNC_3(VAR_4, VAR_2);
 VAR_6 &= ~VAR_3;
 if (VAR_5) {
  VAR_6 |= FUNC_0(VAR_3,
      VAR_1);
 } else {
  VAR_6 |= FUNC_0(VAR_3,
      VAR_0);
 }
 FUNC_4(VAR_4, VAR_6, VAR_2);

 FUNC_1(VAR_4);
}
