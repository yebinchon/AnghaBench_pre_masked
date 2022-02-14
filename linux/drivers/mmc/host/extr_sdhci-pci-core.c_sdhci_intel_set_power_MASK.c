
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,unsigned char,unsigned short) ;
 int FUNC_2 (struct sdhci_host*,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_5, unsigned char VAR_6,
      unsigned short VAR_7)
{
 int VAR_8;
 u8 VAR_9;

 FUNC_1(VAR_5, VAR_6, VAR_7);

 if (VAR_6 == VAR_0)
  return;





 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_9 = FUNC_0(VAR_5, VAR_3);
  if (VAR_9 & VAR_4)
   break;
  FUNC_3(VAR_2);
  VAR_9 |= VAR_4;
  FUNC_2(VAR_5, VAR_9, VAR_3);
 }
}
