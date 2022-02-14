
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_eth_rxq {int rspq; } ;
struct port_info {size_t first_qset; int nqsets; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct sge_eth_rxq* ethrxq; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (int *,unsigned int,unsigned int) ;
 struct port_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3, VAR_4;
 struct port_info *VAR_5 = FUNC_1(VAR_0);
 struct adapter *VAR_6 = VAR_5->adapter;
 struct sge_eth_rxq *VAR_7 = &VAR_6->sge.ethrxq[VAR_5->first_qset];

 for (VAR_3 = 0; VAR_3 < VAR_5->nqsets; VAR_3++, VAR_7++) {
  VAR_4 = FUNC_0(&VAR_7->rspq, VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
