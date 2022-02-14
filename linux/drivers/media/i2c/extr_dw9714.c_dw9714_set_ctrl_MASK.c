
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {scalar_t__ id; int val; } ;
struct dw9714_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dw9714_device*,int ) ;
 struct dw9714_device* FUNC_1 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_2)
{
 struct dw9714_device *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->id == VAR_1)
  return FUNC_0(VAR_3, VAR_2->val);

 return -VAR_0;
}
