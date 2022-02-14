
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fh_list; } ;
struct mcam_camera {scalar_t__ buffer_mode; int v4l2_dev; int notifier; int ctrl_handler; TYPE_1__ vdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mcam_camera*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mcam_camera*) ;
 int VAR_2 ;
 int FUNC_3 (struct mcam_camera*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mcam_camera *VAR_3)
{






 if (!FUNC_1(&VAR_3->vdev.fh_list)) {
  FUNC_0(VAR_3, "Removing a device with users!\n");
  FUNC_3(VAR_3, VAR_1, VAR_2, 0);
 }
 if (VAR_3->buffer_mode == VAR_0)
  FUNC_2(VAR_3);
 FUNC_5(&VAR_3->ctrl_handler);
 FUNC_4(&VAR_3->notifier);
 FUNC_6(&VAR_3->v4l2_dev);
}
