
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int mmc; } ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (struct sdhci_host*,int ,int*,int*) ;

__attribute__((used)) static u32 FUNC_2(struct sdhci_host *VAR_0, u32 VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;

 if (!FUNC_1(VAR_0, VAR_1, &VAR_2, &VAR_3))
  return VAR_1;

 FUNC_0(VAR_0->mmc, VAR_1, VAR_2, VAR_3);

 return 0;
}
