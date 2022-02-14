
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int pad; size_t index; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct mipid02_dev {TYPE_1__ fmt; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;


 int * VAR_1 ;
 int FUNC_1 (int ) ;
 struct mipid02_dev* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
     struct v4l2_subdev_pad_config *VAR_3,
     struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct mipid02_dev *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = 0;

 switch (VAR_4->pad) {
 case 129:
  if (VAR_4->index >= FUNC_0(VAR_1))
   VAR_6 = -VAR_0;
  else
   VAR_4->code = VAR_1[VAR_4->index];
  break;
 case 128:
  if (VAR_4->index == 0)
   VAR_4->code = FUNC_1(VAR_5->fmt.code);
  else
   VAR_6 = -VAR_0;
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
