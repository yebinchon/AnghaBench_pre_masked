
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int adaptive_rx; } ;
struct sge_eth_rxq {TYPE_1__ rspq; } ;
struct port_info {size_t first_qset; int nqsets; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct sge_eth_rxq* ethrxq; } ;
struct adapter {TYPE_2__ sge; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, int VAR_1)
{
 int VAR_2;
 struct port_info *VAR_3 = FUNC_0(VAR_0);
 struct adapter *VAR_4 = VAR_3->adapter;
 struct sge_eth_rxq *VAR_5 = &VAR_4->sge.ethrxq[VAR_3->first_qset];

 for (VAR_2 = 0; VAR_2 < VAR_3->nqsets; VAR_2++, VAR_5++)
  VAR_5->rspq.adaptive_rx = VAR_1;

 return 0;
}
