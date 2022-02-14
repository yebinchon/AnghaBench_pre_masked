
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl {int id; int val; } ;
struct TYPE_3__ {int agc; int sharpness; int picture; int quality; int framerate; } ;
struct TYPE_4__ {int brightness; int hue; int contrast; int colour; int lock; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_9)
{
 FUNC_0(&VAR_8.lock);
 switch (VAR_9->id) {
 case 136:
  FUNC_2(
   VAR_2, VAR_9->val);
  VAR_8.brightness = VAR_9->val << 10;
  break;
 case 134:
  FUNC_2(
   VAR_5, VAR_9->val);
  VAR_8.hue = VAR_9->val << 10;
  break;
 case 135:
  FUNC_2(
   VAR_4, VAR_9->val);
  VAR_8.contrast = VAR_9->val << 10;
  break;
 case 129:
  FUNC_2(
   VAR_3, VAR_9->val);
  VAR_8.colour = VAR_9->val << 10;
  break;
 case 132:
  FUNC_2(
   VAR_1, VAR_9->val);
  VAR_8.params.agc = VAR_9->val;
  break;
 case 128:
  FUNC_2(
   VAR_7, VAR_9->val);
  VAR_8.params.sharpness = VAR_9->val;
  break;
 case 130:
  FUNC_2(
   VAR_6, VAR_9->val);
  VAR_8.params.picture = VAR_9->val;
  break;
 case 133:
  VAR_8.params.quality = VAR_9->val;
  break;
 case 131:
  VAR_8.params.framerate = VAR_9->val;
  break;
 default:
  FUNC_1(&VAR_8.lock);
  return -VAR_0;
 }
 FUNC_1(&VAR_8.lock);

 return 0;
}
