
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {TYPE_3__* illum_top; TYPE_2__* illum_bottom; void* sharpness; void* gamma; void* saturation; void* brightness; } ;
struct TYPE_4__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,TYPE_3__**) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_8;
 struct v4l2_ctrl_handler *VAR_10 = &VAR_8->ctrl_handler;

 VAR_8->vdev.ctrl_handler = VAR_10;
 FUNC_2(VAR_10, 6);
 VAR_9->brightness = FUNC_3(VAR_10, &VAR_7,
   VAR_0, 0, 30, 1, 15);
 VAR_9->saturation = FUNC_3(VAR_10, &VAR_7,
   VAR_4, 0, 255, 1, 200);
 VAR_9->gamma = FUNC_3(VAR_10, &VAR_7,
   VAR_1, 0, 3, 1, 1);
 VAR_9->sharpness = FUNC_3(VAR_10, &VAR_7,
   VAR_5, 0, 2, 1, 1);
 VAR_9->illum_top = FUNC_3(VAR_10, &VAR_7,
   VAR_2, 0, 1, 1, 0);
 VAR_9->illum_top->flags |= VAR_6;
 VAR_9->illum_bottom = FUNC_3(VAR_10, &VAR_7,
   VAR_3, 0, 1, 1, 0);
 VAR_9->illum_bottom->flags |= VAR_6;
 if (VAR_10->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_10->error;
 }
 FUNC_1(2, &VAR_9->illum_top);
 return 0;
}
