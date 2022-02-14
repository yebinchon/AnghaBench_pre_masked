
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rvu_pfvf {unsigned long* pool_bmap; unsigned long* aura_bmap; TYPE_8__* aura_ctx; TYPE_5__* pool_ctx; } ;
struct rvu {int dev; } ;
struct TYPE_15__ {int ena; } ;
struct TYPE_14__ {scalar_t__ ena; } ;
struct TYPE_12__ {int ena; } ;
struct TYPE_11__ {scalar_t__ ena; } ;
struct TYPE_9__ {int pcifunc; } ;
struct npa_aq_enq_req {scalar_t__ ctype; int aura_id; int op; TYPE_7__ aura_mask; TYPE_6__ aura; TYPE_4__ pool_mask; TYPE_3__ pool; TYPE_1__ hdr; } ;
struct TYPE_10__ {int pcifunc; } ;
struct hwctx_disable_req {scalar_t__ ctype; TYPE_2__ hdr; } ;
struct TYPE_16__ {int qsize; } ;
struct TYPE_13__ {int qsize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (struct npa_aq_enq_req*,int ,int) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;
 int FUNC_3 (struct rvu*,struct npa_aq_enq_req*,int *) ;
 int FUNC_4 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct rvu *VAR_4, struct hwctx_disable_req *VAR_5)
{
 struct rvu_pfvf *VAR_6 = FUNC_2(VAR_4, VAR_5->hdr.pcifunc);
 struct npa_aq_enq_req VAR_7;
 unsigned long *VAR_8;
 int VAR_9, VAR_10 = 0;
 int VAR_11 = 0, VAR_12;

 if (!VAR_6->pool_ctx || !VAR_6->aura_ctx)
  return VAR_0;

 FUNC_1(&VAR_7, 0, sizeof(struct npa_aq_enq_req));
 VAR_7.hdr.pcifunc = VAR_5->hdr.pcifunc;

 if (VAR_5->ctype == VAR_2) {
  VAR_7.pool.ena = 0;
  VAR_7.pool_mask.ena = 1;
  VAR_10 = VAR_6->pool_ctx->qsize;
  VAR_8 = VAR_6->pool_bmap;
 } else if (VAR_5->ctype == VAR_1) {
  VAR_7.aura.ena = 0;
  VAR_7.aura_mask.ena = 1;
  VAR_10 = VAR_6->aura_ctx->qsize;
  VAR_8 = VAR_6->aura_bmap;
 }

 VAR_7.ctype = VAR_5->ctype;
 VAR_7.op = VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (!FUNC_4(VAR_9, VAR_8))
   continue;
  VAR_7.aura_id = VAR_9;
  VAR_12 = FUNC_3(VAR_4, &VAR_7, ((void*)0));
  if (VAR_12) {
   VAR_11 = VAR_12;
   FUNC_0(VAR_4->dev, "Failed to disable %s:%d context\n",
    (VAR_5->ctype == VAR_1) ?
    "Aura" : "Pool", VAR_9);
  }
 }

 return VAR_11;
}
