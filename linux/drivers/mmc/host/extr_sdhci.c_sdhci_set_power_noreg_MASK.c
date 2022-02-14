
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int quirks2; int quirks; int pwr; int mmc; } ;


 unsigned char VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,int ,unsigned short) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ,int ) ;

void FUNC_6(struct sdhci_host *VAR_10, unsigned char VAR_11,
      unsigned short VAR_12)
{
 u8 VAR_13 = 0;

 if (VAR_11 != VAR_0) {
  switch (1 << VAR_12) {
  case 133:






  case 132:
   VAR_13 = VAR_1;
   break;
  case 131:
  case 130:
   VAR_13 = VAR_2;
   break;
  case 129:
  case 128:
   VAR_13 = VAR_3;
   break;
  default:
   FUNC_0(1, "%s: Invalid vdd %#x\n",
        FUNC_2(VAR_10->mmc), VAR_12);
   break;
  }
 }

 if (VAR_10->pwr == VAR_13)
  return;

 VAR_10->pwr = VAR_13;

 if (VAR_13 == 0) {
  FUNC_5(VAR_10, 0, VAR_4);
  if (VAR_10->quirks2 & VAR_6)
   FUNC_3(VAR_10);
 } else {




  if (!(VAR_10->quirks & VAR_9))
   FUNC_5(VAR_10, 0, VAR_4);






  if (VAR_10->quirks & VAR_8)
   FUNC_5(VAR_10, VAR_13, VAR_4);

  VAR_13 |= VAR_5;

  FUNC_5(VAR_10, VAR_13, VAR_4);

  if (VAR_10->quirks2 & VAR_6)
   FUNC_4(VAR_10);





  if (VAR_10->quirks & VAR_7)
   FUNC_1(10);
 }
}
