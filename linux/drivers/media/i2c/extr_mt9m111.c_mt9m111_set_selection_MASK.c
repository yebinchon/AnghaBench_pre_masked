
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {scalar_t__ height; scalar_t__ width; void* top; void* left; } ;
struct v4l2_subdev_selection {scalar_t__ which; scalar_t__ target; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9m111 {int width; int height; struct v4l2_rect rect; TYPE_1__* fmt; } ;
struct i2c_client {int dummy; } ;
typedef scalar_t__ __s32 ;
struct TYPE_2__ {scalar_t__ code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_0 (void*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct mt9m111*,struct v4l2_rect*,int,int,scalar_t__) ;
 struct mt9m111* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (scalar_t__*,int,scalar_t__,int,scalar_t__*,int,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_9,
     struct v4l2_subdev_pad_config *VAR_10,
     struct v4l2_subdev_selection *VAR_11)
{
 struct i2c_client *VAR_12 = FUNC_4(VAR_9);
 struct mt9m111 *VAR_13 = FUNC_3(VAR_12);
 struct v4l2_rect VAR_14 = VAR_11->r;
 int VAR_15, VAR_16;
 int VAR_17, VAR_18 = 0;

 if (VAR_11->which != VAR_8 ||
     VAR_11->target != VAR_7)
  return -VAR_0;

 if (VAR_13->fmt->code == VAR_2 ||
     VAR_13->fmt->code == VAR_1) {

  VAR_18 = 1;

 }


 FUNC_5(&VAR_14.width, 2, VAR_4, VAR_18,
         &VAR_14.height, 2, VAR_3, VAR_18, 0);
 VAR_14.left = FUNC_0(VAR_14.left, VAR_5,
     VAR_5 + VAR_4 -
     (__s32)VAR_14.width);
 VAR_14.top = FUNC_0(VAR_14.top, VAR_6,
    VAR_6 + VAR_3 -
    (__s32)VAR_14.height);

 VAR_15 = FUNC_1(VAR_13->width, VAR_14.width);
 VAR_16 = FUNC_1(VAR_13->height, VAR_14.height);

 VAR_17 = FUNC_2(VAR_13, &VAR_14, VAR_15, VAR_16, VAR_13->fmt->code);
 if (!VAR_17) {
  VAR_13->rect = VAR_14;
  VAR_13->width = VAR_15;
  VAR_13->height = VAR_16;
 }

 return VAR_17;
}
