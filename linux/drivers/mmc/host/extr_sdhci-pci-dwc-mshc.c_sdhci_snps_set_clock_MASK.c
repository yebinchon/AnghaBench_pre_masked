
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct sdhci_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (struct sdhci_host*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,unsigned int) ;
 int FUNC_3 (struct sdhci_host*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_15, unsigned int VAR_16)
{
 u16 VAR_17;
 u32 VAR_18, VAR_19;

 VAR_19 = FUNC_1(VAR_15, VAR_8);


 VAR_18 = FUNC_0(VAR_15, (VAR_9 + VAR_19));
 VAR_18 &= ~VAR_14;
 FUNC_3(VAR_15, VAR_18, (VAR_9 + VAR_19));

 if (VAR_16 <= 52000000) {
  FUNC_2(VAR_15, VAR_16);
 } else {

  VAR_18 = FUNC_0(VAR_15, (VAR_11 + VAR_19));
  VAR_18 |= VAR_10;
  FUNC_3(VAR_15, VAR_18, (VAR_11 + VAR_19));


  if (VAR_16 == 100000000) {
   FUNC_3(VAR_15, VAR_2, VAR_13);
   FUNC_3(VAR_15, VAR_0,
     VAR_12);
  } else {
   FUNC_3(VAR_15, VAR_3, VAR_13);
   FUNC_3(VAR_15, VAR_1,
     VAR_12);
  }


  VAR_18 = FUNC_0(VAR_15, (VAR_11 + VAR_19));
  VAR_18 &= ~VAR_10;
  FUNC_3(VAR_15, VAR_18, (VAR_11 + VAR_19));


  VAR_17 = VAR_7 | VAR_6 |
   VAR_4;
  FUNC_4(VAR_15, VAR_17, VAR_5);
 }
}
