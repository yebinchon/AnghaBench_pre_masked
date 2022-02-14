
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {int sensor; int exposure_knee; int plfreq; int bridge; void* brightness; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* autogain; void* exposure; void* gain; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_9;
 struct v4l2_ctrl_handler *VAR_11 = &VAR_9->ctrl_handler;

 VAR_9->vdev.ctrl_handler = VAR_11;
 FUNC_2(VAR_11, 5);

 if (VAR_10->sensor == 134 || VAR_10->sensor == 133 ||
     VAR_10->sensor == 132 || VAR_10->sensor == 131)
  VAR_10->brightness = FUNC_3(VAR_11, &VAR_8,
     VAR_2, 0, 255, 1, 127);


 switch (VAR_10->sensor) {
 case 134:
 case 132:
 case 131:
  VAR_9->gain = FUNC_3(VAR_11, &VAR_8,
     VAR_4, 0, 31, 1, 15);
  break;
 case 133:
  VAR_9->gain = FUNC_3(VAR_11, &VAR_8,
     VAR_4, 0, 47, 1, 31);
  break;
 case 135:
  VAR_9->gain = FUNC_3(VAR_11, &VAR_8,
     VAR_4, 0, 63, 1, 31);
  break;
 case 130:
 case 129:
 case 128:
  VAR_9->gain = FUNC_3(VAR_11, &VAR_8,
     VAR_4, 0, 255, 1, 127);
  break;
 default:
  if (VAR_10->bridge == VAR_0) {
   VAR_9->gain = FUNC_3(VAR_11, &VAR_8,
      VAR_4, 0, 127, 1, 63);
  } else {
   VAR_9->gain = FUNC_3(VAR_11, &VAR_8,
      VAR_4, 0, 15, 1, 7);
  }
 }


 switch (VAR_10->sensor) {
 case 135:
  VAR_9->exposure = FUNC_3(VAR_11, &VAR_8,
     VAR_3, 0, 8191, 1, 482);
  VAR_10->exposure_knee = 964;
  break;
 case 134:
 case 133:
 case 132:
 case 131:
  VAR_9->exposure = FUNC_3(VAR_11, &VAR_8,
     VAR_3, 0, 1023, 1, 66);
  VAR_10->exposure_knee = 200;
  break;
 case 130:
 case 129:
  VAR_9->exposure = FUNC_3(VAR_11, &VAR_8,
     VAR_3, 2, 15, 1, 2);
  break;
 }

 if (VAR_9->exposure) {
  VAR_9->autogain = FUNC_3(VAR_11, &VAR_8,
      VAR_1, 0, 1, 1, 1);
 }

 if (VAR_10->sensor == 134 || VAR_10->sensor == 133)
  VAR_10->plfreq = FUNC_4(VAR_11, &VAR_8,
   VAR_5,
   VAR_6, 0,
   VAR_7);

 if (VAR_11->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_11->error;
 }

 if (VAR_9->autogain)
  FUNC_1(3, &VAR_9->autogain, 0, 0);

 return 0;
}
