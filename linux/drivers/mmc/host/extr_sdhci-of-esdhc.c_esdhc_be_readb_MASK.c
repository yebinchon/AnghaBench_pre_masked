
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int FUNC_0 (struct sdhci_host*,int,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(struct sdhci_host *VAR_0, int VAR_1)
{
 u8 VAR_2;
 u32 VAR_3;
 int VAR_4 = VAR_1 & ~0x3;

 VAR_3 = FUNC_1(VAR_0->ioaddr + VAR_4);
 VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_3);
 return VAR_2;
}
