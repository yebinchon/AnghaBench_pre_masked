
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {scalar_t__ clock; int timing; int mmc; } ;


 int VAR_0 ;





 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_5(struct sdhci_host *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_0(VAR_2->clock <= VAR_1))
  return -VAR_0;

 switch (VAR_2->timing) {
 case 130:
  FUNC_4(VAR_2);
  return 0;
 case 131:
 case 128:
  return FUNC_3(VAR_2);
 case 132:
 case 129:
  FUNC_1(FUNC_2(VAR_2->mmc), "Timing issue might occur in DDR mode\n");
  return 0;
 }

 return VAR_3;
}
