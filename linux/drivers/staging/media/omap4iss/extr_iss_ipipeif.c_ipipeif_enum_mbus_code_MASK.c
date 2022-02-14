
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int pad; size_t index; int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct iss_ipipeif_device {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;



 struct v4l2_mbus_framefmt* FUNC_1 (struct iss_ipipeif_device*,struct v4l2_subdev_pad_config*,int const,int ) ;
 int * VAR_1 ;
 struct iss_ipipeif_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
      struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct iss_ipipeif_device *VAR_5 = FUNC_2(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6;

 switch (VAR_4->pad) {
 case 130:
  if (VAR_4->index >= FUNC_0(VAR_1))
   return -VAR_0;

  VAR_4->code = VAR_1[VAR_4->index];
  break;

 case 129:
 case 128:

  if (VAR_4->index != 0)
   return -VAR_0;

  VAR_6 = FUNC_1(VAR_5, VAR_3, 130,
           VAR_4->which);

  VAR_4->code = VAR_6->code;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
