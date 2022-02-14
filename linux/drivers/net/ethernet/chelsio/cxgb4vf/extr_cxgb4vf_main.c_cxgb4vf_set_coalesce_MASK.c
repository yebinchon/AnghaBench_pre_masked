
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {size_t first_qset; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct TYPE_4__ {TYPE_1__* ethrxq; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {int rspq; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct adapter*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
    struct ethtool_coalesce *VAR_1)
{
 const struct port_info *VAR_2 = FUNC_0(VAR_0);
 struct adapter *VAR_3 = VAR_2->adapter;

 return FUNC_1(VAR_3,
       &VAR_3->sge.ethrxq[VAR_2->first_qset].rspq,
       VAR_1->rx_coalesce_usecs,
       VAR_1->rx_max_coalesced_frames);
}
