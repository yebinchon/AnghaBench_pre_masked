
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_pfvf {int * npa_qints_ctx; int * pool_ctx; int * pool_bmap; int * aura_ctx; int * aura_bmap; } ;
struct rvu {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct rvu *VAR_0, struct rvu_pfvf *VAR_1)
{
 FUNC_0(VAR_1->aura_bmap);
 VAR_1->aura_bmap = ((void*)0);

 FUNC_1(VAR_0->dev, VAR_1->aura_ctx);
 VAR_1->aura_ctx = ((void*)0);

 FUNC_0(VAR_1->pool_bmap);
 VAR_1->pool_bmap = ((void*)0);

 FUNC_1(VAR_0->dev, VAR_1->pool_ctx);
 VAR_1->pool_ctx = ((void*)0);

 FUNC_1(VAR_0->dev, VAR_1->npa_qints_ctx);
 VAR_1->npa_qints_ctx = ((void*)0);
}
