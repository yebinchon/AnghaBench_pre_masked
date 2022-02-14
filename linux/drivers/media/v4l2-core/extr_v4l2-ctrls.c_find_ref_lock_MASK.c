
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_ref {int dummy; } ;
struct v4l2_ctrl_handler {int lock; } ;


 struct v4l2_ctrl_ref* FUNC_0 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct v4l2_ctrl_ref *FUNC_3(
  struct v4l2_ctrl_handler *VAR_0, u32 VAR_1)
{
 struct v4l2_ctrl_ref *VAR_2 = ((void*)0);

 if (VAR_0) {
  FUNC_1(VAR_0->lock);
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_0->lock);
 }
 return VAR_2;
}
