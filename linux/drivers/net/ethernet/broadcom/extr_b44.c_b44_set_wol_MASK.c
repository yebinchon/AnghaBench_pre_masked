
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct b44 {TYPE_1__* sdev; int lock; int flags; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct b44* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct b44 *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->lock);
 if (VAR_3->wolopts & VAR_1)
  VAR_4->flags |= VAR_0;
 else
  VAR_4->flags &= ~VAR_0;
 FUNC_3(&VAR_4->lock);

 FUNC_0(VAR_4->sdev->dev, VAR_3->wolopts & VAR_1);
 return 0;
}
