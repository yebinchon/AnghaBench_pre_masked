
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sdhci_host* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_5)
{
 struct sdhci_host *VAR_6 = FUNC_0(VAR_5);
 u32 VAR_7 = FUNC_1(VAR_6->ioaddr + VAR_1);
 u32 VAR_8 = (VAR_7 & VAR_3) >> 0;
 u32 VAR_9 = (VAR_7 & VAR_4) >> 4;


 if (VAR_8 & 1)
  VAR_7 |= (1 << VAR_0);


 if (VAR_9 & 1)
  VAR_7 |= (1 << VAR_2);

 FUNC_2(VAR_7, VAR_6->ioaddr + VAR_1);
}
