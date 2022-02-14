
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct igb_adapter {int flags; int wol; TYPE_1__* pdev; } ;
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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_15, struct ethtool_wolinfo *VAR_16)
{
 struct igb_adapter *VAR_17 = FUNC_1(VAR_15);

 if (VAR_16->wolopts & (VAR_7 | VAR_11 | VAR_9))
  return -VAR_5;

 if (!(VAR_17->flags & VAR_6))
  return VAR_16->wolopts ? -VAR_5 : 0;


 VAR_17->wol = 0;

 if (VAR_16->wolopts & VAR_14)
  VAR_17->wol |= VAR_1;
 if (VAR_16->wolopts & VAR_12)
  VAR_17->wol |= VAR_4;
 if (VAR_16->wolopts & VAR_8)
  VAR_17->wol |= VAR_0;
 if (VAR_16->wolopts & VAR_10)
  VAR_17->wol |= VAR_3;
 if (VAR_16->wolopts & VAR_13)
  VAR_17->wol |= VAR_2;
 FUNC_0(&VAR_17->pdev->dev, VAR_17->wol);

 return 0;
}
