
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {scalar_t__ enet_id; } ;
struct xgene_enet_desc_ring {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct xgene_enet_pdata *VAR_2,
     struct xgene_enet_desc_ring *VAR_3)
{
 if ((VAR_2->enet_id == VAR_1) &&
     (FUNC_0(VAR_3->id) == VAR_0)) {
  return 1;
 }

 return 0;
}
