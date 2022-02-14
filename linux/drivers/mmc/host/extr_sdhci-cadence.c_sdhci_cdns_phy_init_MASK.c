
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_cdns_priv {int nr_phy_params; TYPE_1__* phy_params; } ;
struct TYPE_2__ {int data; int addr; } ;


 int FUNC_0 (struct sdhci_cdns_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sdhci_cdns_priv *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_phy_params; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, VAR_0->phy_params[VAR_2].addr,
            VAR_0->phy_params[VAR_2].data);
  if (VAR_1)
   return VAR_1;
 }

 return 0;
}
