
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int wol_criteria; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_9,
    struct ethtool_wolinfo *VAR_10)
{
 struct lbs_private *VAR_11 = VAR_9->ml_priv;

 VAR_10->supported = VAR_8|VAR_6|VAR_5|VAR_7;

 if (VAR_11->wol_criteria == VAR_0)
  return;

 if (VAR_11->wol_criteria & VAR_4)
  VAR_10->wolopts |= VAR_8;
 if (VAR_11->wol_criteria & VAR_3)
  VAR_10->wolopts |= VAR_6;
 if (VAR_11->wol_criteria & VAR_1)
  VAR_10->wolopts |= VAR_5;
 if (VAR_11->wol_criteria & VAR_2)
  VAR_10->wolopts |= VAR_7;
}
