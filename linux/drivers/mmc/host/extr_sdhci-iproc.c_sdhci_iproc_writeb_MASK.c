
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sdhci_host*,int) ;
 int FUNC_2 (struct sdhci_host*,int,int) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_0, u8 VAR_1, int VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_0, (VAR_2 & ~3));
 u32 VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = 0xff << VAR_4;
 u32 VAR_6 = (VAR_3 & ~VAR_5) | (VAR_1 << VAR_4);

 FUNC_2(VAR_0, VAR_6, VAR_2 & ~3);
}
