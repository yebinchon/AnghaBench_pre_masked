
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {scalar_t__ id; int val; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct v4l2_ctrl *VAR_1)
{
 if (VAR_1->id == VAR_0 && VAR_1->val >= 63) {

  VAR_1->val &= ~1;
 }

 return 0;
}
