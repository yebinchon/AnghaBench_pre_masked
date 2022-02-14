
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhine_private {int quirks; int lock; int wolopts; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rhine_private* FUNC_0 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct rhine_private *VAR_8 = FUNC_0(VAR_6);

 if (!(VAR_8->quirks & VAR_5))
  return;

 FUNC_1(&VAR_8->lock);
 VAR_7->supported = VAR_3 | VAR_1 |
    VAR_4 | VAR_2 | VAR_0;
 VAR_7->wolopts = VAR_8->wolopts;
 FUNC_2(&VAR_8->lock);
}
