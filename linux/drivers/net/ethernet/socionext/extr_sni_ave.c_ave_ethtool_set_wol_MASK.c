
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; int phydev; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,struct ethtool_wolinfo*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
          struct ethtool_wolinfo *VAR_4)
{
 int VAR_5;

 if (!VAR_3->phydev ||
     (VAR_4->wolopts & (VAR_1 | VAR_2)))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3->phydev, VAR_4);
 if (!VAR_5)
  FUNC_0(&VAR_3->dev, !!VAR_4->wolopts);

 return VAR_5;
}
