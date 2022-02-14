
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int code; int field; int height; scalar_t__ width; } ;
struct v4l2_subdev_format {TYPE_2__ format; int pad; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; int field; } ;
struct rvin_dev {int mbus_code; TYPE_1__ format; } ;
struct media_pad {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*,struct media_pad*,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_1(struct rvin_dev *VAR_3, struct v4l2_subdev *VAR_4,
       struct media_pad *VAR_5)
{
 struct v4l2_subdev_format VAR_6 = {
  .which = VAR_1,
 };

 VAR_6.pad = VAR_5->index;
 if (FUNC_0(VAR_4, VAR_5, VAR_2, ((void*)0), &VAR_6))
  return -VAR_0;

 switch (VAR_6.format.code) {
 case 137:
 case 139:
 case 138:
 case 140:
 case 141:
  VAR_3->mbus_code = VAR_6.format.code;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_6.format.field) {
 case 128:
 case 135:
 case 131:
 case 132:
 case 133:
 case 134:
 case 129:
 case 130:

  break;
 case 136:
  switch (VAR_3->format.field) {
  case 128:
  case 135:
  case 131:
   break;
  case 132:
  case 133:
  case 134:
  case 129:
  case 130:

   VAR_6.format.height *= 2;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6.format.width != VAR_3->format.width ||
     VAR_6.format.height != VAR_3->format.height ||
     VAR_6.format.code != VAR_3->mbus_code)
  return -VAR_0;

 return 0;
}
