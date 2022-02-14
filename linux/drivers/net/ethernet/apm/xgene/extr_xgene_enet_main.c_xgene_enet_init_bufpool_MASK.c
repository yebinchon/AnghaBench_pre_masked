
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_raw_desc16 {int m0; } ;
struct xgene_enet_desc_ring {int slots; int dst_ring_num; struct xgene_enet_raw_desc16* raw_desc16; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_desc_ring *VAR_2)
{
 struct xgene_enet_raw_desc16 *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2->slots; VAR_4++) {
  VAR_3 = &VAR_2->raw_desc16[VAR_4];


  VAR_3->m0 = FUNC_1(VAR_4 |
    FUNC_0(VAR_0, VAR_2->dst_ring_num) |
    FUNC_0(VAR_1, 3));
 }
}
