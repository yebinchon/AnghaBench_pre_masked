
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_7)
{
 struct v4l2_ctrl_handler *VAR_8 = &VAR_7->ctrl_handler;

 VAR_7->vdev.ctrl_handler = VAR_8;
 FUNC_1(VAR_8, 4);
 FUNC_2(VAR_8, &VAR_6,
   VAR_0, 0, 255, 1, 127);
 FUNC_2(VAR_8, &VAR_6,
   VAR_1, 0, 255, 1, 127);
 FUNC_2(VAR_8, &VAR_6,
   VAR_5, 0, 255, 1, 127);
 FUNC_3(VAR_8, &VAR_6,
   VAR_2,
   VAR_4, 1,
   VAR_3);

 if (VAR_8->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_8->error;
 }
 return 0;
}
