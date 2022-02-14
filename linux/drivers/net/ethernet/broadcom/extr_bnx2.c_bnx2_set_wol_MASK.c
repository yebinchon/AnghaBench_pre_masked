
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct bnx2 {int flags; int wol; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 struct bnx2* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct bnx2 *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4->wolopts & ~VAR_2)
  return -VAR_1;

 if (VAR_4->wolopts & VAR_2) {
  if (VAR_5->flags & VAR_0)
   return -VAR_1;

  VAR_5->wol = 1;
 }
 else {
  VAR_5->wol = 0;
 }

 FUNC_0(&VAR_5->pdev->dev, VAR_5->wol);

 return 0;
}
