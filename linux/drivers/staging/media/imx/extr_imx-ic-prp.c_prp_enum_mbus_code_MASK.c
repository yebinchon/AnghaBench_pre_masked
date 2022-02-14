
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int pad; int code; int which; int index; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct prp_priv {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct v4l2_mbus_framefmt* FUNC_0 (struct prp_priv*,struct v4l2_subdev_pad_config*,int const,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct prp_priv* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
         struct v4l2_subdev_pad_config *VAR_3,
         struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct prp_priv *VAR_5 = FUNC_4(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_5->lock);

 switch (VAR_4->pad) {
 case 130:
  VAR_7 = FUNC_1(&VAR_4->code, VAR_4->index,
      VAR_0);
  break;
 case 129:
 case 128:
  if (VAR_4->index != 0) {
   VAR_7 = -VAR_1;
   goto out;
  }
  VAR_6 = FUNC_0(VAR_5, VAR_3, 130, VAR_4->which);
  VAR_4->code = VAR_6->code;
  break;
 default:
  VAR_7 = -VAR_1;
 }
out:
 FUNC_3(&VAR_5->lock);
 return VAR_7;
}
