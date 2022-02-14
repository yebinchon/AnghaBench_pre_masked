
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_3__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_4__ {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct sd {void* hflip; void* auto_white_bal; void* vflip; void* blue_bal; void* red_bal; int green_bal; TYPE_2__ gspca_dev; } ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int *) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int ) ;

int FUNC_6(struct sd *VAR_12)
{
 struct v4l2_ctrl_handler *VAR_13 = &VAR_12->gspca_dev.ctrl_handler;

 VAR_12->gspca_dev.vdev.ctrl_handler = VAR_13;
 FUNC_3(VAR_13, 7);

 VAR_12->auto_white_bal = FUNC_5(VAR_13, &VAR_10,
            VAR_4,
            0, 1, 1, 0);
 VAR_12->green_bal = FUNC_4(VAR_13, &VAR_11, ((void*)0));
 VAR_12->red_bal = FUNC_5(VAR_13, &VAR_10,
     VAR_8, 0, 0x7ff, 1,
     VAR_3);
 VAR_12->blue_bal = FUNC_5(VAR_13, &VAR_10,
     VAR_5, 0, 0x7ff, 1,
     VAR_1);

 FUNC_5(VAR_13, &VAR_10, VAR_6, 0,
     (VAR_0 - 1) * 2 * 2 * 2, 1,
     VAR_2);

 VAR_12->hflip = FUNC_5(VAR_13, &VAR_10, VAR_7,
          0, 1, 1, 0);
 VAR_12->vflip = FUNC_5(VAR_13, &VAR_10, VAR_9,
          0, 1, 1, 0);

 if (VAR_13->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_13->error;
 }

 FUNC_1(4, &VAR_12->auto_white_bal, 0, 0);
 FUNC_2(2, &VAR_12->hflip);

 return 0;
}
