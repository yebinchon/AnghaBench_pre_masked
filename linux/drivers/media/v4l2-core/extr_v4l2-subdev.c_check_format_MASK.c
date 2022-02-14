
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct v4l2_subdev_pad_config*) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct v4l2_subdev *VAR_1,
          struct v4l2_subdev_pad_config *VAR_2,
          struct v4l2_subdev_format *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;

 return FUNC_2(VAR_3->which) ? : FUNC_1(VAR_1, VAR_3->pad) ? :
        FUNC_0(VAR_3->which, VAR_2);
}
