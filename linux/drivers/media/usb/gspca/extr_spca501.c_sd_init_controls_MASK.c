
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
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_6)
{
 struct v4l2_ctrl_handler *VAR_7 = &VAR_6->ctrl_handler;

 VAR_6->vdev.ctrl_handler = VAR_7;
 FUNC_1(VAR_7, 5);
 FUNC_2(VAR_7, &VAR_5,
   VAR_1, 0, 127, 1, 0);
 FUNC_2(VAR_7, &VAR_5,
   VAR_2, 0, 64725, 1, 64725);
 FUNC_2(VAR_7, &VAR_5,
   VAR_4, 0, 63, 1, 20);
 FUNC_2(VAR_7, &VAR_5,
   VAR_0, 0, 127, 1, 0);
 FUNC_2(VAR_7, &VAR_5,
   VAR_3, 0, 127, 1, 0);

 if (VAR_7->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_7->error;
 }
 return 0;
}
