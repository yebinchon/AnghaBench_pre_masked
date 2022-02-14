
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {size_t index; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {TYPE_2__* info; } ;
struct TYPE_4__ {size_t nformats; TYPE_1__* formats; } ;
struct TYPE_3__ {int code; } ;


 int VAR_0 ;
 struct adv76xx_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
      struct v4l2_subdev_pad_config *VAR_2,
      struct v4l2_subdev_mbus_code_enum *VAR_3)
{
 struct adv76xx_state *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->index >= VAR_4->info->nformats)
  return -VAR_0;

 VAR_3->code = VAR_4->info->formats[VAR_3->index].code;

 return 0;
}
