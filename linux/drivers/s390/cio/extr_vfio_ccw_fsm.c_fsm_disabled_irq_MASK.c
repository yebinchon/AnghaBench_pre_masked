
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ccw_private {struct subchannel* sch; } ;
struct subchannel {int dummy; } ;
typedef enum vfio_ccw_event { ____Placeholder_vfio_ccw_event } vfio_ccw_event ;


 int FUNC_0 (struct subchannel*) ;

__attribute__((used)) static void FUNC_1(struct vfio_ccw_private *VAR_0,
        enum vfio_ccw_event VAR_1)
{
 struct subchannel *VAR_2 = VAR_0->sch;





 FUNC_0(VAR_2);
}
