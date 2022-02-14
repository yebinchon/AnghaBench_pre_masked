
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_pfvf {int * cq_ints_ctx; int * nix_qints_ctx; int * rss_ctx; int * cq_ctx; int * sq_ctx; int * rq_ctx; int * sq_bmap; int * cq_bmap; int * rq_bmap; } ;
struct rvu {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct rvu *VAR_0, struct rvu_pfvf *VAR_1)
{
 FUNC_0(VAR_1->rq_bmap);
 FUNC_0(VAR_1->sq_bmap);
 FUNC_0(VAR_1->cq_bmap);
 if (VAR_1->rq_ctx)
  FUNC_1(VAR_0->dev, VAR_1->rq_ctx);
 if (VAR_1->sq_ctx)
  FUNC_1(VAR_0->dev, VAR_1->sq_ctx);
 if (VAR_1->cq_ctx)
  FUNC_1(VAR_0->dev, VAR_1->cq_ctx);
 if (VAR_1->rss_ctx)
  FUNC_1(VAR_0->dev, VAR_1->rss_ctx);
 if (VAR_1->nix_qints_ctx)
  FUNC_1(VAR_0->dev, VAR_1->nix_qints_ctx);
 if (VAR_1->cq_ints_ctx)
  FUNC_1(VAR_0->dev, VAR_1->cq_ints_ctx);

 VAR_1->rq_bmap = ((void*)0);
 VAR_1->cq_bmap = ((void*)0);
 VAR_1->sq_bmap = ((void*)0);
 VAR_1->rq_ctx = ((void*)0);
 VAR_1->sq_ctx = ((void*)0);
 VAR_1->cq_ctx = ((void*)0);
 VAR_1->rss_ctx = ((void*)0);
 VAR_1->nix_qints_ctx = ((void*)0);
 VAR_1->cq_ints_ctx = ((void*)0);
}
