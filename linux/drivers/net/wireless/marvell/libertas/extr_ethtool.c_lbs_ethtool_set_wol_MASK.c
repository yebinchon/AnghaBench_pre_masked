
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int wol_criteria; } ;
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

__attribute__((used)) static int FUNC_0(struct net_device *VAR_10,
          struct ethtool_wolinfo *VAR_11)
{
 struct lbs_private *VAR_12 = VAR_10->ml_priv;

 if (VAR_11->wolopts & ~(VAR_9|VAR_7|VAR_6|VAR_8))
  return -VAR_5;

 VAR_12->wol_criteria = 0;
 if (VAR_11->wolopts & VAR_9)
  VAR_12->wol_criteria |= VAR_4;
 if (VAR_11->wolopts & VAR_7)
  VAR_12->wol_criteria |= VAR_3;
 if (VAR_11->wolopts & VAR_6)
  VAR_12->wol_criteria |= VAR_1;
 if (VAR_11->wolopts & VAR_8)
  VAR_12->wol_criteria |= VAR_2;
 if (VAR_11->wolopts == 0)
  VAR_12->wol_criteria |= VAR_0;
 return 0;
}
