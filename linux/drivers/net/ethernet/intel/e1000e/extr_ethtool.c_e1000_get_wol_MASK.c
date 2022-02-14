
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;
struct e1000_adapter {int flags; int wol; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_12,
     struct ethtool_wolinfo *VAR_13)
{
 struct e1000_adapter *VAR_14 = FUNC_2(VAR_12);

 VAR_13->supported = 0;
 VAR_13->wolopts = 0;

 if (!(VAR_14->flags & VAR_5) ||
     !FUNC_0(&VAR_14->pdev->dev))
  return;

 VAR_13->supported = VAR_11 | VAR_9 |
     VAR_7 | VAR_8 | VAR_10;


 if (VAR_14->flags & VAR_6) {
  VAR_13->supported &= ~VAR_11;

  if (VAR_14->wol & VAR_1)
   FUNC_1("Interface does not support directed (unicast) frame wake-up packets\n");
 }

 if (VAR_14->wol & VAR_1)
  VAR_13->wolopts |= VAR_11;
 if (VAR_14->wol & VAR_4)
  VAR_13->wolopts |= VAR_9;
 if (VAR_14->wol & VAR_0)
  VAR_13->wolopts |= VAR_7;
 if (VAR_14->wol & VAR_3)
  VAR_13->wolopts |= VAR_8;
 if (VAR_14->wol & VAR_2)
  VAR_13->wolopts |= VAR_10;
}
