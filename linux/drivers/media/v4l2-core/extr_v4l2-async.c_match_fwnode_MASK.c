
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {scalar_t__ fwnode; } ;
struct TYPE_2__ {scalar_t__ fwnode; } ;
struct v4l2_async_subdev {TYPE_1__ match; } ;



__attribute__((used)) static bool FUNC_0(struct v4l2_subdev *VAR_0, struct v4l2_async_subdev *VAR_1)
{
 return VAR_0->fwnode == VAR_1->match.fwnode;
}
