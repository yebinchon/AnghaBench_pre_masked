
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; size_t index; int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct iss_format_info {int uncompressed; } ;
struct iss_csi2_device {int dummy; } ;


 size_t FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct iss_csi2_device*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;
 int * VAR_2 ;
 struct iss_format_info* FUNC_2 (int ) ;
 struct iss_csi2_device* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3,
          struct v4l2_subdev_pad_config *VAR_4,
          struct v4l2_subdev_mbus_code_enum *VAR_5)
{
 struct iss_csi2_device *VAR_6 = FUNC_3(VAR_3);
 struct v4l2_mbus_framefmt *VAR_7;
 const struct iss_format_info *VAR_8;

 if (VAR_5->pad == VAR_0) {
  if (VAR_5->index >= FUNC_0(VAR_2))
   return -VAR_1;

  VAR_5->code = VAR_2[VAR_5->index];
 } else {
  VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_0,
        VAR_5->which);
  switch (VAR_5->index) {
  case 0:

   VAR_5->code = VAR_7->code;
   break;
  case 1:

   VAR_8 = FUNC_2(VAR_7->code);
   if (VAR_8->uncompressed == VAR_7->code)
    return -VAR_1;

   VAR_5->code = VAR_8->uncompressed;
   break;
  default:
   return -VAR_1;
  }
 }

 return 0;
}
