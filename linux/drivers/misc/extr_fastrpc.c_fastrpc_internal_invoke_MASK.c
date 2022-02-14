
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fastrpc_user {TYPE_2__* sctx; int lock; TYPE_1__* cctx; } ;
struct fastrpc_invoke_ctx {int retval; int node; scalar_t__ nscalars; int work; } ;
struct fastrpc_invoke_args {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int rpdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fastrpc_invoke_ctx*) ;
 int FUNC_1 (struct fastrpc_invoke_ctx*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct fastrpc_invoke_ctx* FUNC_5 (struct fastrpc_user*,int ,int ,struct fastrpc_invoke_args*) ;
 int FUNC_6 (struct fastrpc_invoke_ctx*) ;
 int FUNC_7 (int ,struct fastrpc_invoke_ctx*) ;
 int FUNC_8 (TYPE_2__*,struct fastrpc_invoke_ctx*,int ,int ) ;
 int FUNC_9 (struct fastrpc_invoke_ctx*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct fastrpc_user *VAR_2, u32 VAR_3,
       u32 VAR_4, u32 VAR_5,
       struct fastrpc_invoke_args *VAR_6)
{
 struct fastrpc_invoke_ctx *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (!VAR_2->sctx)
  return -VAR_0;

 if (!VAR_2->cctx->rpdev)
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_5, VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (VAR_7->nscalars) {
  VAR_8 = FUNC_7(VAR_3, VAR_7);
  if (VAR_8)
   goto bail;
 }


 FUNC_4();

 VAR_8 = FUNC_8(VAR_2->sctx, VAR_7, VAR_3, VAR_4);
 if (VAR_8)
  goto bail;


 VAR_8 = FUNC_13(&VAR_7->work);
 if (VAR_8)
  goto bail;


 VAR_8 = VAR_7->retval;
 if (VAR_8)
  goto bail;

 if (VAR_7->nscalars) {

  FUNC_3();

  VAR_8 = FUNC_9(VAR_7, VAR_3);
  if (VAR_8)
   goto bail;
 }

bail:

 FUNC_11(&VAR_2->lock);
 FUNC_10(&VAR_7->node);
 FUNC_12(&VAR_2->lock);
 FUNC_6(VAR_7);

 if (VAR_8)
  FUNC_2(VAR_2->sctx->dev, "Error: Invoke Failed %d\n", VAR_8);

 return VAR_8;
}
