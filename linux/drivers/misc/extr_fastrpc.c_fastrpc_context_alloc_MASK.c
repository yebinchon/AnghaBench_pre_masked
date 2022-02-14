
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fastrpc_user {int lock; int pending; int tgid; struct fastrpc_channel_ctx* cctx; } ;
struct fastrpc_invoke_ctx {int retval; int ctxid; struct fastrpc_invoke_ctx* olaps; struct fastrpc_invoke_ctx* maps; int node; int refcount; int put_work; int work; struct fastrpc_channel_ctx* cctx; int tgid; int pid; int sc; struct fastrpc_invoke_args* args; scalar_t__ nscalars; scalar_t__ nbufs; struct fastrpc_user* fl; } ;
struct fastrpc_invoke_args {int dummy; } ;
struct fastrpc_channel_ctx {int lock; int ctx_idr; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 struct fastrpc_invoke_ctx* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (struct fastrpc_channel_ctx*) ;
 int FUNC_7 (struct fastrpc_channel_ctx*) ;
 int VAR_5 ;
 int FUNC_8 (struct fastrpc_invoke_ctx*) ;
 int FUNC_9 (int *,struct fastrpc_invoke_ctx*,int,int ,int ) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (scalar_t__,int,int ) ;
 int FUNC_12 (struct fastrpc_invoke_ctx*) ;
 int FUNC_13 (int *) ;
 struct fastrpc_invoke_ctx* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned long) ;

__attribute__((used)) static struct fastrpc_invoke_ctx *FUNC_21(
   struct fastrpc_user *VAR_6, u32 VAR_7, u32 VAR_8,
   struct fastrpc_invoke_args *VAR_9)
{
 struct fastrpc_channel_ctx *VAR_10 = VAR_6->cctx;
 struct fastrpc_invoke_ctx *VAR_11 = ((void*)0);
 unsigned long VAR_12;
 int VAR_13;

 VAR_11 = FUNC_14(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_11->node);
 VAR_11->fl = VAR_6;
 VAR_11->nscalars = FUNC_4(VAR_8);
 VAR_11->nbufs = FUNC_3(VAR_8) +
       FUNC_5(VAR_8);

 if (VAR_11->nscalars) {
  VAR_11->maps = FUNC_11(VAR_11->nscalars,
        sizeof(*VAR_11->maps), VAR_3);
  if (!VAR_11->maps) {
   FUNC_12(VAR_11);
   return FUNC_0(-VAR_0);
  }
  VAR_11->olaps = FUNC_11(VAR_11->nscalars,
        sizeof(*VAR_11->olaps), VAR_3);
  if (!VAR_11->olaps) {
   FUNC_12(VAR_11->maps);
   FUNC_12(VAR_11);
   return FUNC_0(-VAR_0);
  }
  VAR_11->args = VAR_9;
  FUNC_8(VAR_11);
 }


 FUNC_6(VAR_10);

 VAR_11->sc = VAR_8;
 VAR_11->retval = -1;
 VAR_11->pid = VAR_4->pid;
 VAR_11->tgid = VAR_6->tgid;
 VAR_11->cctx = VAR_10;
 FUNC_10(&VAR_11->work);
 FUNC_2(&VAR_11->put_work, VAR_5);

 FUNC_17(&VAR_6->lock);
 FUNC_15(&VAR_11->node, &VAR_6->pending);
 FUNC_19(&VAR_6->lock);

 FUNC_18(&VAR_10->lock, VAR_12);
 VAR_13 = FUNC_9(&VAR_10->ctx_idr, VAR_11, 1,
          VAR_1, VAR_2);
 if (VAR_13 < 0) {
  FUNC_20(&VAR_10->lock, VAR_12);
  goto err_idr;
 }
 VAR_11->ctxid = VAR_13 << 4;
 FUNC_20(&VAR_10->lock, VAR_12);

 FUNC_13(&VAR_11->refcount);

 return VAR_11;
err_idr:
 FUNC_17(&VAR_6->lock);
 FUNC_16(&VAR_11->node);
 FUNC_19(&VAR_6->lock);
 FUNC_7(VAR_10);
 FUNC_12(VAR_11->maps);
 FUNC_12(VAR_11->olaps);
 FUNC_12(VAR_11);

 return FUNC_0(VAR_13);
}
