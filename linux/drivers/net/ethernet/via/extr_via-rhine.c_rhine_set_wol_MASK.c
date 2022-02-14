
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rhine_private {int quirks; int wolopts; int lock; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rhine_private* FUNC_0 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_7, struct ethtool_wolinfo *VAR_8)
{
 struct rhine_private *VAR_9 = FUNC_0(VAR_7);
 u32 VAR_10 = VAR_4 | VAR_2 |
        VAR_5 | VAR_3 | VAR_1;

 if (!(VAR_9->quirks & VAR_6))
  return -VAR_0;

 if (VAR_8->wolopts & ~VAR_10)
  return -VAR_0;

 FUNC_1(&VAR_9->lock);
 VAR_9->wolopts = VAR_8->wolopts;
 FUNC_2(&VAR_9->lock);

 return 0;
}
