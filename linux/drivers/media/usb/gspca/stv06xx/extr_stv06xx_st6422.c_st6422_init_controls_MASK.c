
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler ctrl_handler; } ;
struct sd {TYPE_1__ gspca_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_5)
{
 struct v4l2_ctrl_handler *VAR_6 = &VAR_5->gspca_dev.ctrl_handler;

 FUNC_0(VAR_6, 4);
 FUNC_1(VAR_6, &VAR_4,
   VAR_0, 0, 31, 1, 3);
 FUNC_1(VAR_6, &VAR_4,
   VAR_1, 0, 15, 1, 11);
 FUNC_1(VAR_6, &VAR_4,
   VAR_2, 0, 1023, 1, 256);
 FUNC_1(VAR_6, &VAR_4,
   VAR_3, 0, 255, 1, 64);

 return VAR_6->error;
}
