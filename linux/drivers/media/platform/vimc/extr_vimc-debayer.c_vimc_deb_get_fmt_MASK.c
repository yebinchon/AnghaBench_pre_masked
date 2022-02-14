
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct vimc_deb_device {int src_code; TYPE_1__ sink_fmt; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; TYPE_1__ format; int pad; } ;
struct v4l2_subdev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct vimc_deb_device* FUNC_1 (struct v4l2_subdev*) ;
 TYPE_1__* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_pad_config *VAR_2,
       struct v4l2_subdev_format *VAR_3)
{
 struct vimc_deb_device *VAR_4 = FUNC_1(VAR_1);


 VAR_3->format = VAR_3->which == VAR_0 ?
        *FUNC_2(VAR_1, VAR_2, 0) :
        VAR_4->sink_fmt;


 if (FUNC_0(VAR_3->pad))
  VAR_3->format.code = VAR_4->src_code;

 return 0;
}
