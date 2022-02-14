
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {int lock; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct vdic_priv*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vdic_priv* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
   struct v4l2_subdev_pad_config *VAR_3,
   struct v4l2_subdev_format *VAR_4)
{
 struct vdic_priv *VAR_5 = FUNC_3(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6;
 int VAR_7 = 0;

 if (VAR_4->pad >= VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_5->lock);

 VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4->pad, VAR_4->which);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_4->format = *VAR_6;
out:
 FUNC_2(&VAR_5->lock);
 return VAR_7;
}
