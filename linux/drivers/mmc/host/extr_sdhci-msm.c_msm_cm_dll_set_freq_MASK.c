
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_msm_offset {scalar_t__ core_dll_config; } ;
struct sdhci_host {int clock; scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct sdhci_msm_offset* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct sdhci_host *VAR_2)
{
 u32 VAR_3 = 0, VAR_4;
 const struct sdhci_msm_offset *VAR_5 =
     FUNC_1(VAR_2);


 if (VAR_2->clock <= 112000000)
  VAR_3 = 0;
 else if (VAR_2->clock <= 125000000)
  VAR_3 = 1;
 else if (VAR_2->clock <= 137000000)
  VAR_3 = 2;
 else if (VAR_2->clock <= 150000000)
  VAR_3 = 3;
 else if (VAR_2->clock <= 162000000)
  VAR_3 = 4;
 else if (VAR_2->clock <= 175000000)
  VAR_3 = 5;
 else if (VAR_2->clock <= 187000000)
  VAR_3 = 6;
 else if (VAR_2->clock <= 200000000)
  VAR_3 = 7;

 VAR_4 = FUNC_0(VAR_2->ioaddr + VAR_5->core_dll_config);
 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_3 << VAR_1;
 FUNC_2(VAR_4, VAR_2->ioaddr + VAR_5->core_dll_config);
}
