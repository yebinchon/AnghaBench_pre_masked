
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tee_shm_pool_mgr {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ destroy_poolmgr; scalar_t__ free; scalar_t__ alloc; } ;



__attribute__((used)) static bool FUNC_0(struct tee_shm_pool_mgr *VAR_0)
{
 return VAR_0 && VAR_0->ops && VAR_0->ops->alloc && VAR_0->ops->free &&
  VAR_0->ops->destroy_poolmgr;
}
