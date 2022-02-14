
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int ier; scalar_t__ tuning_mode; } ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_15)
{
 VAR_15->ier = VAR_0 | VAR_4 |
      VAR_2 | VAR_5 |
      VAR_8 | VAR_7 | VAR_1 |
      VAR_11 | VAR_3 |
      VAR_9;

 if (VAR_15->tuning_mode == VAR_13 ||
     VAR_15->tuning_mode == VAR_14)
  VAR_15->ier |= VAR_10;

 FUNC_0(VAR_15, VAR_15->ier, VAR_6);
 FUNC_0(VAR_15, VAR_15->ier, VAR_12);
}
