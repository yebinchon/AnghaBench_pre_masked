
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xgene_enet_pdata {int rxq_cnt; int cq_cnt; TYPE_2__** tx_ring; TYPE_3__** rx_ring; } ;
struct napi_struct {int dummy; } ;
struct TYPE_6__ {struct napi_struct napi; } ;
struct TYPE_5__ {TYPE_1__* cp_ring; } ;
struct TYPE_4__ {struct napi_struct napi; } ;


 int FUNC_0 (struct napi_struct*) ;

__attribute__((used)) static void FUNC_1(struct xgene_enet_pdata *VAR_0)
{
 struct napi_struct *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->rxq_cnt; VAR_2++) {
  VAR_1 = &VAR_0->rx_ring[VAR_2]->napi;
  FUNC_0(VAR_1);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->cq_cnt; VAR_2++) {
  VAR_1 = &VAR_0->tx_ring[VAR_2]->cp_ring->napi;
  FUNC_0(VAR_1);
 }
}
