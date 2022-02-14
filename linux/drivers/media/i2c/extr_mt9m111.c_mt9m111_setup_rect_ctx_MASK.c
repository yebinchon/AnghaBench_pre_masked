
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {unsigned int width; unsigned int height; } ;
struct mt9m111_context {int reducer_ysize; int reducer_xsize; int reducer_yzoom; int reducer_xzoom; } ;
struct mt9m111 {int subdev; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int ,unsigned int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mt9m111 *VAR_0,
   struct mt9m111_context *VAR_1, struct v4l2_rect *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(&VAR_0->subdev);
 int VAR_6 = FUNC_0(VAR_5, VAR_1->reducer_xzoom, VAR_2->width);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_5, VAR_1->reducer_yzoom, VAR_2->height);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_5, VAR_1->reducer_xsize, VAR_3);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_5, VAR_1->reducer_ysize, VAR_4);
 return VAR_6;
}
