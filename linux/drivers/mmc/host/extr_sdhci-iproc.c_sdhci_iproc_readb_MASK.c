
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sdhci_host*,int) ;

__attribute__((used)) static u8 FUNC_2(struct sdhci_host *VAR_0, int VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_0, (VAR_1 & ~3));
 u8 VAR_3 = VAR_2 >> FUNC_0(VAR_1) & 0xff;
 return VAR_3;
}
