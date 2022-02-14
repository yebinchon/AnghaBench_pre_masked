
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_2,
         unsigned char VAR_3, bool VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_1);

 VAR_6 = (0x1 << (VAR_0 + VAR_3));
 if (VAR_4)
  VAR_5 |= VAR_6;
 else
  VAR_5 &= ~VAR_6;

 FUNC_1(VAR_2, VAR_5, VAR_1);
}
