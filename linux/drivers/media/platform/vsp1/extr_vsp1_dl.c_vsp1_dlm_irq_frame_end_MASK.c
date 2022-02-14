
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vsp1_dl_manager {int lock; TYPE_1__* pending; TYPE_1__* queued; TYPE_1__* active; int index; scalar_t__ singleshot; struct vsp1_device* vsp1; } ;
struct vsp1_device {int dummy; } ;
struct TYPE_3__ {unsigned int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct vsp1_dl_manager*) ;
 int FUNC_6 (struct vsp1_device*,int ) ;

unsigned int FUNC_7(struct vsp1_dl_manager *VAR_4)
{
 struct vsp1_device *VAR_5 = VAR_4->vsp1;
 u32 VAR_6 = FUNC_6(VAR_5, VAR_0);
 unsigned int VAR_7 = 0;

 FUNC_2(&VAR_4->lock);





 if (VAR_4->singleshot) {
  FUNC_1(VAR_4->active);
  VAR_4->active = ((void*)0);
  VAR_7 |= VAR_1;
  goto done;
 }







 if (FUNC_5(VAR_4))
  goto done;






 if (VAR_6 & FUNC_0(VAR_4->index))
  goto done;







 if (VAR_4->active && (VAR_4->active->flags & VAR_3)) {
  VAR_7 |= VAR_3;
  VAR_4->active->flags &= ~VAR_3;
 }





 if (VAR_4->queued) {
  if (VAR_4->queued->flags & VAR_2)
   VAR_7 |= VAR_2;
  VAR_4->queued->flags &= ~VAR_2;

  FUNC_1(VAR_4->active);
  VAR_4->active = VAR_4->queued;
  VAR_4->queued = ((void*)0);
  VAR_7 |= VAR_1;
 }






 if (VAR_4->pending) {
  FUNC_4(VAR_4->pending);
  VAR_4->queued = VAR_4->pending;
  VAR_4->pending = ((void*)0);
 }

done:
 FUNC_3(&VAR_4->lock);

 return VAR_7;
}
