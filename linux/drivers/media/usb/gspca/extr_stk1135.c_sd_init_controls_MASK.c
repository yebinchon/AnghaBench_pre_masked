
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {void* vflip; void* hflip; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 struct v4l2_ctrl_handler *VAR_5 = &VAR_3->ctrl_handler;

 VAR_3->vdev.ctrl_handler = VAR_5;
 FUNC_1(VAR_5, 2);
 VAR_4->hflip = FUNC_2(VAR_5, &VAR_2,
   VAR_0, 0, 1, 1, 0);
 VAR_4->vflip = FUNC_2(VAR_5, &VAR_2,
   VAR_1, 0, 1, 1, 0);

 if (VAR_5->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_5->error;
 }
 return 0;
}
