
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vimc_deb_device {int src_code; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int index; int code; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int code; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct vimc_deb_device* FUNC_2 (struct v4l2_subdev*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
       struct v4l2_subdev_pad_config *VAR_3,
       struct v4l2_subdev_mbus_code_enum *VAR_4)
{

 if (FUNC_1(VAR_4->pad)) {
  struct vimc_deb_device *VAR_5 = FUNC_2(VAR_2);

  if (VAR_4->index)
   return -VAR_0;

  VAR_4->code = VAR_5->src_code;
 } else {
  if (VAR_4->index >= FUNC_0(VAR_1))
   return -VAR_0;

  VAR_4->code = VAR_1[VAR_4->index].code;
 }

 return 0;
}
