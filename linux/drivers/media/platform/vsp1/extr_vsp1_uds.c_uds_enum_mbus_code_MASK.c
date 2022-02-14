
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int dummy; } ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (unsigned int const*) ;


 int FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_mbus_code_enum*,unsigned int const*,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
         struct v4l2_subdev_pad_config *VAR_1,
         struct v4l2_subdev_mbus_code_enum *VAR_2)
{
 static const unsigned int VAR_3[] = {
  129,
  128,
 };

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
       FUNC_0(VAR_3));
}
