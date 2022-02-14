
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ccw_private {struct ccw_cmd_region* cmd_region; } ;
struct ccw_cmd_region {int command; int ret_code; } ;
typedef enum vfio_ccw_event { ____Placeholder_vfio_ccw_event } vfio_ccw_event ;


 int VAR_0 ;


 int FUNC_0 (struct vfio_ccw_private*) ;
 int FUNC_1 (struct vfio_ccw_private*) ;

__attribute__((used)) static void FUNC_2(struct vfio_ccw_private *VAR_1,
         enum vfio_ccw_event VAR_2)
{
 struct ccw_cmd_region *VAR_3 = VAR_1->cmd_region;

 switch (VAR_3->command) {
 case 128:
  VAR_3->ret_code = FUNC_1(VAR_1);
  break;
 case 129:
  VAR_3->ret_code = FUNC_0(VAR_1);
  break;
 default:

  VAR_3->ret_code = -VAR_0;
 }
}
