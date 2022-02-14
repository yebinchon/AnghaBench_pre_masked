
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ccw_private {int state; struct ccw_cmd_region* cmd_region; } ;
struct ccw_cmd_region {scalar_t__ command; int ret_code; } ;
typedef enum vfio_ccw_event { ____Placeholder_vfio_ccw_event } vfio_ccw_event ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct vfio_ccw_private *VAR_3,
       enum vfio_ccw_event VAR_4)
{
 struct ccw_cmd_region *VAR_5 = VAR_3->cmd_region;

 FUNC_0("vfio-ccw: FSM: %s request from state:%d\n",
        VAR_5->command == VAR_2 ? "halt" :
        VAR_5->command == VAR_1 ? "clear" :
        "<unknown>", VAR_3->state);
 VAR_5->ret_code = -VAR_0;
}
