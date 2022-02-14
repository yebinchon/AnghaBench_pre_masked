
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; int format; } ;
struct v4l2_subdev {int dummy; } ;
struct rcar_csi2 {int mf; } ;


 scalar_t__ VAR_0 ;
 struct rcar_csi2* FUNC_0 (struct v4l2_subdev*) ;
 int * FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
    struct v4l2_subdev_pad_config *VAR_2,
    struct v4l2_subdev_format *VAR_3)
{
 struct rcar_csi2 *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->which == VAR_0)
  VAR_3->format = VAR_4->mf;
 else
  VAR_3->format = *FUNC_1(VAR_1, VAR_2, 0);

 return 0;
}
