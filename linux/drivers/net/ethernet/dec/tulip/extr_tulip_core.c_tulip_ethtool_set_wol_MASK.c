
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int supported; int wolopts; } ;
struct tulip_private {TYPE_2__ wolinfo; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct tulip_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
     struct ethtool_wolinfo *VAR_2)
{
 struct tulip_private *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->wolopts & (~VAR_3->wolinfo.supported))
     return -VAR_0;

 VAR_3->wolinfo.wolopts = VAR_2->wolopts;
 FUNC_0(&VAR_3->pdev->dev, VAR_3->wolinfo.wolopts);
 return 0;
}
