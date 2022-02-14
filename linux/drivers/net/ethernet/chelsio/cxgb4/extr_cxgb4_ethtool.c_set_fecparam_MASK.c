
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_config {int requested_fec; } ;
struct port_info {int tx_chan; TYPE_1__* adapter; struct link_config link_cfg; } ;
struct net_device {int dummy; } ;
struct ethtool_fecparam {int fec; } ;
struct TYPE_2__ {int mbox; } ;


 int FUNC_0 (int ) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,struct link_config*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct ethtool_fecparam *VAR_1)
{
 struct port_info *VAR_2 = FUNC_1(VAR_0);
 struct link_config *VAR_3 = &VAR_2->link_cfg;
 struct link_config VAR_4;
 int VAR_5;




 VAR_4 = *VAR_3;




 VAR_3->requested_fec = FUNC_0(VAR_1->fec);
 VAR_5 = FUNC_2(VAR_2->adapter, VAR_2->adapter->mbox,
       VAR_2->tx_chan, VAR_3);
 if (VAR_5)
  *VAR_3 = VAR_4;
 return VAR_5;
}
