
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_17,
        unsigned int VAR_18)
{
 u16 VAR_19;

 VAR_19 = FUNC_0(VAR_17, VAR_14);

 VAR_19 &= ~VAR_9;
 if (VAR_18 == VAR_1)
  VAR_19 |= VAR_15;
 else if (VAR_18 == VAR_4)
  VAR_19 |= VAR_10;
 else if (VAR_18 == VAR_5)
  VAR_19 |= VAR_11;
 else if (VAR_18 == VAR_6)
  VAR_19 |= VAR_12;
 else if (VAR_18 == VAR_7)
  VAR_19 |= VAR_13;
 else if ((VAR_18 == VAR_3) ||
   (VAR_18 == VAR_0))
  VAR_19 |= VAR_8;
 else if (VAR_18 == VAR_2)
  VAR_19 |= VAR_16;
 FUNC_1(VAR_17, VAR_19, VAR_14);
}
