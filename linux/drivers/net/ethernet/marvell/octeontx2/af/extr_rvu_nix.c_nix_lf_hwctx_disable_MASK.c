
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct rvu_pfvf {unsigned long* cq_bmap; unsigned long* sq_bmap; unsigned long* rq_bmap; TYPE_11__* rq_ctx; TYPE_8__* sq_ctx; TYPE_5__* cq_ctx; } ;
struct rvu {int dev; } ;
struct TYPE_12__ {int ena; } ;
struct TYPE_22__ {scalar_t__ ena; } ;
struct TYPE_20__ {int ena; } ;
struct TYPE_19__ {scalar_t__ ena; } ;
struct TYPE_17__ {int ena; } ;
struct TYPE_16__ {scalar_t__ ena; } ;
struct TYPE_14__ {int pcifunc; } ;
struct nix_aq_enq_req {scalar_t__ ctype; int qidx; int op; TYPE_10__ rq_mask; TYPE_9__ rq; TYPE_7__ sq_mask; TYPE_6__ sq; TYPE_4__ cq_mask; TYPE_3__ cq; TYPE_1__ hdr; } ;
struct TYPE_15__ {int pcifunc; } ;
struct hwctx_disable_req {scalar_t__ ctype; TYPE_2__ hdr; } ;
struct TYPE_21__ {int qsize; } ;
struct TYPE_18__ {int qsize; } ;
struct TYPE_13__ {int qsize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (struct nix_aq_enq_req*,int ,int) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;
 int FUNC_3 (struct rvu*,struct nix_aq_enq_req*,int *) ;
 int FUNC_4 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct rvu *VAR_5, struct hwctx_disable_req *VAR_6)
{
 struct rvu_pfvf *VAR_7 = FUNC_2(VAR_5, VAR_6->hdr.pcifunc);
 struct nix_aq_enq_req VAR_8;
 unsigned long *VAR_9;
 int VAR_10, VAR_11 = 0;
 int VAR_12 = 0, VAR_13;

 if (!VAR_7->cq_ctx || !VAR_7->sq_ctx || !VAR_7->rq_ctx)
  return VAR_0;

 FUNC_1(&VAR_8, 0, sizeof(struct nix_aq_enq_req));
 VAR_8.hdr.pcifunc = VAR_6->hdr.pcifunc;

 if (VAR_6->ctype == VAR_1) {
  VAR_8.cq.ena = 0;
  VAR_8.cq_mask.ena = 1;
  VAR_11 = VAR_7->cq_ctx->qsize;
  VAR_9 = VAR_7->cq_bmap;
 }
 if (VAR_6->ctype == VAR_3) {
  VAR_8.sq.ena = 0;
  VAR_8.sq_mask.ena = 1;
  VAR_11 = VAR_7->sq_ctx->qsize;
  VAR_9 = VAR_7->sq_bmap;
 }
 if (VAR_6->ctype == VAR_2) {
  VAR_8.rq.ena = 0;
  VAR_8.rq_mask.ena = 1;
  VAR_11 = VAR_7->rq_ctx->qsize;
  VAR_9 = VAR_7->rq_bmap;
 }

 VAR_8.ctype = VAR_6->ctype;
 VAR_8.op = VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (!FUNC_4(VAR_10, VAR_9))
   continue;
  VAR_8.qidx = VAR_10;
  VAR_13 = FUNC_3(VAR_5, &VAR_8, ((void*)0));
  if (VAR_13) {
   VAR_12 = VAR_13;
   FUNC_0(VAR_5->dev, "Failed to disable %s:%d context\n",
    (VAR_6->ctype == VAR_1) ?
    "CQ" : ((VAR_6->ctype == VAR_2) ?
    "RQ" : "SQ"), VAR_10);
  }
 }

 return VAR_12;
}
