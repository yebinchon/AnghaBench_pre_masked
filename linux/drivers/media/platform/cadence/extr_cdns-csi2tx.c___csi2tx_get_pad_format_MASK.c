
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; size_t pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct csi2tx_priv {struct v4l2_mbus_framefmt* pad_fmts; } ;


 scalar_t__ VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,size_t) ;
 struct csi2tx_priv* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static struct v4l2_mbus_framefmt *
FUNC_2(struct v4l2_subdev *VAR_1,
   struct v4l2_subdev_pad_config *VAR_2,
   struct v4l2_subdev_format *VAR_3)
{
 struct csi2tx_priv *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3->which == VAR_0)
  return FUNC_0(VAR_1, VAR_2,
        VAR_3->pad);

 return &VAR_4->pad_fmts[VAR_3->pad];
}
