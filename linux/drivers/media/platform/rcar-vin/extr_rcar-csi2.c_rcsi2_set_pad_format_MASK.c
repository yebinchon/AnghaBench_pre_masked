
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct rcar_csi2 {struct v4l2_mbus_framefmt mf; } ;
struct TYPE_2__ {int code; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 struct rcar_csi2* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
    struct v4l2_subdev_pad_config *VAR_3,
    struct v4l2_subdev_format *VAR_4)
{
 struct rcar_csi2 *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6;

 if (!FUNC_0(VAR_4->format.code))
  VAR_4->format.code = VAR_1[0].code;

 if (VAR_4->which == VAR_0) {
  VAR_5->mf = VAR_4->format;
 } else {
  VAR_6 = FUNC_2(VAR_2, VAR_3, 0);
  *VAR_6 = VAR_4->format;
 }

 return 0;
}
