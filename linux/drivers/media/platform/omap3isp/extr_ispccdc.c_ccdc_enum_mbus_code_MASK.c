
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int pad; size_t index; int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct isp_ccdc_device {int dummy; } ;


 size_t FUNC_0 (int *) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct isp_ccdc_device*,struct v4l2_subdev_pad_config*,int,int ) ;
 int * VAR_5 ;
 struct isp_ccdc_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_6,
          struct v4l2_subdev_pad_config *VAR_7,
          struct v4l2_subdev_mbus_code_enum *VAR_8)
{
 struct isp_ccdc_device *VAR_9 = FUNC_2(VAR_6);
 struct v4l2_mbus_framefmt *VAR_10;

 switch (VAR_8->pad) {
 case 130:
  if (VAR_8->index >= FUNC_0(VAR_5))
   return -VAR_0;

  VAR_8->code = VAR_5[VAR_8->index];
  break;

 case 129:
  VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_8->pad,
        VAR_8->which);

  if (VAR_10->code == VAR_4 ||
      VAR_10->code == VAR_2) {

   if (VAR_8->index == 0)
    VAR_8->code = VAR_3;
   else if (VAR_8->index == 1)
    VAR_8->code = VAR_1;
   else
    return -VAR_0;
  } else {



   if (VAR_8->index == 0)
    VAR_8->code = VAR_10->code;
   else
    return -VAR_0;
  }
  break;

 case 128:




  if (VAR_8->index != 0)
   return -VAR_0;

  VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_8->pad,
        VAR_8->which);




  if (VAR_10->code == 0)
   return -VAR_0;

  VAR_8->code = VAR_10->code;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
