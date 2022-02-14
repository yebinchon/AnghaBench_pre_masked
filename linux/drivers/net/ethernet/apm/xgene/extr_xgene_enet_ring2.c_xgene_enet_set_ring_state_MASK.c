
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_desc_ring {int id; } ;
typedef enum xgene_ring_owner { ____Placeholder_xgene_ring_owner } xgene_ring_owner ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgene_enet_desc_ring*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xgene_enet_desc_ring*) ;
 int FUNC_3 (struct xgene_enet_desc_ring*) ;
 int FUNC_4 (struct xgene_enet_desc_ring*) ;

__attribute__((used)) static void FUNC_5(struct xgene_enet_desc_ring *VAR_2)
{
 enum xgene_ring_owner VAR_3;

 FUNC_3(VAR_2);

 VAR_3 = FUNC_1(VAR_2->id);
 if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
  FUNC_2(VAR_2);

 FUNC_0(VAR_2);
 FUNC_4(VAR_2);
}
