
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (struct sdhci_host*,int ,int*) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct sdhci_host *VAR_29)
{
 int VAR_30;
 u8 VAR_31;


 if (FUNC_0(VAR_29, VAR_10, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_26 | VAR_19, VAR_10) ||
     FUNC_0(VAR_29, VAR_11, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_27, VAR_11))
  return -VAR_5;
 VAR_30 = FUNC_1(VAR_29, VAR_12, VAR_0);
 if (VAR_30)
  return -VAR_5;


 if (FUNC_0(VAR_29, VAR_8, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_23 | VAR_25, VAR_8) ||
     FUNC_0(VAR_29, VAR_6, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_21, VAR_6) ||
     FUNC_0(VAR_29, VAR_3, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_17, VAR_3) ||
     FUNC_0(VAR_29, VAR_9, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_24, VAR_9) ||
     FUNC_0(VAR_29, VAR_7, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_22, VAR_7) ||
     FUNC_0(VAR_29, VAR_4, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_18, VAR_4) ||
     FUNC_0(VAR_29, VAR_28, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_20, VAR_28) ||
     FUNC_0(VAR_29, VAR_2, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_16, VAR_2) ||
     FUNC_0(VAR_29, VAR_1, &VAR_31) ||
     FUNC_2(VAR_29, VAR_31 | VAR_14, VAR_1) ||
     FUNC_2(VAR_29, VAR_13, VAR_15))
  return -VAR_5;
 return 0;
}
