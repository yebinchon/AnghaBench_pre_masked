
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_line {size_t nformats; TYPE_1__* formats; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; size_t index; int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct vfe_line*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;
 struct vfe_line* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct vfe_line*,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
         struct v4l2_subdev_pad_config *VAR_3,
         struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct vfe_line *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->pad == VAR_1) {
  if (VAR_4->index >= VAR_5->nformats)
   return -VAR_0;

  VAR_4->code = VAR_5->formats[VAR_4->index].code;
 } else {
  struct v4l2_mbus_framefmt *VAR_6;

  VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_1,
         VAR_4->which);

  VAR_4->code = FUNC_2(VAR_5, VAR_6->code,
           VAR_4->index, 0);
  if (!VAR_4->code)
   return -VAR_0;
 }

 return 0;
}
