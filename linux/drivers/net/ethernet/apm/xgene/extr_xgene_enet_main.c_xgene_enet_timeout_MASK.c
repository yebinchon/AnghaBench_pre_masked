
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int txq_cnt; TYPE_1__* mac_ops; } ;
struct netdev_queue {int trans_start; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct xgene_enet_pdata*) ;} ;


 int VAR_0 ;
 struct netdev_queue* FUNC_0 (struct net_device*,int) ;
 struct xgene_enet_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (struct xgene_enet_pdata*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct xgene_enet_pdata *VAR_2 = FUNC_1(VAR_1);
 struct netdev_queue *VAR_3;
 int VAR_4;

 VAR_2->mac_ops->reset(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_2->txq_cnt; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_4);
  VAR_3->trans_start = VAR_0;
  FUNC_2(VAR_3);
 }
}
