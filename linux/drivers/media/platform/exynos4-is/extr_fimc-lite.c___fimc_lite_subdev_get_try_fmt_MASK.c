
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static struct v4l2_mbus_framefmt *FUNC_1(
  struct v4l2_subdev *VAR_2,
  struct v4l2_subdev_pad_config *VAR_3, unsigned int VAR_4)
{
 if (VAR_4 != VAR_0)
  VAR_4 = VAR_1;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
