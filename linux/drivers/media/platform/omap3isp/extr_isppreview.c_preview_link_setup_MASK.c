
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {unsigned int index; int entity; } ;
struct media_entity {int dummy; } ;
struct isp_prev_device {int output; void* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 scalar_t__ FUNC_0 (int ) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 struct isp_prev_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct media_entity *VAR_8,
         const struct media_pad *VAR_9,
         const struct media_pad *VAR_10, u32 VAR_11)
{
 struct v4l2_subdev *VAR_12 = FUNC_1(VAR_8);
 struct isp_prev_device *VAR_13 = FUNC_2(VAR_12);
 unsigned int VAR_14 = VAR_9->index;


 if (FUNC_0(VAR_10->entity))
  VAR_14 |= 2 << 16;

 switch (VAR_14) {
 case 129:

  if (VAR_11 & VAR_2) {
   if (VAR_13->input == VAR_3)
    return -VAR_0;
   VAR_13->input = VAR_4;
  } else {
   if (VAR_13->input == VAR_4)
    VAR_13->input = VAR_5;
  }
  break;

 case 129 | 2 << 16:

  if (VAR_11 & VAR_2) {
   if (VAR_13->input == VAR_4)
    return -VAR_0;
   VAR_13->input = VAR_3;
  } else {
   if (VAR_13->input == VAR_3)
    VAR_13->input = VAR_5;
  }
  break;






 case 128:

  if (VAR_11 & VAR_2) {
   if (VAR_13->output & ~VAR_6)
    return -VAR_0;
   VAR_13->output |= VAR_6;
  } else {
   VAR_13->output &= ~VAR_6;
  }
  break;

 case 128 | 2 << 16:

  if (VAR_11 & VAR_2) {
   if (VAR_13->output & ~VAR_7)
    return -VAR_0;
   VAR_13->output |= VAR_7;
  } else {
   VAR_13->output &= ~VAR_7;
  }
  break;

 default:
  return -VAR_1;
 }

 return 0;
}
