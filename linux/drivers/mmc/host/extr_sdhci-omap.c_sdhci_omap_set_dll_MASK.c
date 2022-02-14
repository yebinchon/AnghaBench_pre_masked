
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_omap_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sdhci_omap_host*,int ) ;
 int FUNC_1 (struct sdhci_omap_host*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct sdhci_omap_host *VAR_5,
          int VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_4);
 VAR_8 |= VAR_3;
 VAR_8 &= ~VAR_1;
 VAR_8 |= (VAR_6 << VAR_2);
 FUNC_1(VAR_5, VAR_4, VAR_8);

 VAR_8 |= VAR_0;
 FUNC_1(VAR_5, VAR_4, VAR_8);
 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
  VAR_8 = FUNC_0(VAR_5, VAR_4);
  if (VAR_8 & VAR_0)
   break;
 }
 VAR_8 &= ~VAR_0;
 FUNC_1(VAR_5, VAR_4, VAR_8);
}
