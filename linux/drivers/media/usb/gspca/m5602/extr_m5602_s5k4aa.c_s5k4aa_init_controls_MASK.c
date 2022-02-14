
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_3__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_4__ {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct sd {void* hflip; void* vflip; TYPE_2__ gspca_dev; } ;


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
 int FUNC_1 (int,void**) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;

int FUNC_4(struct sd *VAR_9)
{
 struct v4l2_ctrl_handler *VAR_10 = &VAR_9->gspca_dev.ctrl_handler;

 VAR_9->gspca_dev.vdev.ctrl_handler = VAR_10;
 FUNC_2(VAR_10, 6);

 FUNC_3(VAR_10, &VAR_8, VAR_2,
     0, 0x1f, 1, VAR_0);

 FUNC_3(VAR_10, &VAR_8, VAR_3,
     13, 0xfff, 1, 0x100);

 FUNC_3(VAR_10, &VAR_8, VAR_4,
     0, 127, 1, VAR_1);

 FUNC_3(VAR_10, &VAR_8, VAR_6,
     0, 1, 1, 1);

 VAR_9->hflip = FUNC_3(VAR_10, &VAR_8, VAR_5,
          0, 1, 1, 0);
 VAR_9->vflip = FUNC_3(VAR_10, &VAR_8, VAR_7,
          0, 1, 1, 0);

 if (VAR_10->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_10->error;
 }

 FUNC_1(2, &VAR_9->hflip);

 return 0;
}
