
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxgedev {int no_of_vpath; TYPE_1__* vpaths; } ;
struct vxge_ring {int handle; } ;
struct TYPE_2__ {struct vxge_ring ring; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct vxgedev *VAR_0)
{
 int VAR_1;
 struct vxge_ring *VAR_2;


 for (VAR_1 = 0; VAR_1 < VAR_0->no_of_vpath; VAR_1++) {
  VAR_2 = &VAR_0->vpaths[VAR_1].ring;
  FUNC_0(VAR_2->handle);
 }
}
