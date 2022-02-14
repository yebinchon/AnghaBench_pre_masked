
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv748x_csi2 {int pixel_rate; } ;
typedef int s64 ;


 int VAR_0 ;
 struct adv748x_csi2* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct v4l2_subdev *VAR_1, s64 VAR_2)
{
 struct adv748x_csi2 *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->pixel_rate)
  return -VAR_0;

 return FUNC_1(VAR_3->pixel_rate, VAR_2);
}
