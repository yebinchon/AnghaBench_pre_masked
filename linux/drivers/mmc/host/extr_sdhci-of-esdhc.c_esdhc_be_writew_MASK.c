
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_host*,int,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_1, u16 VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 & ~0x3;
 u32 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_1->ioaddr + VAR_4);
 VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_2, VAR_5);
 if (VAR_3 != VAR_0)
  FUNC_2(VAR_6, VAR_1->ioaddr + VAR_4);
}
