
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk_priv_data {int phy_iface; TYPE_2__* ops; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int (* set_rmii_speed ) (struct rk_priv_data*,unsigned int) ;int (* set_rgmii_speed ) (struct rk_priv_data*,unsigned int) ;} ;
struct TYPE_3__ {struct device dev; } ;







 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct rk_priv_data*,unsigned int) ;
 int FUNC_2 (struct rk_priv_data*,unsigned int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, unsigned int VAR_1)
{
 struct rk_priv_data *VAR_2 = VAR_0;
 struct device *VAR_3 = &VAR_2->pdev->dev;

 switch (VAR_2->phy_iface) {
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_2->ops->set_rgmii_speed(VAR_2, VAR_1);
  break;
 case 128:
  VAR_2->ops->set_rmii_speed(VAR_2, VAR_1);
  break;
 default:
  FUNC_0(VAR_3, "unsupported interface %d", VAR_2->phy_iface);
 }
}
