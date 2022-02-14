
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_csi2 {struct adv748x_state* state; } ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ,int ) ;
 struct adv748x_csi2* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_pad_config *VAR_2,
       struct v4l2_subdev_format *VAR_3)
{
 struct adv748x_csi2 *VAR_4 = FUNC_1(VAR_1);
 struct adv748x_state *VAR_5 = VAR_4->state;
 struct v4l2_mbus_framefmt *VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3->pad,
       VAR_3->which);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_5->mutex);

 VAR_3->format = *VAR_6;

 FUNC_3(&VAR_5->mutex);

 return 0;
}
