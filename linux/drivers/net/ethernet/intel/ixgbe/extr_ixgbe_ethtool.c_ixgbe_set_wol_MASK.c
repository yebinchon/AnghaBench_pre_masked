
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_adapter {int wol; TYPE_1__* pdev; } ;
struct ethtool_wolinfo {int wolopts; } ;
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
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*,struct ethtool_wolinfo*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_13, struct ethtool_wolinfo *VAR_14)
{
 struct ixgbe_adapter *VAR_15 = FUNC_2(VAR_13);

 if (VAR_14->wolopts & (VAR_11 | VAR_5 | VAR_9 |
       VAR_7))
  return -VAR_0;

 if (FUNC_1(VAR_15, VAR_14))
  return VAR_14->wolopts ? -VAR_0 : 0;

 VAR_15->wol = 0;

 if (VAR_14->wolopts & VAR_12)
  VAR_15->wol |= VAR_2;
 if (VAR_14->wolopts & VAR_10)
  VAR_15->wol |= VAR_4;
 if (VAR_14->wolopts & VAR_6)
  VAR_15->wol |= VAR_1;
 if (VAR_14->wolopts & VAR_8)
  VAR_15->wol |= VAR_3;

 FUNC_0(&VAR_15->pdev->dev, VAR_15->wol);

 return 0;
}
