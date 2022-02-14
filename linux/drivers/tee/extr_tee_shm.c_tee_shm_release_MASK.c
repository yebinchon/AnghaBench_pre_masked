
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tee_shm_pool_mgr {TYPE_2__* ops; } ;
struct tee_shm {int flags; size_t num_pages; scalar_t__ ctx; struct tee_shm* pages; int link; int id; struct tee_device* teedev; } ;
struct TYPE_10__ {int parent; } ;
struct tee_device {TYPE_5__ dev; TYPE_4__* desc; TYPE_1__* pool; int mutex; int idr; } ;
struct TYPE_9__ {TYPE_3__* ops; } ;
struct TYPE_8__ {int (* shm_unregister ) (scalar_t__,struct tee_shm*) ;} ;
struct TYPE_7__ {int (* free ) (struct tee_shm_pool_mgr*,struct tee_shm*) ;} ;
struct TYPE_6__ {struct tee_shm_pool_mgr* private_mgr; struct tee_shm_pool_mgr* dma_buf_mgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct tee_shm*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct tee_shm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tee_shm) ;
 int FUNC_7 (struct tee_shm_pool_mgr*,struct tee_shm*) ;
 int FUNC_8 (scalar_t__,struct tee_shm*) ;
 int FUNC_9 (struct tee_device*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct tee_shm *VAR_3)
{
 struct tee_device *VAR_4 = VAR_3->teedev;

 FUNC_4(&VAR_4->mutex);
 FUNC_1(&VAR_4->idr, VAR_3->id);
 if (VAR_3->ctx)
  FUNC_3(&VAR_3->link);
 FUNC_5(&VAR_4->mutex);

 if (VAR_3->flags & VAR_1) {
  struct tee_shm_pool_mgr *VAR_5;

  if (VAR_3->flags & VAR_0)
   VAR_5 = VAR_4->pool->dma_buf_mgr;
  else
   VAR_5 = VAR_4->pool->private_mgr;

  VAR_5->ops->free(VAR_5, VAR_3);
 } else if (VAR_3->flags & VAR_2) {
  size_t VAR_6;
  int VAR_7 = VAR_4->desc->ops->shm_unregister(VAR_3->ctx, VAR_3);

  if (VAR_7)
   FUNC_0(VAR_4->dev.parent,
    "unregister shm %p failed: %d", VAR_3, VAR_7);

  for (VAR_6 = 0; VAR_6 < VAR_3->num_pages; VAR_6++)
   FUNC_6(VAR_3->pages[VAR_6]);

  FUNC_2(VAR_3->pages);
 }

 if (VAR_3->ctx)
  FUNC_10(VAR_3->ctx);

 FUNC_2(VAR_3);

 FUNC_9(VAR_4);
}
