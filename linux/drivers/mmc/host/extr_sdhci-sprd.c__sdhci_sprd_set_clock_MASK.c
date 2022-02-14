
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_sprd_host {int base_rate; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sdhci_sprd_host* FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*,int) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct sdhci_host*,int,int ) ;
 int FUNC_5 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static inline void FUNC_6(struct sdhci_host *VAR_4,
     unsigned int VAR_5)
{
 struct sdhci_sprd_host *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7, VAR_8, VAR_9;

 FUNC_5(VAR_4, 0, VAR_0);

 VAR_7 = FUNC_3(VAR_6->base_rate, VAR_5);
 VAR_7 = ((VAR_7 & 0x300) >> 2) | ((VAR_7 & 0xFF) << 8);
 FUNC_1(VAR_4, VAR_7);


 VAR_8 = FUNC_2(VAR_4, VAR_3);
 VAR_9 = VAR_2 |
        VAR_1;
 if (VAR_9 != (VAR_8 & VAR_9)) {
  VAR_8 |= VAR_9;
  FUNC_4(VAR_4, VAR_8, VAR_3);
 }
}
