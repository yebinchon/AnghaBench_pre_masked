
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_device {TYPE_1__* mdev; } ;
struct TYPE_4__ {int dev; } ;
struct ispstat {TYPE_2__ subdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct v4l2_device*,TYPE_2__*) ;

int FUNC_1(struct ispstat *VAR_0,
        struct v4l2_device *VAR_1)
{
 VAR_0->subdev.dev = VAR_1->mdev->dev;

 return FUNC_0(VAR_1, &VAR_0->subdev);
}
