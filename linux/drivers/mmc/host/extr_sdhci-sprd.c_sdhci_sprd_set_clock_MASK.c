
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {unsigned int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sdhci_host*,unsigned int) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*,int,int) ;
 int FUNC_4 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_4, unsigned int VAR_5)
{
 bool VAR_6 = 0, VAR_7 = 0;

 if (VAR_5 == 0) {
  FUNC_4(VAR_4, 0, VAR_0);
 } else if (VAR_5 != VAR_4->clock) {
  FUNC_2(VAR_4);
  FUNC_0(VAR_4, VAR_5);

  if (VAR_5 <= 400000)
   VAR_6 = 1;
  FUNC_3(VAR_4, VAR_1 |
       VAR_2, VAR_6);
  VAR_7 = 1;
 } else {
  FUNC_0(VAR_4, VAR_5);
 }







 if (VAR_7 && VAR_5 > VAR_3)
  FUNC_1(VAR_4);
}
