
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_control {int dummy; } ;
struct v4l2_ctrl {int elems; int p_new; TYPE_1__* type_ops; } ;
struct TYPE_2__ {int (* init ) (struct v4l2_ctrl*,int,int ) ;} ;


 int FUNC_0 (struct v4l2_ext_control*,struct v4l2_ctrl*,int ) ;
 int FUNC_1 (struct v4l2_ctrl*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ext_control *VAR_0, struct v4l2_ctrl *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->elems; VAR_2++)
  VAR_1->type_ops->init(VAR_1, VAR_2, VAR_1->p_new);

 return FUNC_0(VAR_0, VAR_1, VAR_1->p_new);
}
