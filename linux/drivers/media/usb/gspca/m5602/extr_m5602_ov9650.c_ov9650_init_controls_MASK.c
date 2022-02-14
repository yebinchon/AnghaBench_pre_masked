
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_3__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_4__ {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct sd {void* hflip; void* autogain; void* autoexpo; void* auto_white_bal; void* vflip; void* gain; void* expo; void* blue_bal; void* red_bal; TYPE_2__ gspca_dev; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,int,int ,int ) ;

int FUNC_6(struct sd *VAR_15)
{
 struct v4l2_ctrl_handler *VAR_16 = &VAR_15->gspca_dev.ctrl_handler;

 VAR_15->gspca_dev.vdev.ctrl_handler = VAR_16;
 FUNC_3(VAR_16, 9);

 VAR_15->auto_white_bal = FUNC_4(VAR_16, &VAR_14,
            VAR_5,
            0, 1, 1, 1);
 VAR_15->red_bal = FUNC_4(VAR_16, &VAR_14,
     VAR_11, 0, 255, 1,
     VAR_3);
 VAR_15->blue_bal = FUNC_4(VAR_16, &VAR_14,
     VAR_6, 0, 255, 1,
     VAR_0);

 VAR_15->autoexpo = FUNC_5(VAR_16, &VAR_14,
     VAR_8, 1, 0, VAR_13);
 VAR_15->expo = FUNC_4(VAR_16, &VAR_14, VAR_7,
     0, 0x1ff, 4, VAR_1);

 VAR_15->autogain = FUNC_4(VAR_16, &VAR_14,
      VAR_4, 0, 1, 1, 1);
 VAR_15->gain = FUNC_4(VAR_16, &VAR_14, VAR_9, 0,
         0x3ff, 1, VAR_2);

 VAR_15->hflip = FUNC_4(VAR_16, &VAR_14, VAR_10,
          0, 1, 1, 0);
 VAR_15->vflip = FUNC_4(VAR_16, &VAR_14, VAR_12,
          0, 1, 1, 0);

 if (VAR_16->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_16->error;
 }

 FUNC_1(3, &VAR_15->auto_white_bal, 0, 0);
 FUNC_1(2, &VAR_15->autoexpo, 0, 0);
 FUNC_1(2, &VAR_15->autogain, 0, 0);
 FUNC_2(2, &VAR_15->hflip);

 return 0;
}
