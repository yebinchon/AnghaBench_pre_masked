
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {unsigned int index; int entity; } ;
struct media_entity {int dummy; } ;
struct isp_res_device {void* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;


 scalar_t__ FUNC_0 (int ) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 struct isp_res_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct media_entity *VAR_6,
         const struct media_pad *VAR_7,
         const struct media_pad *VAR_8, u32 VAR_9)
{
 struct v4l2_subdev *VAR_10 = FUNC_1(VAR_6);
 struct isp_res_device *VAR_11 = FUNC_2(VAR_10);
 unsigned int VAR_12 = VAR_7->index;


 if (FUNC_0(VAR_8->entity))
  VAR_12 |= 2 << 16;

 switch (VAR_12) {
 case 129:

  if (VAR_9 & VAR_2) {
   if (VAR_11->input == VAR_5)
    return -VAR_0;
   VAR_11->input = VAR_3;
  } else {
   if (VAR_11->input == VAR_3)
    VAR_11->input = VAR_4;
  }
  break;

 case 129 | 2 << 16:

  if (VAR_9 & VAR_2) {
   if (VAR_11->input == VAR_3)
    return -VAR_0;
   VAR_11->input = VAR_5;
  } else {
   if (VAR_11->input == VAR_5)
    VAR_11->input = VAR_4;
  }
  break;

 case 128:

  break;

 default:
  return -VAR_1;
 }

 return 0;
}
