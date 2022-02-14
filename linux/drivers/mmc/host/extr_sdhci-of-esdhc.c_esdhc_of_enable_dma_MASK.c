
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int mmc; } ;
struct device {int of_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ) ;
 struct device* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sdhci_host *VAR_2)
{
 u32 VAR_3;
 struct device *VAR_4 = FUNC_2(VAR_2->mmc);

 if (FUNC_3(VAR_4->of_node, "fsl,ls1043a-esdhc") ||
     FUNC_3(VAR_4->of_node, "fsl,ls1046a-esdhc"))
  FUNC_1(VAR_4, FUNC_0(40));

 VAR_3 = FUNC_5(VAR_2, VAR_1);

 if (FUNC_4(VAR_4->of_node))
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;

 FUNC_6(VAR_2, VAR_3, VAR_1);
 return 0;
}
