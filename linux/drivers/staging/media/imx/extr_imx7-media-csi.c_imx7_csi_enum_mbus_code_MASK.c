
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int pad; int code; int index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct imx7_csi {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct v4l2_mbus_framefmt* FUNC_0 (struct imx7_csi*,struct v4l2_subdev_pad_config*,int,int ) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct imx7_csi* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
       struct v4l2_subdev_pad_config *VAR_3,
       struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct imx7_csi *VAR_5 = FUNC_4(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_5->lock);

 VAR_6 = FUNC_0(VAR_5, VAR_3, 129, VAR_4->which);

 switch (VAR_4->pad) {
 case 129:
  VAR_7 = FUNC_1(&VAR_4->code, VAR_4->index,
       VAR_0, 1);
  break;
 case 128:
  if (VAR_4->index != 0) {
   VAR_7 = -VAR_1;
   goto out_unlock;
  }

  VAR_4->code = VAR_6->code;
  break;
 default:
  VAR_7 = -VAR_1;
 }

out_unlock:
 FUNC_3(&VAR_5->lock);

 return VAR_7;
}
