
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* phydev; } ;
struct TYPE_2__ {scalar_t__ autoneg; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->phydev) {
  FUNC_0(VAR_1, "phy device not initialized\n");
  return -VAR_0;
 }

 VAR_2 = 0;
 if (VAR_1->phydev->autoneg) {
  VAR_2 = FUNC_1(VAR_1->phydev);
  if (VAR_2 < 0)
   FUNC_0(VAR_1, "phy_start_aneg() = %d\n",
       VAR_2);
 }

 return VAR_2;
}
