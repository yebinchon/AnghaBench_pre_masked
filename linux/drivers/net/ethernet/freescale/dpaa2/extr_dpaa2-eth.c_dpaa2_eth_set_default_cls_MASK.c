
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpaa2_eth_priv {int rx_cls_enabled; TYPE_2__* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (struct dpaa2_eth_priv*) ;
 scalar_t__ FUNC_3 (struct dpaa2_eth_priv*) ;
 int FUNC_4 (struct dpaa2_eth_priv*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(struct dpaa2_eth_priv *VAR_2)
{
 struct device *VAR_3 = VAR_2->net_dev->dev.parent;
 int VAR_4;


 if (FUNC_3(VAR_2)) {
  FUNC_0(VAR_3, "Rx cls not supported by current MC version\n");
  return -VAR_1;
 }

 if (!FUNC_1(VAR_2)) {
  FUNC_0(VAR_3, "Rx cls disabled in DPNI options\n");
  return -VAR_1;
 }

 if (!FUNC_4(VAR_2)) {
  FUNC_0(VAR_3, "Rx cls disabled for single queue DPNIs\n");
  return -VAR_1;
 }





 if (!FUNC_2(VAR_2))
  goto out;

 VAR_4 = FUNC_5(VAR_2->net_dev, VAR_0);
 if (VAR_4)
  return VAR_4;

out:
 VAR_2->rx_cls_enabled = 1;

 return 0;
}
