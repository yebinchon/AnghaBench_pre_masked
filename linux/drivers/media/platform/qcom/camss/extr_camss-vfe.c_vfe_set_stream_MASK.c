
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_line {int dummy; } ;
struct vfe_device {TYPE_1__* camss; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 struct vfe_device* FUNC_1 (struct vfe_line*) ;
 struct vfe_line* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct vfe_line*) ;
 int FUNC_4 (struct vfe_line*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct vfe_line *VAR_2 = FUNC_2(VAR_0);
 struct vfe_device *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (VAR_1) {
  VAR_4 = FUNC_4(VAR_2);
  if (VAR_4 < 0)
   FUNC_0(VAR_3->camss->dev,
    "Failed to enable vfe outputs\n");
 } else {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4 < 0)
   FUNC_0(VAR_3->camss->dev,
    "Failed to disable vfe outputs\n");
 }

 return VAR_4;
}
