
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; } ;


 int VAR_0 ;


__attribute__((used)) static int FUNC_0(struct v4l2_ctrl *VAR_1)
{
 switch (VAR_1->id) {
 case 128:
  return 0;
 default:
  return -VAR_0;
 }
}
