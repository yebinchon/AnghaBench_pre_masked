
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ipvl_port {int flags; int mode; } ;
struct ipvl_dev {int phy_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipvl_port* FUNC_0 (int ) ;
 struct ipvl_dev* FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4,
         const struct net_device *VAR_5)
{
 struct ipvl_dev *VAR_6 = FUNC_1(VAR_5);
 struct ipvl_port *VAR_7 = FUNC_0(VAR_6->phy_dev);
 int VAR_8 = -VAR_0;

 if (!VAR_7)
  goto err;

 VAR_8 = -VAR_1;
 if (FUNC_2(VAR_4, VAR_3, VAR_7->mode))
  goto err;
 if (FUNC_2(VAR_4, VAR_2, VAR_7->flags))
  goto err;

 return 0;

err:
 return VAR_8;
}
