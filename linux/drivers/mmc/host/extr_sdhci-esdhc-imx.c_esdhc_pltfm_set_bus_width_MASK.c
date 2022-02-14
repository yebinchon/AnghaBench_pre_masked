
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct sdhci_host*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_4, int VAR_5)
{
 u32 VAR_6;

 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = VAR_0;
  break;
 default:
  VAR_6 = 0;
  break;
 }

 FUNC_0(VAR_4, VAR_2, VAR_6,
   VAR_3);
}
