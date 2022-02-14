
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; } ;
struct net_device {int dummy; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct phy_device*,int ,int ) ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,void (*) (struct net_device*)) ;
 int FUNC_3 (struct phy_device*) ;

int FUNC_4(struct net_device *VAR_1, struct phy_device *VAR_2,
         void (*VAR_3)(struct net_device *),
         phy_interface_t VAR_4)
{
 int VAR_5;

 if (!VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_2->dev_flags, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_2, VAR_3);
 if (FUNC_1(VAR_2))
  FUNC_3(VAR_2);

 return 0;
}
