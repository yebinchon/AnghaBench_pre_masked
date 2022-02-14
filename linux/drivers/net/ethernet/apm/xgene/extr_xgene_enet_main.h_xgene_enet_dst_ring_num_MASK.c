
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xgene_enet_pdata {scalar_t__ rm; } ;
struct xgene_enet_desc_ring {int num; int ndev; } ;


 struct xgene_enet_pdata* FUNC_0 (int ) ;

__attribute__((used)) static inline u16 FUNC_1(struct xgene_enet_desc_ring *VAR_0)
{
 struct xgene_enet_pdata *VAR_1 = FUNC_0(VAR_0->ndev);

 return ((u16)VAR_1->rm << 10) | VAR_0->num;
}
