
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct sdhci_host *VAR_1, u16 VAR_2, int VAR_3)
{

 if (FUNC_0(VAR_3 == VAR_0))
  return;

 FUNC_1(VAR_2, VAR_1->ioaddr + VAR_3);
}
