
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int quirks; int ier; int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_7, bool VAR_8)
{
 u32 VAR_9;

 if ((VAR_7->quirks & VAR_5) ||
     !FUNC_0(VAR_7->mmc))
  return;

 if (VAR_8) {
  VAR_9 = FUNC_1(VAR_7, VAR_4) &
          VAR_0;

  VAR_7->ier |= VAR_9 ? VAR_2 :
           VAR_1;
 } else {
  VAR_7->ier &= ~(VAR_2 | VAR_1);
 }

 FUNC_2(VAR_7, VAR_7->ier, VAR_3);
 FUNC_2(VAR_7, VAR_7->ier, VAR_6);
}
