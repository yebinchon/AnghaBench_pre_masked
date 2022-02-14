
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_2->ioaddr + VAR_0);
 VAR_3 |= VAR_1;
 FUNC_1(VAR_3, VAR_2->ioaddr + VAR_0);
}
