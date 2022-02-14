
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int dummy; } ;
struct v4l2_ext_control {int value; int member_0; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int flags; int is_int; } ;
struct v4l2_control {int value; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_fh*,struct v4l2_ctrl*,struct v4l2_ext_control*) ;
 struct v4l2_ctrl* FUNC_1 (struct v4l2_ctrl_handler*,int ) ;

int FUNC_2(struct v4l2_fh *VAR_3, struct v4l2_ctrl_handler *VAR_4,
     struct v4l2_control *VAR_5)
{
 struct v4l2_ctrl *VAR_6 = FUNC_1(VAR_4, VAR_5->id);
 struct v4l2_ext_control VAR_7 = { VAR_5->id };
 int VAR_8;

 if (VAR_6 == ((void*)0) || !VAR_6->is_int)
  return -VAR_1;

 if (VAR_6->flags & VAR_2)
  return -VAR_0;

 VAR_7.value = VAR_5->value;
 VAR_8 = FUNC_0(VAR_3, VAR_6, &VAR_7);
 VAR_5->value = VAR_7.value;
 return VAR_8;
}
