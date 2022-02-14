
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_3)
{
 u8 VAR_4;

 if (VAR_3->quirks & VAR_2)
  return;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_4, VAR_1);
}
