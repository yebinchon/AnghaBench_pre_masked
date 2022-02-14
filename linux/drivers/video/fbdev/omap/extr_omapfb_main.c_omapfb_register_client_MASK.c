
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* notifier_call ) (struct notifier_block*,unsigned long,void*) ;} ;
struct omapfb_notifier_block {size_t plane_idx; TYPE_3__ nb; void* data; } ;
typedef scalar_t__ omapfb_notifier_callback_t ;
struct TYPE_5__ {TYPE_1__* ctrl; } ;
struct TYPE_4__ {int (* bind_client ) (struct omapfb_notifier_block*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct omapfb_notifier_block*) ;

int FUNC_3(struct omapfb_notifier_block *VAR_5,
    omapfb_notifier_callback_t VAR_6,
    void *VAR_7)
{
 int VAR_8;

 if ((unsigned)VAR_5->plane_idx >= VAR_1)
  return -VAR_0;

 if (!VAR_2) {
  FUNC_1();
  VAR_2 = 1;
 }

 VAR_5->nb.notifier_call = (int (*)(struct notifier_block *,
     unsigned long, void *))VAR_6;
 VAR_5->data = VAR_7;
 VAR_8 = FUNC_0(
    &VAR_3[VAR_5->plane_idx],
    &VAR_5->nb);
 if (VAR_8)
  return VAR_8;
 if (VAR_4 != ((void*)0) &&
     VAR_4->ctrl && VAR_4->ctrl->bind_client) {
  VAR_4->ctrl->bind_client(VAR_5);
 }

 return 0;
}
