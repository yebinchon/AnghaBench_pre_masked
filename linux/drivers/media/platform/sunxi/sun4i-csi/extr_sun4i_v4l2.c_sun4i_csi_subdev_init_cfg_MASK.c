
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
         struct v4l2_subdev_pad_config *VAR_3)
{
 struct v4l2_mbus_framefmt *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
 *VAR_4 = VAR_1;

 return 0;
}
