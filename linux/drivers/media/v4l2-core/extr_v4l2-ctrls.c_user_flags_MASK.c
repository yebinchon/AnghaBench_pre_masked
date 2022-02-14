
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl {scalar_t__ is_ptr; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const struct v4l2_ctrl *VAR_1)
{
 u32 VAR_2 = VAR_1->flags;

 if (VAR_1->is_ptr)
  VAR_2 |= VAR_0;

 return VAR_2;
}
