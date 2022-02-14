
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {scalar_t__ value; } ;
struct v4l2_ctrl {int is_int; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_ctrl*,struct v4l2_ext_control*) ;

s32 FUNC_2(struct v4l2_ctrl *VAR_0)
{
 struct v4l2_ext_control VAR_1;


 FUNC_0(!VAR_0->is_int);
 VAR_1.value = 0;
 FUNC_1(VAR_0, &VAR_1);
 return VAR_1.value;
}
