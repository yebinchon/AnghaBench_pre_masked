
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_8, int VAR_9)
{
 u8 VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_6);
 if (VAR_9 == VAR_1) {
  VAR_10 &= ~VAR_2;
  if (VAR_8->version >= VAR_7)
   VAR_10 |= VAR_3;
 } else {
  if (VAR_8->version >= VAR_7)
   VAR_10 &= ~VAR_3;
  if (VAR_9 == VAR_0)
   VAR_10 |= VAR_2;
  else
   VAR_10 &= ~VAR_2;
 }


 VAR_10 &= ~VAR_5;
 VAR_10 |= VAR_4;
 FUNC_1(VAR_8, VAR_10, VAR_6);
}
