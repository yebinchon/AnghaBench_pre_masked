
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sunxi_priv_data {int mux_handle; } ;
struct stmmac_priv {int mii; TYPE_2__* device; TYPE_1__* plat; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {struct sunxi_priv_data* bsp_priv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct device_node*,int ,int *,struct stmmac_priv*,int ) ;
 int VAR_1 ;
 struct device_node* FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct stmmac_priv *VAR_2)
{
 int VAR_3;
 struct device_node *VAR_4;
 struct sunxi_priv_data *VAR_5 = VAR_2->plat->bsp_priv;

 VAR_4 = FUNC_1(VAR_2->device->of_node, "mdio-mux");
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2->device, VAR_4, VAR_1,
       &VAR_5->mux_handle, VAR_2, VAR_2->mii);
 return VAR_3;
}
