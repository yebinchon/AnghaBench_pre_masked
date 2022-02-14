
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct ksz_device {TYPE_1__* dev_ops; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct TYPE_2__ {int (* phy_setup ) (struct ksz_device*,int,struct phy_device*) ;int (* port_setup ) (struct ksz_device*,int,int) ;} ;


 int FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (struct ksz_device*,int,int) ;
 int FUNC_2 (struct ksz_device*,int,struct phy_device*) ;

int FUNC_3(struct dsa_switch *VAR_0, int VAR_1, struct phy_device *VAR_2)
{
 struct ksz_device *VAR_3 = VAR_0->priv;

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;


 VAR_3->dev_ops->port_setup(VAR_3, VAR_1, 0);
 if (VAR_3->dev_ops->phy_setup)
  VAR_3->dev_ops->phy_setup(VAR_3, VAR_1, VAR_2);





 return 0;
}
