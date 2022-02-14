
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct adv748x_csi2 {struct v4l2_mbus_framefmt format; } ;


 scalar_t__ VAR_0 ;
 struct adv748x_csi2* FUNC_0 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static struct v4l2_mbus_framefmt *
FUNC_2(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_pad_config *VAR_2,
       unsigned int VAR_3, u32 VAR_4)
{
 struct adv748x_csi2 *VAR_5 = FUNC_0(VAR_1);

 if (VAR_4 == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 return &VAR_5->format;
}
