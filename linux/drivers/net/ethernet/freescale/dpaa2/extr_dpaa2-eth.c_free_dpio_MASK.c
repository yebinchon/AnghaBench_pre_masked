
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpaa2_eth_priv {int num_channels; struct dpaa2_eth_channel** channel; TYPE_2__* net_dev; } ;
struct dpaa2_eth_channel {int nctx; int dpio; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ,int *,struct device*) ;
 int FUNC_1 (struct dpaa2_eth_priv*,struct dpaa2_eth_channel*) ;

__attribute__((used)) static void FUNC_2(struct dpaa2_eth_priv *VAR_0)
{
 struct device *VAR_1 = VAR_0->net_dev->dev.parent;
 struct dpaa2_eth_channel *VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0->num_channels; VAR_3++) {
  VAR_2 = VAR_0->channel[VAR_3];
  FUNC_0(VAR_2->dpio, &VAR_2->nctx, VAR_1);
  FUNC_1(VAR_0, VAR_2);
 }
}
