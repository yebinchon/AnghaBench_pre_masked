
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

void FUNC_2(struct sdhci_host *VAR_18, unsigned VAR_19)
{
 u16 VAR_20;

 VAR_20 = FUNC_0(VAR_18, VAR_17);

 VAR_20 &= ~VAR_12;
 if ((VAR_19 == VAR_2) ||
     (VAR_19 == VAR_6))
  VAR_20 |= VAR_13;
 else if (VAR_19 == VAR_7)
  VAR_20 |= VAR_14;
 else if (VAR_19 == VAR_4 ||
   VAR_19 == VAR_1 ||
   VAR_19 == VAR_8)
  VAR_20 |= VAR_15;
 else if (VAR_19 == VAR_9)
  VAR_20 |= VAR_16;
 else if ((VAR_19 == VAR_5) ||
   (VAR_19 == VAR_0))
  VAR_20 |= VAR_11;
 else if (VAR_19 == VAR_3)
  VAR_20 |= VAR_10;
 FUNC_1(VAR_18, VAR_20, VAR_17);
}
