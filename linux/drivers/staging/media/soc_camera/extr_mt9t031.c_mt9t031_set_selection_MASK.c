
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {void* height; int top; void* width; int left; } ;
struct v4l2_subdev_selection {scalar_t__ which; scalar_t__ target; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9t031 {int yskip; int xskip; } ;
struct i2c_client {int dummy; } ;


 void* FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct i2c_client*,struct v4l2_rect*,int ,int ) ;
 int FUNC_2 (int *,void**,int ,int ,int ) ;
 struct mt9t031* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_9,
  struct v4l2_subdev_pad_config *VAR_10,
  struct v4l2_subdev_selection *VAR_11)
{
 struct i2c_client *VAR_12 = FUNC_4(VAR_9);
 struct mt9t031 *VAR_13 = FUNC_3(VAR_12);
 struct v4l2_rect VAR_14 = VAR_11->r;

 if (VAR_11->which != VAR_8 ||
     VAR_11->target != VAR_7)
  return -VAR_0;

 VAR_14.width = FUNC_0(VAR_14.width, 2);
 VAR_14.height = FUNC_0(VAR_14.height, 2);

 FUNC_2(&VAR_14.left, &VAR_14.width,
       VAR_1, VAR_5, VAR_3);

 FUNC_2(&VAR_14.top, &VAR_14.height,
       VAR_6, VAR_4, VAR_2);

 return FUNC_1(VAR_12, &VAR_14, VAR_13->xskip, VAR_13->yskip);
}
