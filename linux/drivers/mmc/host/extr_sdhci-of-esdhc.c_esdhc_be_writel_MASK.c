
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int FUNC_0 (struct sdhci_host*,int,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_0, u32 VAR_1, int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1, 0);
 FUNC_1(VAR_3, VAR_0->ioaddr + VAR_2);
}
