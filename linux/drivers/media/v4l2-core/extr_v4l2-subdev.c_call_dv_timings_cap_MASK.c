
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {TYPE_2__* ops; } ;
struct v4l2_dv_timings_cap {int pad; } ;
struct TYPE_4__ {TYPE_1__* pad; } ;
struct TYPE_3__ {int (* dv_timings_cap ) (struct v4l2_subdev*,struct v4l2_dv_timings_cap*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_dv_timings_cap*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
          struct v4l2_dv_timings_cap *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2->pad) ? :
        VAR_1->ops->pad->dv_timings_cap(VAR_1, VAR_2);
}
