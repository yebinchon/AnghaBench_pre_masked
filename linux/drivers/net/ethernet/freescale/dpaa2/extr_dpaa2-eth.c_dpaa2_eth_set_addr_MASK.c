
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct net_device {int dev_addr; TYPE_1__ dev; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct net_device*,void*) ;
 struct dpaa2_eth_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, void *VAR_1)
{
 struct dpaa2_eth_priv *VAR_2 = FUNC_3(VAR_0);
 struct device *VAR_3 = VAR_0->dev.parent;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3, "eth_mac_addr() failed (%d)\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_2->mc_io, 0, VAR_2->mc_token,
     VAR_0->dev_addr);
 if (VAR_4) {
  FUNC_0(VAR_3, "dpni_set_primary_mac_addr() failed (%d)\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
