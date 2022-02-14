
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_host {TYPE_1__* mmc; scalar_t__ ioaddr; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct sdhci_host *VAR_7, int VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_7->ioaddr + VAR_8);

 if (FUNC_1((VAR_8 == VAR_1) &&
   (VAR_7->mmc->caps & VAR_0))) {

  VAR_9 = VAR_4 |
   VAR_5 | VAR_6;
 }

 if (FUNC_1(VAR_8 == VAR_2)) {
  u32 VAR_10 = VAR_9;

  VAR_10 &= ~(0xFF << 16);
  VAR_9 = VAR_10 | (VAR_3 << 16);
 }
 return VAR_9;
}
