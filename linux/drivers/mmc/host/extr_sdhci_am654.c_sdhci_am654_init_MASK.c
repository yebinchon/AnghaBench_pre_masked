
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct sdhci_am654_data {int flags; int base; } ;
struct TYPE_2__ {int caps; } ;


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
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int,int,int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct sdhci_host*) ;
 struct sdhci_am654_data* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_6(struct sdhci_host *VAR_14)
{
 struct sdhci_pltfm_host *VAR_15 = FUNC_5(VAR_14);
 struct sdhci_am654_data *VAR_16 = FUNC_4(VAR_15);
 u32 VAR_17 = 0;
 u32 VAR_18;
 u32 VAR_19;
 int VAR_20;


 VAR_18 = VAR_6 | VAR_7;
 FUNC_2(VAR_16->base, VAR_10, VAR_18, 0x0);

 if (VAR_16->flags & VAR_2) {
  FUNC_0(VAR_16->base, VAR_11, &VAR_19);
  if (~VAR_19 & VAR_0) {

   FUNC_2(VAR_16->base, VAR_9,
        VAR_8, VAR_8);
   VAR_20 = FUNC_1(VAR_16->base,
             VAR_11, VAR_19,
             VAR_19 & VAR_0,
             1, 20);
   if (VAR_20)
    return VAR_20;
  }
 }


 if (VAR_16->flags & VAR_4)
  FUNC_2(VAR_16->base, VAR_9,
       VAR_3, 0);


 if (VAR_14->mmc->caps & VAR_5)
  VAR_17 = VAR_12;

 FUNC_2(VAR_16->base, VAR_1, VAR_13,
      VAR_17);

 return FUNC_3(VAR_14);
}
