
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_fh {int dummy; } ;
struct v4l2_subdev {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, struct v4l2_subdev_fh *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->dev);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0->dev);
  return VAR_2;
 }

 return 0;
}
