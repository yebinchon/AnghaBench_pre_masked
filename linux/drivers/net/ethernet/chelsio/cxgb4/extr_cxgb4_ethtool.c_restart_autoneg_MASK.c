
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ autoneg; } ;
struct port_info {int tx_chan; TYPE_2__* adapter; TYPE_1__ link_cfg; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int pf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3)
{
 struct port_info *VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_1(VAR_3))
  return -VAR_1;
 if (VAR_4->link_cfg.autoneg != VAR_0)
  return -VAR_2;
 FUNC_2(VAR_4->adapter, VAR_4->adapter->pf, VAR_4->tx_chan);
 return 0;
}
