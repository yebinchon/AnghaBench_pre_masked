
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
  struct v4l2_subdev_pad_config *VAR_4,
  struct v4l2_subdev_format *VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6 = &VAR_5->format;
 u8 VAR_7 = FUNC_0(VAR_3, 0x7);
 int VAR_8 = 0;

 if (VAR_5->pad)
  return -VAR_0;

 switch (VAR_6->code) {
 case 128:
  VAR_7 &= ~0x40;
  break;

 case 129:
  VAR_7 |= 0x40;
  break;

 default:
  FUNC_2(1, VAR_2, VAR_3,
   "illegal v4l2_mbus_framefmt code: %d\n", VAR_6->code);
  return -VAR_0;
 }

 if (VAR_5->which == VAR_1)
  VAR_8 = FUNC_1(VAR_3, 0x7, VAR_7);

 return VAR_8;
}
