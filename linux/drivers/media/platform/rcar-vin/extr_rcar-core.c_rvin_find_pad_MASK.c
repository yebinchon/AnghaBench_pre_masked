
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_pads; TYPE_1__* pads; } ;
struct v4l2_subdev {TYPE_2__ entity; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 if (VAR_1->entity.num_pads <= 1)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->entity.num_pads; VAR_3++)
  if (VAR_1->entity.pads[VAR_3].flags & VAR_2)
   return VAR_3;

 return -VAR_0;
}
