
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_7, int VAR_8)
{
 u8 VAR_9;
 u16 VAR_10;

 VAR_9 = FUNC_0(VAR_7->ioaddr + VAR_5);
 VAR_10 = FUNC_1(VAR_7->ioaddr + VAR_6);
 if (VAR_8 == VAR_1) {
  VAR_9 &= ~VAR_4;
  VAR_10 |= VAR_2 | VAR_3;
 } else {
  VAR_10 &= ~(VAR_2 | VAR_3);
  if (VAR_8 == VAR_0)
   VAR_9 |= VAR_4;
  else
   VAR_9 &= ~VAR_4;
 }
 FUNC_3(VAR_10, VAR_7->ioaddr + VAR_6);
 FUNC_2(VAR_9, VAR_7->ioaddr + VAR_5);
}
