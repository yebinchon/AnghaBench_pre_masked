
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mwifiex_private {TYPE_2__* adapter; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_3__ {int conditions; } ;
struct TYPE_4__ {TYPE_1__ hs_cfg; } ;


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
 int FUNC_0 (int ) ;
 struct mwifiex_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_10,
       struct ethtool_wolinfo *VAR_11)
{
 struct mwifiex_private *VAR_12 = FUNC_1(VAR_10);
 u32 VAR_13 = 0;

 if (VAR_11->wolopts & ~(VAR_9|VAR_7|VAR_6|VAR_8))
  return -VAR_0;

 if (VAR_11->wolopts & VAR_9)
  VAR_13 |= VAR_5;
 if (VAR_11->wolopts & VAR_7)
  VAR_13 |= VAR_4;
 if (VAR_11->wolopts & VAR_6)
  VAR_13 |= VAR_1;
 if (VAR_11->wolopts & VAR_8)
  VAR_13 |= VAR_3;
 if (VAR_11->wolopts == 0)
  VAR_13 |= VAR_2;
 VAR_12->adapter->hs_cfg.conditions = FUNC_0(VAR_13);

 return 0;
}
