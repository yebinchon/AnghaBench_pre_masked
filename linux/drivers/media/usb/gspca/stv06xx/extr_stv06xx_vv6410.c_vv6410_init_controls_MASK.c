
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
 int FUNC_0 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_3)
{
 struct v4l2_ctrl_handler *VAR_4 = &VAR_3->gspca_dev.ctrl_handler;

 FUNC_0(VAR_4, 2);







 FUNC_1(VAR_4, &VAR_2,
   VAR_0, 0, 32768, 1, 20000);
 FUNC_1(VAR_4, &VAR_2,
   VAR_1, 0, 15, 1, 10);
 return VAR_4->error;
}
