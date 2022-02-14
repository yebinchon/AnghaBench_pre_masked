
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_pads; TYPE_1__* pads; } ;
struct v4l2_subdev {TYPE_2__ entity; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline enum v4l2_buf_type
FUNC_0(const struct v4l2_subdev *VAR_3, int VAR_4)
{
 if (VAR_4 >= VAR_3->entity.num_pads)
  return 0;

 if (VAR_3->entity.pads[VAR_4].flags & VAR_0)
  return VAR_2;
 else
  return VAR_1;
}
