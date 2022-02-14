
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int width; int height; int left; int top; } ;
struct v4l2_subdev_selection {scalar_t__ which; scalar_t__ target; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int left; int width; int top; int height; } ;
struct ov6650 {TYPE_1__ rect; } ;
struct i2c_client {int dummy; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct ov6650* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int*,int,scalar_t__,int,int*,int,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_11,
  struct v4l2_subdev_pad_config *VAR_12,
  struct v4l2_subdev_selection *VAR_13)
{
 struct i2c_client *VAR_14 = FUNC_2(VAR_11);
 struct ov6650 *VAR_15 = FUNC_1(VAR_14);
 struct v4l2_rect VAR_16 = VAR_13->r;
 int VAR_17;

 if (VAR_13->which != VAR_9 ||
     VAR_13->target != VAR_8)
  return -VAR_2;

 FUNC_3(&VAR_16.width, 2, VAR_10, 1,
         &VAR_16.height, 2, VAR_3, 1, 0);
 FUNC_3(&VAR_16.left, VAR_0 << 1,
         (VAR_0 << 1) + VAR_10 - (__s32)VAR_16.width, 1,
         &VAR_16.top, VAR_1 << 1,
         (VAR_1 << 1) + VAR_3 - (__s32)VAR_16.height, 1,
         0);

 VAR_17 = FUNC_0(VAR_14, VAR_5, VAR_16.left >> 1);
 if (!VAR_17) {
  VAR_15->rect.left = VAR_16.left;
  VAR_17 = FUNC_0(VAR_14, VAR_4,
    (VAR_16.left + VAR_16.width) >> 1);
 }
 if (!VAR_17) {
  VAR_15->rect.width = VAR_16.width;
  VAR_17 = FUNC_0(VAR_14, VAR_7, VAR_16.top >> 1);
 }
 if (!VAR_17) {
  VAR_15->rect.top = VAR_16.top;
  VAR_17 = FUNC_0(VAR_14, VAR_6,
    (VAR_16.top + VAR_16.height) >> 1);
 }
 if (!VAR_17)
  VAR_15->rect.height = VAR_16.height;

 return VAR_17;
}
