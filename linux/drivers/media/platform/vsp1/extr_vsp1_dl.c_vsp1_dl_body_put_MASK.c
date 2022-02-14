
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_dl_body {TYPE_1__* pool; int free; scalar_t__ num_entries; int refcnt; } ;
struct TYPE_2__ {int lock; int free; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct vsp1_dl_body *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0)
  return;

 if (!FUNC_1(&VAR_0->refcnt))
  return;

 VAR_0->num_entries = 0;

 FUNC_2(&VAR_0->pool->lock, VAR_1);
 FUNC_0(&VAR_0->free, &VAR_0->pool->free);
 FUNC_3(&VAR_0->pool->lock, VAR_1);
}
