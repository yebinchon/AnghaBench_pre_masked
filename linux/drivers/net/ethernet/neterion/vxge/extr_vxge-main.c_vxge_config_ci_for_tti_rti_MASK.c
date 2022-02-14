
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ intr_type; } ;
struct vxgedev {int no_of_vpath; TYPE_4__ config; TYPE_3__* vpaths; } ;
struct __vxge_hw_ring {int dummy; } ;
struct __vxge_hw_fifo {int dummy; } ;
struct TYPE_6__ {struct __vxge_hw_fifo* handle; } ;
struct TYPE_5__ {struct __vxge_hw_ring* handle; } ;
struct TYPE_7__ {TYPE_2__ fifo; TYPE_1__ ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct __vxge_hw_ring*) ;
 int FUNC_1 (struct __vxge_hw_fifo*) ;

__attribute__((used)) static void FUNC_2(struct vxgedev *VAR_2)
{
 int VAR_3 = 0;


 if (VAR_2->config.intr_type == VAR_1) {
  for (VAR_3 = 0; VAR_3 < VAR_2->no_of_vpath; VAR_3++) {
   struct __vxge_hw_ring *VAR_4;

   VAR_4 = VAR_2->vpaths[VAR_3].ring.handle;
   FUNC_0(VAR_4);
  }
 }


 for (VAR_3 = 0; VAR_3 < VAR_2->no_of_vpath; VAR_3++) {
  struct __vxge_hw_fifo *VAR_5 = VAR_2->vpaths[VAR_3].fifo.handle;
  FUNC_1(VAR_5);




  if ((VAR_2->config.intr_type == VAR_0) && (VAR_3 == 0))
   break;
 }

 return;
}
