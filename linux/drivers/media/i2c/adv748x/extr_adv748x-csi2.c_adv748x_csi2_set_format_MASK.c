
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_csi2 {struct adv748x_state* state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;
 struct adv748x_csi2* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3,
       struct v4l2_subdev_pad_config *VAR_4,
       struct v4l2_subdev_format *VAR_5)
{
 struct adv748x_csi2 *VAR_6 = FUNC_1(VAR_3);
 struct adv748x_state *VAR_7 = VAR_6->state;
 struct v4l2_mbus_framefmt *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5->pad,
       VAR_5->which);
 if (!VAR_8)
  return -VAR_2;

 FUNC_2(&VAR_7->mutex);

 if (VAR_5->pad == VAR_1) {
  const struct v4l2_mbus_framefmt *VAR_10;

  VAR_10 = FUNC_0(VAR_3, VAR_4,
             VAR_0,
             VAR_5->which);

  if (!VAR_10) {
   VAR_9 = -VAR_2;
   goto unlock;
  }

  VAR_5->format = *VAR_10;
 }

 *VAR_8 = VAR_5->format;

unlock:
 FUNC_3(&VAR_7->mutex);

 return VAR_9;
}
