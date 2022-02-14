
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct ipvl_dev {struct net_device* phy_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 struct ipvl_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct ipvl_dev *VAR_3 = FUNC_1(VAR_1);
 struct net_device *VAR_4 = VAR_3->phy_dev;

 if (VAR_2 & VAR_0)
  FUNC_0(VAR_4, VAR_1->flags & VAR_0? 1 : -1);
}
