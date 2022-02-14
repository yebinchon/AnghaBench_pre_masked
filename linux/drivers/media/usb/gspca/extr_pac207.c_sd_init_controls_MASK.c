
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {void* brightness; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* autogain; void* gain; void* exposure; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


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
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_14)
{
 struct sd *VAR_15 = (struct sd *) VAR_14;
 struct v4l2_ctrl_handler *VAR_16 = &VAR_14->ctrl_handler;

 VAR_14->vdev.ctrl_handler = VAR_16;
 FUNC_2(VAR_16, 4);

 VAR_15->brightness = FUNC_3(VAR_16, &VAR_13,
    VAR_10,
    VAR_2, VAR_1,
    1, VAR_0);
 VAR_14->autogain = FUNC_3(VAR_16, &VAR_13,
    VAR_9, 0, 1, 1, 1);
 VAR_14->exposure = FUNC_3(VAR_16, &VAR_13,
    VAR_11,
    VAR_5, VAR_4,
    1, VAR_3);
 VAR_14->gain = FUNC_3(VAR_16, &VAR_13,
    VAR_12,
    VAR_8, VAR_7,
    1, VAR_6);
 if (VAR_16->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_16->error;
 }
 FUNC_1(3, &VAR_14->autogain, 0, 0);
 return 0;
}
