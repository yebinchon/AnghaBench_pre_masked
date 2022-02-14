
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_3, bool VAR_4)
{
 if (VAR_4)
  VAR_3->ier |= VAR_0;
 else
  VAR_3->ier &= ~VAR_0;
 FUNC_0(VAR_3, VAR_3->ier, VAR_1);
 FUNC_0(VAR_3, VAR_3->ier, VAR_2);
}
