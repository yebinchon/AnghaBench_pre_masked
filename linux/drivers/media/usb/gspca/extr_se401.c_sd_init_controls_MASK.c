
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {int exposure; int freq; scalar_t__ has_brightness; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *)VAR_6;
 struct v4l2_ctrl_handler *VAR_8 = &VAR_6->ctrl_handler;

 VAR_6->vdev.ctrl_handler = VAR_8;
 FUNC_2(VAR_8, 4);
 if (VAR_7->has_brightness)
  FUNC_3(VAR_8, &VAR_5,
   VAR_0, 0, 255, 1, 15);

 FUNC_3(VAR_8, &VAR_5,
   VAR_2, 0, 50, 1, 25);
 VAR_7->exposure = FUNC_3(VAR_8, &VAR_5,
   VAR_1, 0, 32767, 1, 15000);
 VAR_7->freq = FUNC_4(VAR_8, &VAR_5,
   VAR_3,
   VAR_4, 0, 0);

 if (VAR_8->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_8->error;
 }
 FUNC_1(2, &VAR_7->exposure);
 return 0;
}
