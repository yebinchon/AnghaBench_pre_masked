
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {scalar_t__ sensor; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* autogain; void* exposure; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_12)
{
 struct sd *VAR_13 = (struct sd *)VAR_12;
 struct v4l2_ctrl_handler *VAR_14 = &VAR_12->ctrl_handler;

 if (VAR_13->sensor == VAR_2)
  return 0;
 if (VAR_13->sensor == VAR_0)
  return 0;
 VAR_12->vdev.ctrl_handler = VAR_14;
 FUNC_2(VAR_14, 7);
 if (VAR_13->sensor == VAR_1) {
  FUNC_3(VAR_14, &VAR_11,
   VAR_4, -90, 90, 1, 0);
 } else {
  FUNC_3(VAR_14, &VAR_11,
   VAR_4, 0, 15, 1, 7);
  FUNC_3(VAR_14, &VAR_11,
   VAR_5, 0, 15, 1, 3);
  FUNC_3(VAR_14, &VAR_11,
   VAR_9, 0, 4, 1, 2);

  FUNC_3(VAR_14, &VAR_11,
   VAR_10, -1, 4, 1, -1);
  VAR_12->autogain = FUNC_3(VAR_14, &VAR_11,
   VAR_3, 0, 1, 1, 1);
  VAR_12->exposure = FUNC_3(VAR_14, &VAR_11,
   VAR_6, 0, 3, 1, 0);
  FUNC_4(VAR_14, &VAR_11,
   VAR_7,
   VAR_8, 0, 0);
  FUNC_1(3, &VAR_12->autogain, 0, 0);
 }

 if (VAR_14->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_14->error;
 }
 return 0;
}
