
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {scalar_t__ field; } ;
struct v4l2_subdev_format {scalar_t__ pad; TYPE_1__ format; int which; } ;
struct v4l2_mbus_framefmt {int field; int height; } ;
struct csi_priv {int dummy; } ;


 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;


 struct v4l2_mbus_framefmt* FUNC_1 (struct csi_priv*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct csi_priv *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_format *VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6 =
  FUNC_1(VAR_3, VAR_4, VAR_0, VAR_5->which);





 if (VAR_5->pad == VAR_0) {
  if (VAR_5->format.field == VAR_1)
   VAR_5->format.field = VAR_2;
  return;
 }

 switch (VAR_6->field) {
 case 128:
 case 129:





  if (!FUNC_0(VAR_5->format.field))
   VAR_5->format.field = VAR_6->field;
  break;
 case 130:
  if (!FUNC_0(VAR_5->format.field))
   VAR_5->format.field = (VAR_6->height == 480 / 2) ?
    129 : 128;
  break;
 default:

  VAR_5->format.field = VAR_6->field;
  break;
 }
}
