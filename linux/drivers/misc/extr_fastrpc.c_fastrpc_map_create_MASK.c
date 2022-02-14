
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int u64 ;
struct fastrpc_user {int lock; int maps; struct fastrpc_session_ctx* sctx; } ;
struct fastrpc_session_ctx {scalar_t__ sid; int dev; } ;
struct fastrpc_map {int fd; int phys; int size; int len; TYPE_1__* buf; TYPE_1__* attach; int node; int refcount; TYPE_1__* table; int va; struct fastrpc_user* fl; } ;
struct TYPE_11__ {int sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct fastrpc_user*,int,struct fastrpc_map**) ;
 int FUNC_10 (struct fastrpc_map*) ;
 int FUNC_11 (int *) ;
 struct fastrpc_map* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct fastrpc_user *VAR_3, int VAR_4,
         u64 VAR_5, struct fastrpc_map **VAR_6)
{
 struct fastrpc_session_ctx *VAR_7 = VAR_3->sctx;
 struct fastrpc_map *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (!FUNC_9(VAR_3, VAR_4, VAR_6))
  return 0;

 VAR_8 = FUNC_12(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(&VAR_8->node);
 VAR_8->fl = VAR_3;
 VAR_8->fd = VAR_4;
 VAR_8->buf = FUNC_6(VAR_4);
 if (FUNC_1(VAR_8->buf)) {
  VAR_9 = FUNC_2(VAR_8->buf);
  goto get_err;
 }

 VAR_8->attach = FUNC_4(VAR_8->buf, VAR_7->dev);
 if (FUNC_1(VAR_8->attach)) {
  FUNC_3(VAR_7->dev, "Failed to attach dmabuf\n");
  VAR_9 = FUNC_2(VAR_8->attach);
  goto attach_err;
 }

 VAR_8->table = FUNC_7(VAR_8->attach, VAR_0);
 if (FUNC_1(VAR_8->table)) {
  VAR_9 = FUNC_2(VAR_8->table);
  goto map_err;
 }

 VAR_8->phys = FUNC_14(VAR_8->table->sgl);
 VAR_8->phys += ((u64)VAR_3->sctx->sid << 32);
 VAR_8->size = VAR_5;
 VAR_8->va = FUNC_15(VAR_8->table->sgl);
 VAR_8->len = VAR_5;
 FUNC_11(&VAR_8->refcount);

 FUNC_16(&VAR_3->lock);
 FUNC_13(&VAR_8->node, &VAR_3->maps);
 FUNC_17(&VAR_3->lock);
 *VAR_6 = VAR_8;

 return 0;

map_err:
 FUNC_5(VAR_8->buf, VAR_8->attach);
attach_err:
 FUNC_8(VAR_8->buf);
get_err:
 FUNC_10(VAR_8);

 return VAR_9;
}
