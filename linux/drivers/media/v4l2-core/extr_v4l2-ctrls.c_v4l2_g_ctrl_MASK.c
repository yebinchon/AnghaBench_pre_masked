
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int value; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int is_int; } ;
struct v4l2_control {int value; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_ctrl*,struct v4l2_ext_control*) ;
 struct v4l2_ctrl* FUNC_1 (struct v4l2_ctrl_handler*,int ) ;

int FUNC_2(struct v4l2_ctrl_handler *VAR_1, struct v4l2_control *VAR_2)
{
 struct v4l2_ctrl *VAR_3 = FUNC_1(VAR_1, VAR_2->id);
 struct v4l2_ext_control VAR_4;
 int VAR_5;

 if (VAR_3 == ((void*)0) || !VAR_3->is_int)
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 VAR_2->value = VAR_4.value;
 return VAR_5;
}
