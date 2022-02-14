
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {scalar_t__ value64; } ;
struct v4l2_ctrl {scalar_t__ type; scalar_t__ is_ptr; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_ctrl*,struct v4l2_ext_control*) ;

s64 FUNC_2(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_ext_control VAR_2;


 FUNC_0(VAR_1->is_ptr || VAR_1->type != VAR_0);
 VAR_2.value64 = 0;
 FUNC_1(VAR_1, &VAR_2);
 return VAR_2.value64;
}
