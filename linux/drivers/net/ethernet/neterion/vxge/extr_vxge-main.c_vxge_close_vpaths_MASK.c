
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vpaths_open; } ;
struct vxgedev {int no_of_vpath; TYPE_1__ stats; struct vxge_vpath* vpaths; } ;
struct vxge_vpath {int * handle; scalar_t__ is_open; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vxgedev *VAR_0, int VAR_1)
{
 struct vxge_vpath *VAR_2;
 int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_0->no_of_vpath; VAR_3++) {
  VAR_2 = &VAR_0->vpaths[VAR_3];

  if (VAR_2->handle && VAR_2->is_open) {
   FUNC_0(VAR_2->handle);
   VAR_0->stats.vpaths_open--;
  }
  VAR_2->is_open = 0;
  VAR_2->handle = ((void*)0);
 }
}
