
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct sdhci_host *VAR_1, int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->ioaddr + VAR_2);
 if (FUNC_1(VAR_2 == VAR_0 && !(VAR_3 & 0xff)))
  VAR_3 |= 0xc8;

 return VAR_3;
}
