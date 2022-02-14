
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vimc_deb_device {int src_code; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {unsigned int num_pads; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
struct v4l2_mbus_framefmt {int code; } ;


 struct v4l2_mbus_framefmt VAR_0 ;
 struct vimc_deb_device* FUNC_0 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
        struct v4l2_subdev_pad_config *VAR_2)
{
 struct vimc_deb_device *VAR_3 = FUNC_0(VAR_1);
 struct v4l2_mbus_framefmt *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2, 0);
 *VAR_4 = VAR_0;

 for (VAR_5 = 1; VAR_5 < VAR_1->entity.num_pads; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_5);
  *VAR_4 = VAR_0;
  VAR_4->code = VAR_3->src_code;
 }

 return 0;
}
