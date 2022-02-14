
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_mbus_framefmt {void* colorspace; void* code; int height; int width; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct mt9t031 {struct v4l2_rect rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct i2c_client*,struct v4l2_rect*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 struct mt9t031* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *,int ,int ,int,int *,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_8,
  struct v4l2_subdev_pad_config *VAR_9,
  struct v4l2_subdev_format *VAR_10)
{
 struct v4l2_mbus_framefmt *VAR_11 = &VAR_10->format;
 struct i2c_client *VAR_12 = FUNC_3(VAR_8);
 struct mt9t031 *VAR_13 = FUNC_2(VAR_12);
 u16 VAR_14, VAR_15;
 struct v4l2_rect VAR_16 = VAR_13->rect;

 if (VAR_10->pad)
  return -VAR_0;

 VAR_11->code = VAR_1;
 VAR_11->colorspace = VAR_6;
 FUNC_4(
   &VAR_11->width, VAR_5, VAR_3, 1,
   &VAR_11->height, VAR_4, VAR_2, 1, 0);

 if (VAR_10->which == VAR_7) {
  VAR_9->try_fmt = *VAR_11;
  return 0;
 }





 VAR_14 = FUNC_1(&VAR_16.width, VAR_11->width, VAR_3);
 VAR_15 = FUNC_1(&VAR_16.height, VAR_11->height, VAR_2);

 VAR_11->code = VAR_1;
 VAR_11->colorspace = VAR_6;


 return FUNC_0(VAR_12, &VAR_16, VAR_14, VAR_15);
}
