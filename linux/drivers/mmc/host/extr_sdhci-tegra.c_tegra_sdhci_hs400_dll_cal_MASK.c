
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int mmc; scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4, VAR_2);
 VAR_5 |= VAR_0;
 FUNC_4(VAR_4, VAR_5, VAR_2);


 VAR_6 = FUNC_2(VAR_4->ioaddr + VAR_3,
     VAR_5, !(VAR_5 & VAR_1),
     1000, 5000);
 if (VAR_6)
  FUNC_0(FUNC_1(VAR_4->mmc),
   "HS400 delay line calibration timed out\n");
}
