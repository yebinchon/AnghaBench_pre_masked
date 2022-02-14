
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {TYPE_1__* ring_ops; } ;
struct xgene_enet_desc_ring {int * state; int num; int ndev; } ;
struct TYPE_2__ {int num_ring_config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct xgene_enet_pdata* FUNC_0 (int ) ;
 int FUNC_1 (struct xgene_enet_desc_ring*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_desc_ring *VAR_2)
{
 struct xgene_enet_pdata *VAR_3 = FUNC_0(VAR_2->ndev);
 int VAR_4;

 FUNC_1(VAR_2, VAR_0, VAR_2->num);
 for (VAR_4 = 0; VAR_4 < VAR_3->ring_ops->num_ring_config; VAR_4++) {
  FUNC_1(VAR_2, VAR_1 + (VAR_4 * 4),
         VAR_2->state[VAR_4]);
 }
}
