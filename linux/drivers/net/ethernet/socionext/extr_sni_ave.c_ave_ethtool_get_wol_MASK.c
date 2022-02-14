
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; } ;
struct ethtool_wolinfo {scalar_t__ wolopts; scalar_t__ supported; } ;


 int FUNC_0 (scalar_t__,struct ethtool_wolinfo*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
    struct ethtool_wolinfo *VAR_1)
{
 VAR_1->supported = 0;
 VAR_1->wolopts = 0;

 if (VAR_0->phydev)
  FUNC_0(VAR_0->phydev, VAR_1);
}
