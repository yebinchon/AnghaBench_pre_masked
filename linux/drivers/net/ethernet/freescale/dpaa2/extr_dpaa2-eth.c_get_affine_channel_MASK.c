
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dpaa2_eth_priv {int num_channels; struct dpaa2_eth_channel** channel; TYPE_2__* net_dev; } ;
struct TYPE_6__ {int desired_cpu; } ;
struct dpaa2_eth_channel {TYPE_3__ nctx; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static struct dpaa2_eth_channel *FUNC_1(struct dpaa2_eth_priv *VAR_0,
          int VAR_1)
{
 struct device *VAR_2 = VAR_0->net_dev->dev.parent;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_channels; VAR_3++)
  if (VAR_0->channel[VAR_3]->nctx.desired_cpu == VAR_1)
   return VAR_0->channel[VAR_3];




 FUNC_0(VAR_2, "No affine channel found for cpu %d\n", VAR_1);

 return VAR_0->channel[0];
}
