
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 scalar_t__ FUNC_0 (struct sdhci_host*,int ,int) ;
 int FUNC_1 (struct sdhci_host*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_0, u8 VAR_1, int VAR_2)
{
 u32 VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_2(VAR_1, VAR_0->ioaddr + VAR_2);

 if (VAR_3)
  FUNC_1(VAR_0, VAR_3);
}
