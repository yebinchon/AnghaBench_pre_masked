
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {int model; int lighting; } ;
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

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *)VAR_7;
 struct v4l2_ctrl_handler *VAR_9 = &VAR_7->ctrl_handler;
 bool VAR_10;
 bool VAR_11;
 bool VAR_12;
 bool VAR_13;
 bool VAR_14;
 bool VAR_15;

 VAR_10 = VAR_11 = VAR_12 =
  VAR_13 = VAR_15 = VAR_14 = 0;
 switch (VAR_8->model) {
 case 132:
  VAR_11 = VAR_15 = 1;
  break;
 case 131:
  VAR_10 = VAR_11 =
   VAR_13 = VAR_14 = 1;
  break;
 case 130:
  VAR_10 = VAR_12 = VAR_14 = 1;
  break;
 case 129:
  VAR_10 = VAR_11 = VAR_13 = 1;
  break;
 case 128:
  VAR_10 = VAR_12 = 1;
  break;
 case 133:
  VAR_10 = VAR_12 =
   VAR_13 = VAR_15 = VAR_14 = 1;
  break;
 }
 VAR_7->vdev.ctrl_handler = VAR_9;
 FUNC_1(VAR_9, 5);
 if (VAR_10)
  FUNC_2(VAR_9, &VAR_6,
   VAR_1, 0, 63, 1, 32);
 if (VAR_11)
  FUNC_2(VAR_9, &VAR_6,
   VAR_2, 0, 20, 1, 10);
 if (VAR_12)
  FUNC_2(VAR_9, &VAR_6,
   VAR_4, 0, 127, 1, 63);
 if (VAR_13)
  FUNC_2(VAR_9, &VAR_6,
   VAR_5, 0, 6, 1, 3);
 if (VAR_14)
  VAR_8->lighting = FUNC_2(VAR_9, &VAR_6,
   VAR_0, 0, 2, 1, 1);
 if (VAR_15)
  FUNC_2(VAR_9, &VAR_6,
   VAR_3, 0, 1, 1, 0);

 if (VAR_9->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_9->error;
 }
 return 0;
}
