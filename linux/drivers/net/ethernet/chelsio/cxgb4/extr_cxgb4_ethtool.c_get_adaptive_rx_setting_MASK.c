
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int adaptive_rx; } ;
struct sge_eth_rxq {TYPE_2__ rspq; } ;
struct port_info {size_t first_qset; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct sge_eth_rxq* ethrxq; } ;
struct adapter {TYPE_1__ sge; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_0(VAR_0);
 struct adapter *VAR_2 = VAR_1->adapter;
 struct sge_eth_rxq *VAR_3 = &VAR_2->sge.ethrxq[VAR_1->first_qset];

 return VAR_3->rspq.adaptive_rx;
}
