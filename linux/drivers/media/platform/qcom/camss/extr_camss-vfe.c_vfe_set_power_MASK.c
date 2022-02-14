
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfe_line {int dummy; } ;
struct vfe_device {TYPE_2__* camss; TYPE_1__* ops; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* hw_version_read ) (struct vfe_device*,int ) ;} ;


 int FUNC_0 (struct vfe_device*,int ) ;
 struct vfe_device* FUNC_1 (struct vfe_line*) ;
 struct vfe_line* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct vfe_device*) ;
 int FUNC_4 (struct vfe_device*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct vfe_line *VAR_2 = FUNC_2(VAR_0);
 struct vfe_device *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (VAR_1) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_3->ops->hw_version_read(VAR_3, VAR_3->camss->dev);
 } else {
  FUNC_4(VAR_3);
 }

 return 0;
}
