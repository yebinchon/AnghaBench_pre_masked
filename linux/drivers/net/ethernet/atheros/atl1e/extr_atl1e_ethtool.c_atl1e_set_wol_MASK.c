
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct atl1e_adapter {int wol; TYPE_1__* pdev; } ;
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
 int FUNC_0 (int *,int ) ;
 struct atl1e_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_10, struct ethtool_wolinfo *VAR_11)
{
 struct atl1e_adapter *VAR_12 = FUNC_1(VAR_10);

 if (VAR_11->wolopts & (VAR_3 | VAR_6 |
       VAR_9 | VAR_7 | VAR_4))
  return -VAR_2;

 VAR_12->wol = 0;

 if (VAR_11->wolopts & VAR_5)
  VAR_12->wol |= VAR_1;
 if (VAR_11->wolopts & VAR_8)
  VAR_12->wol |= VAR_0;

 FUNC_0(&VAR_12->pdev->dev, VAR_12->wol);

 return 0;
}
