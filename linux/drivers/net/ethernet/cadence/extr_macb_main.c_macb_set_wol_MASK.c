
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct macb {int wol; TYPE_1__* pdev; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 struct macb* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct macb *VAR_6 = FUNC_1(VAR_4);

 if (!(VAR_6->wol & VAR_2) ||
     (VAR_5->wolopts & ~VAR_3))
  return -VAR_0;

 if (VAR_5->wolopts & VAR_3)
  VAR_6->wol |= VAR_1;
 else
  VAR_6->wol &= ~VAR_1;

 FUNC_0(&VAR_6->pdev->dev, VAR_6->wol & VAR_1);

 return 0;
}
