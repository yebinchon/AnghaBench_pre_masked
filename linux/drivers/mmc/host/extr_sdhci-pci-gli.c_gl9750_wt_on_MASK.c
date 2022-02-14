
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdhci_host {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_4(struct sdhci_host *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_4);

 if (VAR_5 == VAR_0)
  return;

 VAR_4 &= ~VAR_2;
 VAR_4 |= FUNC_1(VAR_2, VAR_0);

 FUNC_3(VAR_3, VAR_4, VAR_1);
}
