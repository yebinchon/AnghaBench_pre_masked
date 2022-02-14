
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xgene_enet_pdata {int rxq_cnt; int cq_cnt; int ndev; TYPE_2__** tx_ring; TYPE_3__** rx_ring; } ;
struct napi_struct {int dummy; } ;
struct TYPE_6__ {struct napi_struct napi; } ;
struct TYPE_5__ {TYPE_1__* cp_ring; } ;
struct TYPE_4__ {struct napi_struct napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct napi_struct*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct xgene_enet_pdata *VAR_2)
{
 struct napi_struct *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->rxq_cnt; VAR_4++) {
  VAR_3 = &VAR_2->rx_ring[VAR_4]->napi;
  FUNC_0(VAR_2->ndev, VAR_3, VAR_1,
          VAR_0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->cq_cnt; VAR_4++) {
  VAR_3 = &VAR_2->tx_ring[VAR_4]->cp_ring->napi;
  FUNC_0(VAR_2->ndev, VAR_3, VAR_1,
          VAR_0);
 }
}
