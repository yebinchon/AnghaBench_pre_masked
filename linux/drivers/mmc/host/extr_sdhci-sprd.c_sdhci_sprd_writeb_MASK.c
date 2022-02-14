
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct sdhci_host *VAR_2, u8 VAR_3, int VAR_4)
{
 if (FUNC_1(VAR_4 == VAR_1)) {
  if (FUNC_0(VAR_2->ioaddr + VAR_4) & VAR_0)
   VAR_3 |= VAR_0;
 }

 FUNC_2(VAR_3, VAR_2->ioaddr + VAR_4);
}
