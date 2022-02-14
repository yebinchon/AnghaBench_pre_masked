
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct fastrpc_user {TYPE_1__* sctx; } ;
struct fastrpc_buf {int size; scalar_t__ phys; int lock; int * virt; struct device* dev; struct fastrpc_user* fl; int attachments; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (struct fastrpc_buf*) ;
 struct fastrpc_buf* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fastrpc_user *VAR_2, struct device *VAR_3,
        u64 VAR_4, struct fastrpc_buf **VAR_5)
{
 struct fastrpc_buf *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(&VAR_6->attachments);
 FUNC_5(&VAR_6->lock);

 VAR_6->fl = VAR_2;
 VAR_6->virt = ((void*)0);
 VAR_6->phys = 0;
 VAR_6->size = VAR_4;
 VAR_6->dev = VAR_3;

 VAR_6->virt = FUNC_1(VAR_3, VAR_6->size, (dma_addr_t *)&VAR_6->phys,
           VAR_1);
 if (!VAR_6->virt) {
  FUNC_4(&VAR_6->lock);
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 if (VAR_2->sctx && VAR_2->sctx->sid)
  VAR_6->phys += ((u64)VAR_2->sctx->sid << 32);

 *VAR_5 = VAR_6;

 return 0;
}
