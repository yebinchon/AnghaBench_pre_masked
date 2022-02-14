
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_cdns_priv {struct sdhci_cdns_phy_param* phy_params; } ;
struct sdhci_cdns_phy_param {int data; int addr; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int addr; int property; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device_node*,int ,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct device_node *VAR_1,
           struct sdhci_cdns_priv *VAR_2)
{
 struct sdhci_cdns_phy_param *VAR_3 = VAR_2->phy_params;
 u32 VAR_4;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_5 = FUNC_1(VAR_1, VAR_0[VAR_6].property,
        &VAR_4);
  if (VAR_5)
   continue;

  VAR_3->addr = VAR_0[VAR_6].addr;
  VAR_3->data = VAR_4;
  VAR_3++;
 }
}
