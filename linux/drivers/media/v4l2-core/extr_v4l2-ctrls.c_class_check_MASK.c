
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_handler {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_ctrl_handler*,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_ctrl_handler *VAR_3, u32 VAR_4)
{
 if (VAR_4 == 0 || VAR_4 == VAR_1 ||
     VAR_4 == VAR_2)
  return 0;
 return FUNC_0(VAR_3, VAR_4 | 1) ? 0 : -VAR_0;
}
