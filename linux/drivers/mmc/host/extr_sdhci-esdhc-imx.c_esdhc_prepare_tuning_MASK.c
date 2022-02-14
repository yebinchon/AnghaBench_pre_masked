
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ ioaddr; int mmc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_5, u32 VAR_6)
{
 u32 VAR_7;


 FUNC_1(1);

 VAR_7 = FUNC_3(VAR_5->ioaddr + VAR_0);
 VAR_7 |= VAR_1 | VAR_3 |
   VAR_2;
 FUNC_4(VAR_7, VAR_5->ioaddr + VAR_0);
 FUNC_4(VAR_6 << 8, VAR_5->ioaddr + VAR_4);
 FUNC_0(FUNC_2(VAR_5->mmc),
  "tuning with delay 0x%x ESDHC_TUNE_CTRL_STATUS 0x%x\n",
   VAR_6, FUNC_3(VAR_5->ioaddr + VAR_4));
}
