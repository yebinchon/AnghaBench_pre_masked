
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sdhci_host*,int) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_4, bool VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_4, 0);

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_6 |= VAR_1;
 FUNC_2(VAR_4, VAR_6, VAR_0);

 VAR_6 = FUNC_1(VAR_4, VAR_2);
 if (VAR_5)
  VAR_6 |= VAR_3;
 else
  VAR_6 &= ~VAR_3;
 FUNC_2(VAR_4, VAR_6, VAR_2);

 FUNC_0(VAR_4, 1);
}
