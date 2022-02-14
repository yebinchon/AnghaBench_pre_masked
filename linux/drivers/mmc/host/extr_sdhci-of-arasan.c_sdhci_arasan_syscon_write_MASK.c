
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
struct sdhci_arasan_soc_ctl_field {int reg; int shift; scalar_t__ width; } ;
struct sdhci_arasan_data {TYPE_1__* soc_ctl_map; struct regmap* soc_ctl_base; } ;
struct regmap {int dummy; } ;
typedef int s16 ;
struct TYPE_2__ {scalar_t__ hiword_update; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct regmap*,int,int ,int) ;
 int FUNC_5 (struct regmap*,int,int ) ;
 struct sdhci_arasan_data* FUNC_6 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_7 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_8(struct sdhci_host *VAR_1,
       const struct sdhci_arasan_soc_ctl_field *VAR_2,
       u32 VAR_3)
{
 struct sdhci_pltfm_host *VAR_4 = FUNC_7(VAR_1);
 struct sdhci_arasan_data *VAR_5 = FUNC_6(VAR_4);
 struct regmap *VAR_6 = VAR_5->soc_ctl_base;
 u32 VAR_7 = VAR_2->reg;
 u16 VAR_8 = VAR_2->width;
 s16 VAR_9 = VAR_2->shift;
 int VAR_10;







 if (VAR_9 < 0)
  return -VAR_0;

 if (VAR_5->soc_ctl_map->hiword_update)
  VAR_10 = FUNC_5(VAR_6, VAR_7,
       FUNC_1(VAR_3, FUNC_0(VAR_8, 0),
       VAR_9));
 else
  VAR_10 = FUNC_4(VAR_6, VAR_7,
      FUNC_0(VAR_9 + VAR_8, VAR_9),
      VAR_3 << VAR_9);


 if (VAR_10)
  FUNC_3("%s: Regmap write fail: %d\n",
    FUNC_2(VAR_1->mmc), VAR_10);

 return VAR_10;
}
