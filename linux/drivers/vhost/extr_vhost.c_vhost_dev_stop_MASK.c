
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_dev {int nvqs; TYPE_1__** vqs; } ;
struct TYPE_2__ {int poll; scalar_t__ handle_kick; scalar_t__ kick; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vhost_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nvqs; ++VAR_1) {
  if (VAR_0->vqs[VAR_1]->kick && VAR_0->vqs[VAR_1]->handle_kick) {
   FUNC_1(&VAR_0->vqs[VAR_1]->poll);
   FUNC_0(&VAR_0->vqs[VAR_1]->poll);
  }
 }
}
