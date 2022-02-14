
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union v4l2_ctrl_ptr {int dummy; } v4l2_ctrl_ptr ;
struct v4l2_ctrl {unsigned int elems; TYPE_1__* type_ops; } ;
struct TYPE_2__ {int (* validate ) (struct v4l2_ctrl const*,unsigned int,union v4l2_ctrl_ptr) ;} ;


 int FUNC_0 (struct v4l2_ctrl const*,unsigned int,union v4l2_ctrl_ptr) ;

__attribute__((used)) static int FUNC_1(const struct v4l2_ctrl *VAR_0, union v4l2_ctrl_ptr VAR_1)
{
 unsigned VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; !VAR_3 && VAR_2 < VAR_0->elems; VAR_2++)
  VAR_3 = VAR_0->type_ops->validate(VAR_0, VAR_2, VAR_1);
 return VAR_3;
}
