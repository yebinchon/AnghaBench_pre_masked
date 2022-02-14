
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_ccw_private {TYPE_1__* io_region; int state; } ;
typedef enum vfio_ccw_event { ____Placeholder_vfio_ccw_event } vfio_ccw_event ;
struct TYPE_2__ {int ret_code; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct vfio_ccw_private *VAR_1,
    enum vfio_ccw_event VAR_2)
{
 FUNC_0("vfio-ccw: FSM: I/O request from state:%d\n", VAR_1->state);
 VAR_1->io_region->ret_code = -VAR_0;
}
