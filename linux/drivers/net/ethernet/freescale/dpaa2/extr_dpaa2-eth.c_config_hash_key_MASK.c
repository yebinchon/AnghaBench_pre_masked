
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpni_rx_dist_cfg {int enable; int dist_size; int key_cfg_iova; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; TYPE_2__* net_dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int dist_cfg ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (int ,int ,int ,struct dpni_rx_dist_cfg*) ;
 int FUNC_3 (struct dpni_rx_dist_cfg*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dpaa2_eth_priv *VAR_0, dma_addr_t VAR_1)
{
 struct device *VAR_2 = VAR_0->net_dev->dev.parent;
 struct dpni_rx_dist_cfg VAR_3;
 int VAR_4;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.key_cfg_iova = VAR_1;
 VAR_3.dist_size = FUNC_1(VAR_0);
 VAR_3.enable = 1;

 VAR_4 = FUNC_2(VAR_0->mc_io, 0, VAR_0->mc_token, &VAR_3);
 if (VAR_4)
  FUNC_0(VAR_2, "dpni_set_rx_hash_dist failed\n");

 return VAR_4;
}
