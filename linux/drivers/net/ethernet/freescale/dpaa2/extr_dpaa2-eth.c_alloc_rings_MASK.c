
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct dpaa2_eth_priv {int num_channels; TYPE_2__** channel; struct net_device* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int store; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct dpaa2_eth_priv *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->net_dev;
 struct device *VAR_4 = VAR_3->dev.parent;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_channels; VAR_5++) {
  VAR_2->channel[VAR_5]->store =
   FUNC_0(VAR_0, VAR_4);
  if (!VAR_2->channel[VAR_5]->store) {
   FUNC_2(VAR_3, "dpaa2_io_store_create() failed\n");
   goto err_ring;
  }
 }

 return 0;

err_ring:
 for (VAR_5 = 0; VAR_5 < VAR_2->num_channels; VAR_5++) {
  if (!VAR_2->channel[VAR_5]->store)
   break;
  FUNC_1(VAR_2->channel[VAR_5]->store);
 }

 return -VAR_1;
}
