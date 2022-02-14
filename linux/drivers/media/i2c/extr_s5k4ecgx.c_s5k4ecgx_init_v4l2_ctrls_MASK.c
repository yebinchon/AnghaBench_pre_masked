
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct s5k4ecgx {TYPE_1__ sd; struct v4l2_ctrl_handler handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_ctrl_ops VAR_5 ;
 int FUNC_0 (struct v4l2_ctrl_handler*) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct s5k4ecgx *VAR_6)
{
 const struct v4l2_ctrl_ops *VAR_7 = &VAR_5;
 struct v4l2_ctrl_handler *VAR_8 = &VAR_6->handler;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8, 4);
 if (VAR_9)
  return VAR_9;

 FUNC_2(VAR_8, VAR_7, VAR_1, -208, 127, 1, 0);
 FUNC_2(VAR_8, VAR_7, VAR_2, -127, 127, 1, 0);
 FUNC_2(VAR_8, VAR_7, VAR_3, -127, 127, 1, 0);


 FUNC_2(VAR_8, VAR_7, VAR_4, -32704/VAR_0,
     24612/VAR_0, 1, 2);
 if (VAR_8->error) {
  VAR_9 = VAR_8->error;
  FUNC_0(VAR_8);
  return VAR_9;
 }
 VAR_6->sd.ctrl_handler = VAR_8;

 return 0;
}
