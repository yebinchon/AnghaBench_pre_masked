
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int width; int height; } ;
struct v4l2_subdev_selection {scalar_t__ which; scalar_t__ target; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int width; int height; } ;
struct rj54n1 {int resize; int width; int height; TYPE_1__ rect; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int,int,int,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,int*,int*,int*,int*) ;
 struct rj54n1* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int*,int,int ,int ,int*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_5,
    struct v4l2_subdev_pad_config *VAR_6,
    struct v4l2_subdev_selection *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_3(VAR_5);
 struct rj54n1 *VAR_9 = FUNC_2(VAR_8);
 const struct v4l2_rect *VAR_10 = &VAR_7->r;
 int VAR_11, VAR_12, VAR_13 = VAR_10->width, VAR_14 = VAR_10->height;
 int VAR_15;

 if (VAR_7->which != VAR_4 ||
     VAR_7->target != VAR_3)
  return -VAR_0;


 FUNC_4(&VAR_13, 8, VAR_2, 0,
         &VAR_14, 8, VAR_1, 0, 0);

 VAR_11 = (VAR_13 * 1024 + VAR_9->resize / 2) / VAR_9->resize;
 VAR_12 = (VAR_14 * 1024 + VAR_9->resize / 2) / VAR_9->resize;

 FUNC_0(&VAR_8->dev, "Scaling for %dx%d : %u = %dx%d\n",
  VAR_13, VAR_14, VAR_9->resize, VAR_11, VAR_12);

 VAR_15 = FUNC_1(VAR_5, &VAR_13, &VAR_14, &VAR_11, &VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_9->width = VAR_11;
 VAR_9->height = VAR_12;
 VAR_9->resize = VAR_15;
 VAR_9->rect.width = VAR_13;
 VAR_9->rect.height = VAR_14;

 return 0;
}
