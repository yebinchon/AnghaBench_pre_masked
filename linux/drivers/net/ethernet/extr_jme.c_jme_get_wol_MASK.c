
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int reg_pmcs; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct jme_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_5,
  struct ethtool_wolinfo *VAR_6)
{
 struct jme_adapter *VAR_7 = FUNC_0(VAR_5);

 VAR_6->supported = VAR_3 | VAR_4;

 VAR_6->wolopts = 0;

 if (VAR_7->reg_pmcs & (VAR_0 | VAR_1))
  VAR_6->wolopts |= VAR_4;

 if (VAR_7->reg_pmcs & VAR_2)
  VAR_6->wolopts |= VAR_3;

}
