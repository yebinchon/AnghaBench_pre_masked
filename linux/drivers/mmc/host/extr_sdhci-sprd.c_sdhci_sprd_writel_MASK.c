
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct sdhci_host *VAR_4, u32 VAR_5, int VAR_6)
{

 if (FUNC_0(VAR_6 == VAR_1))
  return;

 if (FUNC_0(VAR_6 == VAR_2 || VAR_6 == VAR_0))
  VAR_5 = VAR_5 & VAR_3;

 FUNC_1(VAR_5, VAR_4->ioaddr + VAR_6);
}
