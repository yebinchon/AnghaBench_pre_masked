
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct v4l2_subdev_format {scalar_t__ which; TYPE_1__ format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct mipid02_dev {TYPE_1__ fmt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct mipid02_dev* FUNC_1 (struct v4l2_subdev*) ;
 TYPE_1__* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_pad_config *VAR_2,
       struct v4l2_subdev_format *VAR_3)
{
 struct mipid02_dev *VAR_4 = FUNC_1(VAR_1);


 VAR_3->format = VAR_4->fmt;

 VAR_3->format.code = FUNC_0(VAR_3->format.code);


 if (VAR_3->which != VAR_0)
  return;

 *FUNC_2(VAR_1, VAR_2, VAR_3->pad) = VAR_3->format;
}
