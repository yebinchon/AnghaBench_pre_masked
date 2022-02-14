
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_eth_private {int wol_enabled; TYPE_2__* pdev; TYPE_1__* cd; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct sh_eth_private *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_4->cd->magic || VAR_3->wolopts & ~VAR_1)
  return -VAR_0;

 VAR_4->wol_enabled = !!(VAR_3->wolopts & VAR_1);

 FUNC_0(&VAR_4->pdev->dev, VAR_4->wol_enabled);

 return 0;
}
