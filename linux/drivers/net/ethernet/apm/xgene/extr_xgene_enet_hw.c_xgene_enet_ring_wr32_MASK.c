
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xgene_enet_pdata {scalar_t__ ring_csr_addr; } ;
struct xgene_enet_desc_ring {int ndev; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 struct xgene_enet_pdata* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_desc_ring *VAR_0,
     u32 VAR_1, u32 VAR_2)
{
 struct xgene_enet_pdata *VAR_3 = FUNC_1(VAR_0->ndev);

 FUNC_0(VAR_2, VAR_3->ring_csr_addr + VAR_1);
}
