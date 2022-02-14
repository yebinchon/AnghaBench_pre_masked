
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_manager {int * pending; int * queued; int * active; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct vsp1_dl_manager *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);

 FUNC_0(VAR_0->active);
 FUNC_0(VAR_0->queued);
 FUNC_0(VAR_0->pending);

 FUNC_2(&VAR_0->lock, VAR_1);

 VAR_0->active = ((void*)0);
 VAR_0->queued = ((void*)0);
 VAR_0->pending = ((void*)0);
}
