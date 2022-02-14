
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* gain; void* exposure; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_2)
{
 struct v4l2_ctrl_handler *VAR_3 = &VAR_2->ctrl_handler;

 VAR_2->vdev.ctrl_handler = VAR_3;
 FUNC_1(VAR_3, 2);
 VAR_2->exposure = FUNC_2(VAR_3, ((void*)0),
   VAR_0, 0, 2047, 1, 256);
 VAR_2->gain = FUNC_2(VAR_3, ((void*)0),
   VAR_1, 0, 255, 1, 200);

 if (VAR_3->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_3->error;
 }
 return 0;
}
