
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int try_fmt; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_pad_config *VAR_2)
{
 VAR_2->try_fmt = VAR_0;

 return 0;
}
