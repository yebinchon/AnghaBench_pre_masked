
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int,int) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct sdhci_host *VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;


 VAR_5 = VAR_1;
 while (VAR_5 < VAR_0) {
  FUNC_2(VAR_3, VAR_5);
  if (!FUNC_4(VAR_3->mmc, VAR_4, ((void*)0)))
   break;
  VAR_5 += VAR_2;
 }


 VAR_6 = VAR_5 + VAR_2;
 while (VAR_6 < VAR_0) {
  FUNC_2(VAR_3, VAR_6);
  if (FUNC_4(VAR_3->mmc, VAR_4, ((void*)0))) {
   VAR_6 -= VAR_2;
   break;
  }
  VAR_6 += VAR_2;
 }


 VAR_7 = (VAR_5 + VAR_6) / 2;
 FUNC_2(VAR_3, VAR_7);
 VAR_8 = FUNC_4(VAR_3->mmc, VAR_4, ((void*)0));
 FUNC_1(VAR_3);

 FUNC_0(FUNC_3(VAR_3->mmc), "tuning %s at 0x%x ret %d\n",
  VAR_8 ? "failed" : "passed", VAR_7, VAR_8);

 return VAR_8;
}
