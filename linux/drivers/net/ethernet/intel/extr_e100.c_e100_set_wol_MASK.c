
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nic {TYPE_1__* pdev; int flags; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct nic*,int *,int ) ;
 struct nic* FUNC_3 (struct net_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct nic *VAR_6 = FUNC_3(VAR_4);

 if ((VAR_5->wolopts && VAR_5->wolopts != VAR_1) ||
     !FUNC_0(&VAR_6->pdev->dev))
  return -VAR_0;

 if (VAR_5->wolopts)
  VAR_6->flags |= VAR_3;
 else
  VAR_6->flags &= ~VAR_3;

 FUNC_1(&VAR_6->pdev->dev, VAR_5->wolopts);

 FUNC_2(VAR_6, ((void*)0), VAR_2);

 return 0;
}
