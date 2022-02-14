
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline u32 FUNC_2(struct sdhci_host *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_3 == VAR_0))
  return VAR_1;

 return FUNC_0(VAR_2->ioaddr + VAR_3);
}
