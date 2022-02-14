
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk_priv_data {int phy_iface; scalar_t__ integrated_phy; TYPE_2__* ops; int rx_delay; int tx_delay; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int (* set_to_rmii ) (struct rk_priv_data*) ;int (* set_to_rgmii ) (struct rk_priv_data*,int ,int ) ;} ;
struct TYPE_3__ {struct device dev; } ;







 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct rk_priv_data*,int) ;
 int FUNC_3 (struct rk_priv_data*,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct rk_priv_data*) ;
 int FUNC_7 (struct rk_priv_data*,int ,int ) ;
 int FUNC_8 (struct rk_priv_data*,int ,int ) ;
 int FUNC_9 (struct rk_priv_data*,int ,int ) ;
 int FUNC_10 (struct rk_priv_data*,int ,int ) ;
 int FUNC_11 (struct rk_priv_data*) ;

__attribute__((used)) static int FUNC_12(struct rk_priv_data *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = &VAR_0->pdev->dev;

 VAR_1 = FUNC_2(VAR_0, 1);
 if (VAR_1)
  return VAR_1;


 switch (VAR_0->phy_iface) {
 case 132:
  FUNC_1(VAR_2, "init for RGMII\n");
  VAR_0->ops->set_to_rgmii(VAR_0, VAR_0->tx_delay,
         VAR_0->rx_delay);
  break;
 case 131:
  FUNC_1(VAR_2, "init for RGMII_ID\n");
  VAR_0->ops->set_to_rgmii(VAR_0, 0, 0);
  break;
 case 130:
  FUNC_1(VAR_2, "init for RGMII_RXID\n");
  VAR_0->ops->set_to_rgmii(VAR_0, VAR_0->tx_delay, 0);
  break;
 case 129:
  FUNC_1(VAR_2, "init for RGMII_TXID\n");
  VAR_0->ops->set_to_rgmii(VAR_0, 0, VAR_0->rx_delay);
  break;
 case 128:
  FUNC_1(VAR_2, "init for RMII\n");
  VAR_0->ops->set_to_rmii(VAR_0);
  break;
 default:
  FUNC_0(VAR_2, "NO interface defined!\n");
 }

 VAR_1 = FUNC_3(VAR_0, 1);
 if (VAR_1) {
  FUNC_2(VAR_0, 0);
  return VAR_1;
 }

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 if (VAR_0->integrated_phy)
  FUNC_6(VAR_0);

 return 0;
}
