
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_dl_list {TYPE_1__* dlm; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct vsp1_dl_list*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct vsp1_dl_list *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->dlm->lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->dlm->lock, VAR_1);
}
