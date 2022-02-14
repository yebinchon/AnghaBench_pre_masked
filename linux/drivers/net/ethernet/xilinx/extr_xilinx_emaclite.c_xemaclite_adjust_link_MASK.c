
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int speed; int duplex; int link; } ;
struct net_local {int last_link; struct phy_device* phy_dev; } ;
struct net_device {int dummy; } ;


 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct net_local *VAR_1 = FUNC_0(VAR_0);
 struct phy_device *VAR_2 = VAR_1->phy_dev;
 int VAR_3;


 VAR_3 = VAR_2->speed | (VAR_2->duplex << 1) | VAR_2->link;

 if (VAR_1->last_link != VAR_3) {
  VAR_1->last_link = VAR_3;
  FUNC_1(VAR_2);
 }
}
