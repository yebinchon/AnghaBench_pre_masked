
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpni_rx_tc_dist_cfg {int dist_mode; int dist_size; int key_cfg_iova; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; TYPE_2__* net_dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int dist_cfg ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (int ,int ,int ,int ,struct dpni_rx_tc_dist_cfg*) ;
 int FUNC_3 (struct dpni_rx_tc_dist_cfg*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dpaa2_eth_priv *VAR_1, dma_addr_t VAR_2)
{
 struct device *VAR_3 = VAR_1->net_dev->dev.parent;
 struct dpni_rx_tc_dist_cfg VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.key_cfg_iova = VAR_2;
 VAR_4.dist_size = FUNC_1(VAR_1);
 VAR_4.dist_mode = VAR_0;

 VAR_5 = FUNC_2(VAR_1->mc_io, 0, VAR_1->mc_token, 0, &VAR_4);
 if (VAR_5)
  FUNC_0(VAR_3, "dpni_set_rx_tc_dist failed\n");

 return VAR_5;
}
