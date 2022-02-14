
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int index; scalar_t__ code; } ;
struct v4l2_subdev {int dummy; } ;
struct et8ek8_mode {scalar_t__ bus_format; } ;
struct et8ek8_reglist {scalar_t__ type; struct et8ek8_mode mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct et8ek8_reglist** FUNC_0 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4,
     struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_mbus_code_enum *VAR_6)
{
 struct et8ek8_reglist **VAR_7 =
   FUNC_0(&VAR_3);
 u32 VAR_8[VAR_2];
 int VAR_9 = 0;

 if (VAR_6->index >= VAR_2)
  return -VAR_0;

 for (; *VAR_7; VAR_7++) {
  struct et8ek8_mode *VAR_10 = &(*VAR_7)->mode;
  int VAR_11;

  if ((*VAR_7)->type != VAR_1)
   continue;

  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   if (VAR_8[VAR_11] == VAR_10->bus_format)
    break;
  }
  if (VAR_11 != VAR_9)
   continue;

  if (VAR_6->index == VAR_9) {
   VAR_6->code = VAR_10->bus_format;
   return 0;
  }

  VAR_8[VAR_9] = VAR_10->bus_format;
  VAR_9++;
 }

 return -VAR_0;
}
