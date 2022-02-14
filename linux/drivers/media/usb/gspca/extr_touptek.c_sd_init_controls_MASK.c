
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {void* red; void* blue; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* gain; void* exposure; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 struct v4l2_ctrl_handler *VAR_7 = &VAR_5->ctrl_handler;

 VAR_5->vdev.ctrl_handler = VAR_7;
 FUNC_1(VAR_7, 4);

 VAR_5->exposure = FUNC_2(VAR_7, &VAR_4,


  VAR_1, 0, 800, 1, 350);
 VAR_5->gain = FUNC_2(VAR_7, &VAR_4,
   VAR_2, 0, 511, 1, 128);
 VAR_6->blue = FUNC_2(VAR_7, &VAR_4,
   VAR_0, 0, 1023, 1, 80);
 VAR_6->red = FUNC_2(VAR_7, &VAR_4,
   VAR_3, 0, 1023, 1, 295);

 if (VAR_7->error) {
  FUNC_0(VAR_5, "Could not initialize controls\n");
  return VAR_7->error;
 }
 return 0;
}
