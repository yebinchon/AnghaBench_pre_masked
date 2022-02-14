
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fwnode_endpoint {int dummy; } ;
struct TYPE_2__ {int fwnode; } ;
struct v4l2_async_subdev {TYPE_1__ match; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
      struct v4l2_fwnode_endpoint *VAR_2,
      struct v4l2_async_subdev *VAR_3)
{
 return FUNC_0(VAR_3->match.fwnode) ? 0 : -VAR_0;
}
