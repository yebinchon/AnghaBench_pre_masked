
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {int sensor; void* hflip; void* vflip; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int VAR_13 ;
 int FUNC_1 (int,void**) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_14)
{
 struct sd *VAR_15 = (struct sd *)VAR_14;
 struct v4l2_ctrl_handler *VAR_16 = &VAR_14->ctrl_handler;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 bool VAR_23 = 0;
 bool VAR_24 = 0;
 bool VAR_25 = 0;
 bool VAR_26 = 0;

 switch (VAR_15->sensor) {
 case 137:
 case 136:
 case 129:
  break;
 case 135:
 case 134:
 case 133:
 case 132:
  VAR_20 = 1;
  break;
 case 131:
  VAR_20 = VAR_21 = 1;
  break;
 case 130:
  VAR_20 = VAR_26 = 1;
  break;
 case 128:
  VAR_17 = VAR_18 = VAR_19 = VAR_22 =
   VAR_23 = VAR_24 = VAR_25 =
   VAR_26 = 1;
  break;
 }

 VAR_14->vdev.ctrl_handler = VAR_16;
 FUNC_2(VAR_16, 8);
 if (VAR_17)
  FUNC_3(VAR_16, &VAR_13,
   VAR_2, 0, 255, 1, 128);
 if (VAR_18)
  FUNC_3(VAR_16, &VAR_13,
   VAR_3, 0, 255, 1, 127);
 if (VAR_19)
  FUNC_3(VAR_16, &VAR_13,
   VAR_10, 1, 127, 1, 63);
 if (VAR_20) {
  VAR_15->hflip = FUNC_3(VAR_16, &VAR_13,
   VAR_6, 0, 1, 1, 0);
  VAR_15->vflip = FUNC_3(VAR_16, &VAR_13,
   VAR_12, 0, 1, 1, 0);
 }
 if (VAR_26)
  FUNC_3(VAR_16, &VAR_13,
   VAR_11, -1, 2, 1, -1);
 if (VAR_21)
  FUNC_4(VAR_16, &VAR_13,
   VAR_7,
   VAR_9, 0,
   VAR_8);
 if (VAR_24)
  FUNC_3(VAR_16, &VAR_13,
   VAR_0, 0, 1, 1, 1);
 if (VAR_25)
  FUNC_3(VAR_16, &VAR_13,
   VAR_5, 0, 78, 1, 0);
 if (VAR_23)
  FUNC_3(VAR_16, &VAR_13,
   VAR_4, 0, 4095, 1, 450);
 if (VAR_22)
  FUNC_3(VAR_16, &VAR_13,
   VAR_1, 0, 15, 1, 15);

 if (VAR_16->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_16->error;
 }
 if (VAR_15->hflip)
  FUNC_1(2, &VAR_15->hflip);
 return 0;
}
