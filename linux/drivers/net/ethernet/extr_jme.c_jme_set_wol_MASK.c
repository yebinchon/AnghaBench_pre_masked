
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int reg_pmcs; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct jme_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_11,
  struct ethtool_wolinfo *VAR_12)
{
 struct jme_adapter *VAR_13 = FUNC_0(VAR_11);

 if (VAR_12->wolopts & (VAR_7 |
    VAR_10 |
    VAR_8 |
    VAR_5 |
    VAR_4))
  return -VAR_0;

 VAR_13->reg_pmcs = 0;

 if (VAR_12->wolopts & VAR_9)
  VAR_13->reg_pmcs |= VAR_1 | VAR_2;

 if (VAR_12->wolopts & VAR_6)
  VAR_13->reg_pmcs |= VAR_3;

 return 0;
}
