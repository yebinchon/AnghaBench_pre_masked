
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sdhci_host*,int) ;
 int FUNC_2 (struct sdhci_host*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_5, u16 VAR_6, int VAR_7)
{
 bool VAR_8 = 0;
 bool VAR_9;
 u8 VAR_10;

 if (VAR_7 == VAR_2) {
  VAR_10 = FUNC_0(VAR_6);
  VAR_8 = VAR_10 == VAR_0 ||
    VAR_10 == VAR_1;
 }

 if (VAR_8)
  VAR_9 = FUNC_2(VAR_5, 0);

 FUNC_4(VAR_6, VAR_5->ioaddr + VAR_7);

 if (VAR_8) {
  FUNC_3(1);
  FUNC_1(VAR_5, VAR_3 | VAR_4);
  FUNC_2(VAR_5, VAR_9);
 }
}
