
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_private {TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,void*) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
       void *VAR_3)
{
 struct sh_eth_private *VAR_4 = FUNC_1(VAR_1);

 VAR_2->version = VAR_0;

 FUNC_2(&VAR_4->pdev->dev);
 FUNC_0(VAR_1, VAR_3);
 FUNC_3(&VAR_4->pdev->dev);
}
