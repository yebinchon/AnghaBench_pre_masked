
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dev; } ;
struct TYPE_2__ {int device_name; } ;
struct v4l2_async_subdev {TYPE_1__ match; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct v4l2_subdev *VAR_0,
     struct v4l2_async_subdev *VAR_1)
{
 return !FUNC_1(VAR_1->match.device_name, FUNC_0(VAR_0->dev));
}
