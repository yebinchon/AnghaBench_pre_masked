
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_pfvf {scalar_t__ cq_ctx; scalar_t__ rq_ctx; scalar_t__ sq_ctx; } ;
struct rvu {int dev; } ;
struct TYPE_2__ {int pcifunc; } ;
struct hwctx_disable_req {int ctype; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rvu*,struct rvu_pfvf*) ;
 int FUNC_2 (struct rvu*,int ,int) ;
 int FUNC_3 (struct rvu*,struct hwctx_disable_req*) ;
 int FUNC_4 (struct rvu*,int) ;
 int FUNC_5 (struct rvu*,int ) ;
 struct rvu_pfvf* FUNC_6 (struct rvu*,int ) ;

void FUNC_7(struct rvu *VAR_3, u16 VAR_4, int VAR_5, int VAR_6)
{
 struct rvu_pfvf *VAR_7 = FUNC_6(VAR_3, VAR_4);
 struct hwctx_disable_req VAR_8;
 int VAR_9;

 VAR_8.hdr.pcifunc = VAR_4;


 FUNC_2(VAR_3, VAR_4, VAR_6);
 FUNC_4(VAR_3, VAR_5);
 FUNC_5(VAR_3, VAR_4);

 if (VAR_7->sq_ctx) {
  VAR_8.ctype = VAR_2;
  VAR_9 = FUNC_3(VAR_3, &VAR_8);
  if (VAR_9)
   FUNC_0(VAR_3->dev, "SQ ctx disable failed\n");
 }

 if (VAR_7->rq_ctx) {
  VAR_8.ctype = VAR_1;
  VAR_9 = FUNC_3(VAR_3, &VAR_8);
  if (VAR_9)
   FUNC_0(VAR_3->dev, "RQ ctx disable failed\n");
 }

 if (VAR_7->cq_ctx) {
  VAR_8.ctype = VAR_0;
  VAR_9 = FUNC_3(VAR_3, &VAR_8);
  if (VAR_9)
   FUNC_0(VAR_3->dev, "CQ ctx disable failed\n");
 }

 FUNC_1(VAR_3, VAR_7);
}
