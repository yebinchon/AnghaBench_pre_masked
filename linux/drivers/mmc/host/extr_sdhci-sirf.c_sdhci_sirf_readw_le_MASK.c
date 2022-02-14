
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(struct sdhci_host *VAR_2, int VAR_3)
{
 u16 VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_2->ioaddr + VAR_3);

 if (FUNC_1(VAR_3 == VAR_0)) {
  VAR_4 = FUNC_0(VAR_2->ioaddr + VAR_0);
  VAR_4 |= VAR_1;
 }

 return VAR_4;
}
