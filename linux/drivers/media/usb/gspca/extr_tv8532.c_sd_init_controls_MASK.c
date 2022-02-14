
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
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3)
{
 struct v4l2_ctrl_handler *VAR_4 = &VAR_3->ctrl_handler;

 VAR_3->vdev.ctrl_handler = VAR_4;
 FUNC_1(VAR_4, 2);
 FUNC_2(VAR_4, &VAR_2,
   VAR_0, 0, 0x18f, 1, 0x18f);
 FUNC_2(VAR_4, &VAR_2,
   VAR_1, 0, 0x7ff, 1, 0x100);

 if (VAR_4->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_4->error;
 }
 return 0;
}
