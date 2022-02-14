
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {scalar_t__ id; int val; } ;
struct ak7375_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ak7375_device*,int ,int,int) ;
 struct ak7375_device* FUNC_1 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_3)
{
 struct ak7375_device *VAR_4 = FUNC_1(VAR_3);

 if (VAR_3->id == VAR_2)
  return FUNC_0(VAR_4, VAR_0,
     VAR_3->val << 4, 2);

 return -VAR_1;
}
